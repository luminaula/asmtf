
/**
 * Copyright (c) 2021 Lumi
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */
#ifndef ASMTF_THREAPOOL_H
#define ASMTF_THREADPOOL_H
#include "register.h"
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

#define ASMTF_THREAD_LOAD_TASK(task) \
        ASMTF_THREAD_LOAD_REGISTER(0,task);\
        ASMTF_THREAD_LOAD_REGISTER(1,task);\
        ASMTF_THREAD_LOAD_REGISTER(2,task);\
        ASMTF_THREAD_LOAD_REGISTER(3,task);\
        ASMTF_THREAD_LOAD_REGISTER(4,task);\
        ASMTF_THREAD_LOAD_REGISTER(5,task)

#define ASMTF_THREAD_LOAD_TASK_P(task) ASMTF_THREAD_LOAD_TASK((*task))

#define ASMTF_THREAD_TASK_SAVE_ARGS(task, pfn, ...)

#define ASMTF_THREAD_TASK_SET_PARAMS5(task, pfn, arg1, arg2, arg3, arg4, arg5) \
    task.args.arg1 = arg1;\
    task.args.arg2 = arg2;\
    task.args.arg3 = arg3;\
    task.args.arg4 = arg4;\
    task.args.arg5 = arg5;

#define ASMTF_THREAD_TASK_SET_PARAM1(task) \
    __asm__("")

#define ASMTF_THREAD_TASK_SET_PARAM2(task) \

#define ASMTF_THREAD_TASK_SET_PARAM4(task) \

#define ASMTF_THREAD_TASK_SET_PARAM5(task) \

#define ASMTF_THREAD_TASK_SET_PARAM6(task) \

#define ASMTF_THREAD_TASK_SET_PARAMS(pfn,...)

#define asmtf_threadpool_enqueue(pool, pfn, ...)

struct asmtf_thread_t;

typedef struct asmtf_task_t {
    union {
        struct {
            asmtf_sysv_call_t args;
            void *p_stack;
            atomic_uintptr_t p_function;
        };
        uint64_t index[8];
    };
    
} asmtf_task_t;



typedef struct asmtf_task_buffer_t {
    void *base;
    uint64_t capacity;
    atomic_ullong tasks_count;
    pthread_cond_t cv;
    pthread_mutex_t mutex;
    pthread_condattr_t cv_attr;
} asmtf_task_buffer_t;


typedef struct asmtf_threadpool_task_buffer_t{
    void *data;

} asmtf_threadpool_task_buffer_t;



typedef struct asmtf_thread_t {
    uint64_t index[16];
    pthread_t handle;
    asmtf_task_t *p_task;
    struct asmtf_thread_t *p_partner;
    asmtf_task_buffer_t *p_task_buffer;
    atomic_bool *running;
    atomic_ullong *states;
    uint64_t states_count;
} asmtf_thread_t;

typedef struct asmtf_threadpool_t {
    asmtf_thread_t **threads;
    uint64_t thread_count;
    atomic_ullong robin;
} asmtf_threadpool_t;

void *asmtf_thread_steal_task(asmtf_threadpool_t *pool);
asmtf_task_t *asmtf_thread_get_next_task(asmtf_task_buffer_t *data);
void *asmtf_thread_loop(void *data);

void asmtf_init_thread(asmtf_thread_t **thread);
asmtf_threadpool_t *asmtf_threadpool_create(size_t count);
void asmtf_threadpool_wait(asmtf_threadpool_t *pool);

void asmtf_threadpool_enqueue_(asmtf_threadpool_t *pool, void *p_function, int arg_count, ...);

#endif