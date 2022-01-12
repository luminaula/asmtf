// Copyright (c) 2021 "Lumi"
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifndef ASMTF_THIEVING_QUEUE_H
#define ASMTF_THIEVING_QUEUE_h

#include <stdlib.h>
#include <stdint.h>
#include <stdatomic.h>

#define ASMTF_QUEUE_SLAB_SIZE 64
#define ASMTF_QUEUE_BLOCK_SIZE 512


#define ASMTF_QUEUE_HEADER_UP_BITS_LOCATION 48
#define ASMTF_QUEUE_HEADER_DOWN_BITS_LOCATION 32

#define ASMTF_QUEUE_HEADER_UP_MASK (0xFFFFl << ASMTF_QUEUE_HEADER_UP_BITS_LOCATION)
#define ASMTF_QUEUE_HEADER_DOWN_MASK (0xFFFFl << ASMTF_QUEUE_HEADER_DOWN_BITS_LOCATION)




typedef struct asmtf_thieving_queue_block_header{
    atomic_ulong header;
} asmtf_thieving_queue_block;

typedef struct asmtf_thieving_queue{
    void *data;
} asmtf_thieving_queue;

asmtf_thieving_queue *asmtf_thieving_queue_create();

#endif