/**
 * Copyright (c) 2021 Lumi
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

//

#pragma once
#include <immintrin.h>
#include <stdatomic.h>
#include <stdint.h>

enum asmtf_register_id {
    REGISTER_RDI = 0,
    REGISTER_RSI,
    REGISTER_RDX,
    REGISTER_RCX,
    REGISTER_R8,
    REGISTER_R9,
    REGISTER_RBX,
    REGISTER_RSP,
    REGISTER_RBP,
    REGISTER_RAX,
    REGISTER_R10,
    REGISTER_R11,
    REGISTER_R12,
    REGISTER_R13,
    REGISTER_R14,
    REGISTER_R15
};

#define ASMTF_THREAD_STORE_REGISTER_RDI(loc) \
    __asm__(                        \
        "mov %0, rdi\n\t"           \
        :                           \
        : "m"(loc)                  \
        :)
#define ASMTF_THREAD_STORE_REGISTER_RSI(loc) \
    __asm__(                        \
        "mov %0, rsi\n\t"           \
        :                           \
        : "m"(loc)                  \
        :)
#define ASMTF_THREAD_STORE_REGISTER_RDX(loc) \
    __asm__(                        \
        "mov %0, rdx\n\t"           \
        :                           \
        : "m"(loc)                  \
        :)
#define ASMTF_THREAD_STORE_REGISTER_RCX(loc) \
    __asm__(                        \
        "mov %0, rcx\n\t"           \
        :                           \
        : "m"(loc)                  \
        :)

#define ASMTF_THREAD_STORE_REGISTER_RBX(loc) \
    __asm__("mov %0, rbx\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_RSP(loc) \
    __asm__("mov %0, rsp\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_RBP(loc) \
    __asm__("mov %0, rbp\n\t"       \
            :                       \
            : "m"(loc)              \
            :)

#define ASMTF_THREAD_STORE_REGISTER_RAX(loc) \
    __asm__("mov %0, rax\n\t"       \
            :                       \
            : "m"(loc)              \
            :)

#define ASMTF_THREAD_STORE_REGISTER_R8(loc) \
    __asm__(                       \
        "mov %0, r8\n\t"           \
        :                          \
        : "m"(loc)                 \
        :)
#define ASMTF_THREAD_STORE_REGISTER_R9(loc) \
    __asm__(                       \
        "mov %0, r9\n\t"           \
        :                          \
        : "m"(loc)                 \
        :)

#define ASMTF_THREAD_STORE_REGISTER_R10(loc) \
    __asm__("mov %0, r10\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_R11(loc) \
    __asm__("mov %0, r11\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_R12(loc) \
    __asm__("mov %0, r12\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_R13(loc) \
    __asm__("mov %0, r13\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_R14(loc) \
    __asm__("mov %0, r14\n\t"       \
            :                       \
            : "m"(loc)              \
            :)
#define ASMTF_THREAD_STORE_REGISTER_R15(loc) \
    __asm__("mov %0, r15\n\t"       \
            :                       \
            : "m"(loc)              \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RDI(loc) \
    __asm__("mov rdi, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RSI(loc) \
    __asm__("mov rsi, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RDX(loc) \
    __asm__("mov rdx, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RCX(loc) \
    __asm__("mov rcx, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R8(loc) \
    __asm__("mov r8, %0\n\t"      \
            :                     \
            : "m"(loc)            \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R9(loc) \
    __asm__("mov r9, %0\n\t"      \
            :                     \
            : "m"(loc)            \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RBX(loc) \
    __asm__("mov rbx, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RSP(loc) \
    __asm__("mov rsp, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RBP(loc) \
    __asm__("mov rbp, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_RAX(loc) \
    __asm__("mov rax, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R10(loc) \
    __asm__("mov r10, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R11(loc) \
    __asm__("mov r11, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R12(loc) \
    __asm__("mov r12, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R13(loc) \
    __asm__("mov r13, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R14(loc) \
    __asm__("mov r14, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_LOAD_REGISTER_R15(loc) \
    __asm__("mov r15, %0\n\t"      \
            :                      \
            : "m"(loc)             \
            :)

#define ASMTF_THREAD_STORE_REGISTER(register, loc) ASMTF_THREAD_STORE_##register(loc.index[(int)register])
#define ASMTF_THREAD_LOAD_REGISTER(register, loc) ASMTF_THREAD_LOAD_##register(loc.index[(int)register])

#define ASMTF_THREAD_STORE_REGISTERS(loc) \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RDI, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RSI, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RDX, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RCX, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R8, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R9, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RBX, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RSP, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RBP, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_RAX, loc);  \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R10, loc); \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R11, loc); \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R12, loc); \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R13, loc); \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R14, loc); \
    ASMTF_THREAD_STORE_REGISTER(REGISTER_R15, loc)

#define ASMTF_THREAD_LOAD_REGISTERS(loc) \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RDI, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RSI, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RDX, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RCX, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R8, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R9, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RBX, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RSP, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RBP, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_RAX, loc);  \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R10, loc); \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R11, loc); \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R12, loc); \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R13, loc); \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R14, loc); \
    ASMTF_THREAD_LOAD_REGISTER(REGISTER_R15, loc)



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
        uint64_t reg[16];
    };
} asmtf_x64_registers;

typedef struct asmtf_x64_register_extensions {
    union {
        union {
            struct {
                union {
                    float xmm0f_upper[4];
                    double xmm0d_upper[2];
                    __m128 xmm0_upper;
                };
                union {
                    float xmm0f_lower[4];
                    double xmm0d_lower[2];
                    __m128 xmm0_lower;
                };
            };
            __m256 ymm0;
            float ymm0f[8];
            double ymm0d[4];
        };
        union {
            struct {
                union {
                    float xmm1f_upper[4];
                    double xmm1d_upper[2];
                    __m128 xmm1_upper;
                };
                union {
                    float xmm1f_lower[4];
                    double xmm1d_lower[2];
                    __m128 xmm1_lower;
                };
            };
            __m256 ymm1;
            float ymm1f[8];
            double ymm1d[4];
        };
        union {
            struct {
                union {
                    float xmm2f_upper[4];
                    double xmm2d_upper[2];
                    __m128 xmm2_upper;
                };
                union {
                    float xmm2f_lower[4];
                    double xmm2d_lower[2];
                    __m128 xmm2_lower;
                };
            };
            __m256 ymm2;
            float ymm2f[8];
            double ymm2d[4];
        };
        union {
            struct {
                union {
                    float xmm3f_upper[4];
                    double xmm3d_upper[2];
                    __m128 xmm3_upper;
                };
                union {
                    float xmm3f_lower[4];
                    double xmm3d_lower[2];
                    __m128 xmm3_lower;
                };
            };
            __m256 ymm3;
            float ymm3f[8];
            double ymm3d[4];
        };
        union {
            struct {
                union {
                    float xmm4f_upper[4];
                    double xmm4d_upper[2];
                    __m128 xmm4_upper;
                };
                union {
                    float xmm4f_lower[4];
                    double xmm4d_lower[2];
                    __m128 xmm4_lower;
                };
            };
            __m256 ymm4;
            float ymm4f[8];
            double ymm4d[4];
        };
        union {
            struct {
                union {
                    float xmm5f_upper[4];
                    double xmm5d_upper[2];
                    __m128 xmm5_upper;
                };
                union {
                    float xmm5f_lower[4];
                    double xmm5d_lower[2];
                    __m128 xmm5_lower;
                };
            };
            __m256 ymm5;
            float ymm5f[8];
            double ymm5d[4];
        };
        union {
            struct {
                union {
                    float xmm6f_upper[4];
                    double xmm6d_upper[2];
                    __m128 xmm6_upper;
                };
                union {
                    float xmm6f_lower[4];
                    double xmm6d_lower[2];
                    __m128 xmm6_lower;
                };
            };
            __m256 ymm6;
            float ymm6f[8];
            double ymm6d[4];
        };
        union {
            struct {
                union {
                    float xmm7f_upper[4];
                    double xmm7d_upper[2];
                    __m128 xmm7_upper;
                };
                union {
                    float xmm7f_lower[4];
                    double xmm7d_lower[2];
                    __m128 xmm7_lower;
                };
            };
            __m256 ymm7;
            float ymm7f[8];
            double ymm7d[4];
        };
        union {
            struct {
                union {
                    float xmm8f_upper[4];
                    double xmm8d_upper[2];
                    __m128 xmm8_upper;
                };
                union {
                    float xmm8f_lower[4];
                    double xmm8d_lower[2];
                    __m128 xmm8_lower;
                };
            };
            __m256 ymm8;
            float ymm8f[8];
            double ymm8d[4];
        };
        union {
            struct {
                union {
                    float xmm9f_upper[4];
                    double xmm9d_upper[2];
                    __m128 xmm9_upper;
                };
                union {
                    float xmm9f_lower[4];
                    double xmm9d_lower[2];
                    __m128 xmm9_lower;
                };
            };
            __m256 ymm9;
            float ymm9f[8];
            double ymm9d[4];
        };
        union {
            struct {
                union {
                    float xmm10f_upper[4];
                    double xmm10d_upper[2];
                    __m128 xmm10_upper;
                };
                union {
                    float xmm10f_lower[4];
                    double xmm10d_lower[2];
                    __m128 xmm10_lower;
                };
            };
            __m256 ymm10;
            float ymm10f[8];
            double ymm10d[4];
        };
        union {
            struct {
                union {
                    float xmm11f_upper[4];
                    double xmm11d_upper[2];
                    __m128 xmm11_upper;
                };
                union {
                    float xmm11f_lower[4];
                    double xmm11d_lower[2];
                    __m128 xmm11_lower;
                };
            };
            __m256 ymm11;
            float ymm11f[8];
            double ymm11d[4];
        };
        union {
            struct {
                union {
                    float xmm12f_upper[4];
                    double xmm12d_upper[2];
                    __m128 xmm12_upper;
                };
                union {
                    float xmm12f_lower[4];
                    double xmm12d_lower[2];
                    __m128 xmm12_lower;
                };
            };
            __m256 ymm12;
            float ymm12f[8];
            double ymm12d[4];
        };
        union {
            struct {
                union {
                    float xmm13f_upper[4];
                    double xmm13d_upper[2];
                    __m128 xmm13_upper;
                };
                union {
                    float xmm13f_lower[4];
                    double xmm13d_lower[2];
                    __m128 xmm13_lower;
                };
            };
            __m256 ymm13;
            float ymm13f[8];
            double ymm13d[4];
        };

        union {
            struct {
                union {
                    float xmm14f_upper[4];
                    double xmm14d_upper[2];
                    __m128 xmm14_upper;
                };
                union {
                    float xmm14f_lower[4];
                    double xmm14d_lower[2];
                    __m128 xmm14_lower;
                };
            };
            __m256 ymm14;
            float ymm14f[8];
            double ymm14d[4];
        };
        union {
            struct {
                union {
                    float xmm15f_upper[4];
                    double xmm15d_upper[2];
                    __m128 xmm15_upper;
                };
                union {
                    float xmm15f_lower[4];
                    double xmm15d_lower[2];
                    __m128 xmm15_lower;
                };
            };
            __m256 ymm15;
            float ymm15f[8];
            double ymm15d[4];
        };
        __m256 reg[16];
    };
} asmtf_x64_register_extensions;