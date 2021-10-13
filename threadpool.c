/**
 * Copyright (c) 2021 Lumi
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "threadpool.h"
#include "param.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sched.h>
#include <time.h>

asmtf_task_t *asmtf_thread_get_next_task(asmtf_task_buffer_t *buffer) {
    uint32_t spin = 0;
    while(1){
        uint64_t head = atomic_load(&buffer->head);
        if(buffer->tail < head){
            return &buffer->base[buffer->tail++ % buffer->size];
        }
        else{
            if(spin++ >= 20000){
                struct timespec time_sleep;
                timespec_get(&time_sleep,TIME_UTC);
                time_sleep.tv_nsec += 5000000;
                pthread_cond_timedwait(&buffer->cv, &buffer->mutex, &time_sleep);
            }
            sched_yield();
        }
    }
    return NULL;
    
}

//testfun
void bigparam(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t f) {
    printf("%lu\n", a + b + c + d + e + f);
}


void *asmtf_thread_loop(void *data) {
    // Save thread data to stack. This ensures thread data access 
    asmtf_thread_t thread;
    memcpy(&thread,data,sizeof(asmtf_thread_t));

    while (atomic_load(thread.running)) {
        do {
            thread.task = asmtf_thread_get_next_task(thread.task_buffer);
        }while(!thread.task);

        //Save 16 all general purpose registers to threads internal buffer
        ASMTF_THREAD_SAVE_REGISTERS(thread);
        
        //
        uintptr_t tptr = atomic_exchange(&thread.task->p_function,0);
        if(!tptr)
            continue;
        ASMTF_THREAD_LOAD_TASK_P(thread.task);
        __asm__("call %0\n\t"
                :
                : "m"(tptr)
                :);
        ASMTF_THREAD_LOAD_REGISTERS(thread);
        
    }
}

void asmtf_init_thread(asmtf_thread_t **thread) {
    pthread_attr_t attr;
    uint64_t allocSize;
    *thread = malloc(sizeof(asmtf_thread_t));
    asmtf_task_buffer_t *task_buffer = calloc(1,sizeof(asmtf_task_buffer_t));
    task_buffer->base = aligned_alloc(64,sizeof(asmtf_task_t)*1024);
    task_buffer->size = 1024;
    task_buffer->tail = 0;
    task_buffer->ceiling = &task_buffer->base[1024];
    pthread_cond_init(&task_buffer->cv,&task_buffer->cv_attr);

    atomic_init(&task_buffer->head, 0);



    (*thread)->task_buffer = task_buffer;
    (*thread)->running = calloc(1,sizeof(atomic_bool));



    atomic_init((*thread)->running, 1);

    
    pthread_attr_init(&attr);
    pthread_create(&(*thread)->handle, &attr, asmtf_thread_loop, (void *)*thread);
}

asmtf_threadpool_t *asmtf_threadpool_create(uint64_t count) {
    asmtf_threadpool_t *thread_pool;
    thread_pool = malloc(sizeof(asmtf_threadpool_t));
    thread_pool->thread_count = count;
    thread_pool->threads = malloc(sizeof(asmtf_thread_t *));
    for (uint64_t i = 0; i < thread_pool->thread_count; i++) {
        asmtf_init_thread(&thread_pool->threads[i]);
    }
    return thread_pool;
}

void asmtf_threadpool_wait(asmtf_threadpool_t *pool) {
    while(1){

    }
}