/**
 * Copyright (c) 2021 "Lumi"
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */


#include "thievingqueue.h"

asmtf_thieving_queue *asmtf_thieving_queue_create() {
    asmtf_thieving_queue *queue = calloc(1, sizeof(asmtf_thieving_queue));
    queue->data = calloc(1,ASMTF_SLAB_SIZE))
}