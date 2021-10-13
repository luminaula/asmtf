/**
 * Copyright (c) 2021 Lumi
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#pragma once
#include <stdatomic.h>
#include <stdint.h>

#define ASMTF_THREAD_SAVE_RDI(loc) \
    __asm__(                       \
        "mov %0, rdi\n\t"          \
        :                          \
        : "m"(loc)                 \
        :)
#define ASMTF_THREAD_SAVE_RSI(loc) \
    __asm__(                       \
        "mov %0, rsi\n\t"          \
        :                          \
        : "m"(loc)                 \
        :)
#define ASMTF_THREAD_SAVE_RDX(loc) \
    __asm__(                       \
        "mov %0, rdx\n\t"          \
        :                          \
        : "m"(loc)                 \
        :)
#define ASMTF_THREAD_SAVE_RCX(loc) \
    __asm__(                       \
        "mov %0, rcx\n\t"          \
        :                          \
        : "m"(loc)                 \
        :)

#define ASMTF_THREAD_SAVE_RBX(loc) \
    __asm__("mov %0, rbx\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_RSP(loc) \
    __asm__("mov %0, rsp\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_RBP(loc) \
    __asm__("mov %0, rbp\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_SAVE_RAX(loc) \
    __asm__("mov %0, rax\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_SAVE_R8(loc) \
    __asm__(                      \
        "mov %0, r8\n\t"          \
        :                         \
        : "m"(loc)                \
        :)
#define ASMTF_THREAD_SAVE_R9(loc) \
    __asm__(                      \
        "mov %0, r9\n\t"          \
        :                         \
        : "m"(loc)                \
        :)

#define ASMTF_THREAD_SAVE_R10(loc) \
    __asm__("mov %0, r10\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_R11(loc) \
    __asm__("mov %0, r11\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_R12(loc) \
    __asm__("mov %0, r12\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_R13(loc) \
    __asm__("mov %0, r13\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_R14(loc) \
    __asm__("mov %0, r14\n\t"      \
            :                      \
            : "m"(loc)             \
            :)
#define ASMTF_THREAD_SAVE_R15(loc) \
    __asm__("mov %0, r15\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RDI(loc) \
    __asm__("mov rdi, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RSI(loc) \
    __asm__("mov rsi, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RDX(loc) \
    __asm__("mov rdx, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RCX(loc) \
    __asm__("mov rcx, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R8(loc) \
    __asm__("mov r8, %0\n\t"      \
            :                     \
            : "m"(loc)            \
            :)

#define ASMTF_THREAD_LOAD_R9(loc) \
    __asm__("mov r9, %0\n\t"      \
            :                     \
            : "m"(loc)            \
            :)

#define ASMTF_THREAD_LOAD_RBX(loc) \
    __asm__("mov rbx, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RSP(loc) \
    __asm__("mov rsp, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RBP(loc) \
    __asm__("mov rbp, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_RAX(loc) \
    __asm__("mov rax, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R10(loc) \
    __asm__("mov r10, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R11(loc) \
    __asm__("mov r11, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R12(loc) \
    __asm__("mov r12, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R13(loc) \
    __asm__("mov r13, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R14(loc) \
    __asm__("mov r14, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_R15(loc) \
    __asm__("mov r15, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_SAVE_REGISTER0(loc) ASMTF_THREAD_SAVE_RDI(loc)
#define ASMTF_THREAD_SAVE_REGISTER1(loc) ASMTF_THREAD_SAVE_RSI(loc)
#define ASMTF_THREAD_SAVE_REGISTER2(loc) ASMTF_THREAD_SAVE_RDX(loc)
#define ASMTF_THREAD_SAVE_REGISTER3(loc) ASMTF_THREAD_SAVE_RCX(loc)
#define ASMTF_THREAD_SAVE_REGISTER4(loc) ASMTF_THREAD_SAVE_R8(loc)
#define ASMTF_THREAD_SAVE_REGISTER5(loc) ASMTF_THREAD_SAVE_R9(loc)
#define ASMTF_THREAD_SAVE_REGISTER6(loc) ASMTF_THREAD_SAVE_RBX(loc)
#define ASMTF_THREAD_SAVE_REGISTER7(loc) ASMTF_THREAD_SAVE_RSP(loc)
#define ASMTF_THREAD_SAVE_REGISTER8(loc) ASMTF_THREAD_SAVE_RBP(loc)
#define ASMTF_THREAD_SAVE_REGISTER9(loc) ASMTF_THREAD_SAVE_RAX(loc)
#define ASMTF_THREAD_SAVE_REGISTER10(loc) ASMTF_THREAD_SAVE_R10(loc)
#define ASMTF_THREAD_SAVE_REGISTER11(loc) ASMTF_THREAD_SAVE_R11(loc)
#define ASMTF_THREAD_SAVE_REGISTER12(loc) ASMTF_THREAD_SAVE_R12(loc)
#define ASMTF_THREAD_SAVE_REGISTER13(loc) ASMTF_THREAD_SAVE_R13(loc)
#define ASMTF_THREAD_SAVE_REGISTER14(loc) ASMTF_THREAD_SAVE_R14(loc)
#define ASMTF_THREAD_SAVE_REGISTER15(loc) ASMTF_THREAD_SAVE_R15(loc)

#define ASMTF_THREAD_LOAD_REGISTER0(loc) ASMTF_THREAD_LOAD_RDI(loc)
#define ASMTF_THREAD_LOAD_REGISTER1(loc) ASMTF_THREAD_LOAD_RSI(loc)
#define ASMTF_THREAD_LOAD_REGISTER2(loc) ASMTF_THREAD_LOAD_RDX(loc)
#define ASMTF_THREAD_LOAD_REGISTER3(loc) ASMTF_THREAD_LOAD_RCX(loc)
#define ASMTF_THREAD_LOAD_REGISTER4(loc) ASMTF_THREAD_LOAD_R8(loc)
#define ASMTF_THREAD_LOAD_REGISTER5(loc) ASMTF_THREAD_LOAD_R9(loc)
#define ASMTF_THREAD_LOAD_REGISTER6(loc) ASMTF_THREAD_LOAD_RBX(loc)
#define ASMTF_THREAD_LOAD_REGISTER7(loc) ASMTF_THREAD_LOAD_RSP(loc)
#define ASMTF_THREAD_LOAD_REGISTER8(loc) ASMTF_THREAD_LOAD_RBP(loc)
#define ASMTF_THREAD_LOAD_REGISTER9(loc) ASMTF_THREAD_LOAD_RAX(loc)
#define ASMTF_THREAD_LOAD_REGISTER10(loc) ASMTF_THREAD_LOAD_R10(loc)
#define ASMTF_THREAD_LOAD_REGISTER11(loc) ASMTF_THREAD_LOAD_R11(loc)
#define ASMTF_THREAD_LOAD_REGISTER12(loc) ASMTF_THREAD_LOAD_R12(loc)
#define ASMTF_THREAD_LOAD_REGISTER13(loc) ASMTF_THREAD_LOAD_R13(loc)
#define ASMTF_THREAD_LOAD_REGISTER14(loc) ASMTF_THREAD_LOAD_R14(loc)
#define ASMTF_THREAD_LOAD_REGISTER15(loc) ASMTF_THREAD_LOAD_R15(loc)

#define ASMTF_THREAD_SAVE_REGISTER(num, loc) ASMTF_THREAD_SAVE_REGISTER##num(loc.index[num])
#define ASMTF_THREAD_LOAD_REGISTER(num, loc) ASMTF_THREAD_LOAD_REGISTER##num(loc.index[num])

#define ASMTF_THREAD_SAVE_REGISTERS(loc) \
    ASMTF_THREAD_SAVE_REGISTER(0, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(1, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(2, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(3, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(4, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(5, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(6, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(7, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(8, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(9, loc);  \
    ASMTF_THREAD_SAVE_REGISTER(10, loc); \
    ASMTF_THREAD_SAVE_REGISTER(11, loc); \
    ASMTF_THREAD_SAVE_REGISTER(12, loc); \
    ASMTF_THREAD_SAVE_REGISTER(13, loc); \
    ASMTF_THREAD_SAVE_REGISTER(14, loc); \
    ASMTF_THREAD_SAVE_REGISTER(15, loc)

#define ASMTF_THREAD_LOAD_REGISTERS(loc) \
    ASMTF_THREAD_LOAD_REGISTER(0, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(1, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(2, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(3, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(4, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(5, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(6, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(7, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(8, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(9, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(10, loc); \
    ASMTF_THREAD_LOAD_REGISTER(11, loc); \
    ASMTF_THREAD_LOAD_REGISTER(12, loc); \
    ASMTF_THREAD_LOAD_REGISTER(13, loc); \
    ASMTF_THREAD_LOAD_REGISTER(14, loc); \
    ASMTF_THREAD_LOAD_REGISTER(15, loc)

struct asmtf_sysv_call_t;

/**
 * @brief 
 */
