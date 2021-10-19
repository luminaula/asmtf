// Copyright (c) 2021 "Lumi Miettinen"
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifndef ASMTF_THIEVING_QUEUE_H
#define ASMTF_THIEVING_QUEUE_h

#include <stdlib.h>

#define ASMTF_QUEUE_SLAB_SIZE 64
#define ASMTF_QUEUE_BLOCK_SIZE 512

typedef struct asmtf_thieving_queue_block_header{
    
} asmtf_thieving_queue_block;

typedef struct asmtf_thieving_queue{
    void *data;
} asmtf_thieving_queue;

asmtf_thieving_queue *asmtf_thieving_queue_create();

#endif