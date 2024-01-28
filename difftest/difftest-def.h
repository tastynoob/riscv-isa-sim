#ifndef __DIFFTEST_DEF_H
#define __DIFFTEST_DEF_H

// #define CPU_ROCKET_CHIP
// #define CPU_NUTSHELL

#define CONFIG_DIFF_FPU
#define CONFIG_DIFF_DEBUG_MODE
// #define CONFIG_DIFF_RVV  // Default off

#if defined(CONFIG_DIFF_RVV)
#define CONFIG_DIFF_ISA_STRING "RV64IMAFDCV_zba_zbb_zbc_zbs_zbkb_zbkc_zbkx_zknd_zkne_zknh_zksed_zksh_svinval"
#else
#define CONFIG_DIFF_ISA_STRING "RV64IMC"
#endif // CONFIG_DIFF_RVV


// 24M
#define CONFIG_MEMORY_SIZE     (24 * 1024 * 1024UL)
#define CONFIG_FLASH_BASE      0x10000000UL
#define CONFIG_FLASH_SIZE      0x100000UL
#define CONFIG_PMP_NUM         0
#define CONFIG_PMP_GRAN        0


#endif
