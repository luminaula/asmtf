#include <assert.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include "threadpool.h"


int main(int argc, char **argv) {
    //printf("%lu\n",sizeof(asmtf_task_t));
    asmtf_threadpool_t *pool = asmtf_threadpool_create(4);
    asmtf_threadpool_wait(pool);
    return EXIT_SUCCESS;
}
