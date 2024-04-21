#ifndef __VFMW_SYSCONFIG_HEADER__
#define __VFMW_SYSCONFIG_HEADER__

/*可支持的VDH个数*/
#define MAX_VDH_NUM 1

/*可支持的SCD个数,总是与VDH成对交付*/
#define MAX_SCD_NUM  MAX_VDH_NUM
#define MAX_DSP_NUM  MAX_VDH_NUM

/*表示复杂场景下DSP的加载情况*/
#define LOWDLY_DSP_ID  (0)
#define AVS_DSP_ID     (1)

/* 系统控制寄存器地址和位域 */
#define SCD_RESET_REG_PHY_ADDR     0xf8a22078   //scd
#define SCD_RESET_REG_PHY_ADDR_1   SCD_RESET_REG_PHY_ADDR   //scd

/* 硬件加速IP接口寄存器分址 */
#define VDM_REG_PHY_ADDR       0xf8c30000     // VDM0 寄存器映射到ARM空间的地址   asci:0xf8c30000
#define VDM_REG_PHY_ADDR_1     0xf9c50000     // VDM1寄存器映射到ARM空间的地址
#define DNR_REG_PHY_ADDR       0x10450000     // DNR
#define SCD_REG_PHY_ADDR       0xf8c3c000     // scd 寄存器映射到ARM空间的地址   asci:0xf8c3c000
#define SCD_REG_PHY_ADDR_1     0xf9c5c000     // scd1 寄存器映射到ARM空间的地址
#define FOD_REG_PHY_ADDR       0x10150000     // fod 寄存器映射到ARM空间的地址
#define BPD_REG_PHY_ADDR       0xf8c3d000     // asci:0xf8c3d000
#define BTL_REG_PHY_ADDR       0xf8d00000     // BTL寄存器映射到ARM空间的地址，起始地址待定
#define SYSTEM_REG_PHY_ADDR    0xf8a22000     //  系统寄存器

#define SYSTEM_REG_RANGE       (1024*1024)
/* 中断号 */
#ifdef ENV_SOS_KERNEL
#define VDM_INT_NUM            (105+32)
#define VDM_INT_NUM_1          (136+32)
#define SCD_INT_NUM            (106+32)
#define SCD_INT_NUM_1          (137+32)
#define MMU_VDH_NUM            (148+32)
#define VDH_IRQ_NAME_INDEX     (1)
#define SCD_IRQ_NAME_INDEX     (5)
#define MMU_IRQ_NAME_INDEX     (14)
#else
#define VDM_INT_NUM            (95+32)
#define VDM_INT_NUM_1          (136+32)
#define SCD_INT_NUM            (104+32)
#define SCD_INT_NUM_1          (137+32)
#define MMU_VDH_NUM            (149+32)
#define VDH_IRQ_NAME_INDEX     (0)
#define SCD_IRQ_NAME_INDEX     (4)
#define MMU_IRQ_NAME_INDEX     (13)

#endif

#define BPD_INT_NUM            (99+32)
#define DNR_INT_NUM            (61+32)
#define BTL_INT_NUM            (103+32)
#ifdef ENV_SOS_KERNEL
#define BOARD_MEM_BASE_ADDR    (0x3B000000) //sos,need sure
#define BOARD_MEM_TOTAL_SIZE   (72*1024*1024)
#else
/* 测试单板上可被视频解码使用的memory预算 */
//#define BOARD_MEM_BASE_ADDR    0x98000000
#define BOARD_MEM_BASE_ADDR    0x08000000
#define BOARD_MEM_TOTAL_SIZE   (72*1024*1024)
#endif
#endif