typedef struct asmtf_sysv_call_t {

    union {
        /**
         * 
         * @brief arg1 
         * 
         */
        uint64_t rdi;
        uint64_t arg1;
    };

    union {
        /**
         * @brief arg2
         * 
         */
        uint64_t rsi;
        uint64_t arg2;
    };

    union {
        /**
        * @brief arg3
        * 
        */
        uint64_t rdx;
        uint64_t arg3;
    };
    union {
        /**
         * @brief arg4
         * 
         */
        uint64_t rcx;
        uint64_t arg4;
    };
    union {
        /**
         * @brief arg5
         * 
         */
        uint64_t r8;
        uint64_t arg5;
    };
    union {
        /**
         * @brief arg6
         * 
         */
        uint64_t r9;
        uint64_t arg6;
    };

} asmtf_sysv_call_t;

/**
 * @brief general purpose registers in x86_64
 * 
 */
typedef struct asmtf_x64_registers {

    union {
        struct {
            union {
                /**
                 * 
                 * @brief arg1 
                 * 
                 */
                uint64_t rdi;
                uint64_t arg1;
            };

            union {
                /**
                 * @brief arg2
                 * 
                 */
                uint64_t rsi;
                uint64_t arg2;
            };

            union {
                /**
                * @brief arg3
                * 
                */
                uint64_t rdx;
                uint64_t arg3;
            };
            union {
                /**
                 * @brief arg4
                 * 
                 */
                uint64_t rcx;
                uint64_t arg4;
            };
            union {
                /**
                 * @brief arg5
                 * 
                 */
                uint64_t r8;
                uint64_t arg5;
            };
            union {
                /**
                 * @brief arg6
                 * 
                 */
                uint64_t r9;
                uint64_t arg6;
            };

            /**
             * @brief preserved
             * 
             */
            uint64_t rbx;

            /**
             * @brief stack pointer, preserved
             * 
             */
            uint64_t rsp;

            /**
             * @brief base pointer, preserved
             * 
             */
            uint64_t rbp;

            /**
             * @brief return value, scratch
             * 
             */
            uint64_t rax;

            /**
             * @brief scratch
             * 
             */
            uint64_t r10;

            /**
             * @brief scratch
             * 
             */
            uint64_t r11;

            /**
             * @brief scratch
             * 
             */
            uint64_t r12;

            /**
             * @brief scratch
             * 
             */
            uint64_t r13;

            /**
             * @brief scratch
             * 
             */
            uint64_t r14;

            /**
             * @brief scratch
             * 
             */
            uint64_t r15;
        };
        uint64_t index[16];
    };
} asmtf_x64_registers;