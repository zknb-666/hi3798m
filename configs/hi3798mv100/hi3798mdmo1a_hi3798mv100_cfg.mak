#
# Automatically generated make config: don't edit
# SDK version: KERNELVERSION
# Sun May  6 11:48:42 2018
#

#
# Base
#
CFG_LINUX_PRODUCT=y
# CFG_ANDROID_PRODUCT is not set
CFG_PRODUCT_TYPE=linux
# CFG_HI_USER_MODE is not set
CFG_HI_ENG_MODE=y
# CFG_HI3716MV410 is not set
# CFG_HI3716MV420 is not set
# CFG_HI3716MV450 is not set
CFG_HI3798MV100=y
# CFG_HI3798MV200 is not set
# CFG_HI3798MV300 is not set
# CFG_HI3798MV310 is not set
# CFG_HI3798MV300H is not set
# CFG_HI3796MV100 is not set
# CFG_HI3796MV200 is not set
# CFG_HI3798CV200 is not set
CFG_HI_CHIP_TYPE=hi3798mv100
# CFG_HI_ADVCA_SUPPORT is not set

#
# System Config
#
CFG_HI_32BIT_SYSTEM=y
# CFG_HI_64BIT_SYSTEM is not set
CFG_HI_USER_SPACE_LIB=y
# CFG_HI_USER_SPACE_LIB64 is not set
# CFG_HI_USER_SPACE_ALL_LIB is not set
CFG_HI_CPU_ARCH=arm

#
# Toolchains Config
#
# CFG_ARM_HISTBV300_LINUX is not set
CFG_ARM_HISTBV310_LINUX=y
# CFG_ARM_HISTBV320_LINUX is not set
CFG_HI_ARM_TOOLCHAINS_NAME=arm-histbv310-linux
CFG_AARCH64_HISTBV100_LINUX=y
CFG_HI_AARCH64_TOOLCHAINS_NAME=aarch64-histbv100-linux
CFG_HI_OUT_DIR=hi3798mdmo1a
CFG_HI_USB3_SUPPORT=y
CFG_HI_JPGE_SUPPORT=y
CFG_HI_OTP_KLAD_V100=y
# CFG_HI_OPTM_SIZE_SUPPORT is not set

#
# Debug Config
#
CFG_HI_LOG_SUPPORT=y
# CFG_HI_LOG_LEVEL_FATAL is not set
# CFG_HI_LOG_LEVEL_ERROR is not set
# CFG_HI_LOG_LEVEL_WARNING is not set
# CFG_HI_LOG_LEVEL_INFO is not set
CFG_HI_LOG_LEVEL_DEBUG=y
CFG_HI_LOG_LEVEL=4
CFG_HI_LOG_NETWORK_SUPPORT=y
CFG_HI_LOG_UDISK_SUPPORT=y
CFG_HI_PROC_SUPPORT=y
CFG_HI_PROC_WRITE_SUPPORT=y

#
# Board
#

#
# Ethernet Config
#
CFG_HI_ETH_SUPPORT=y

#
# Flash Config
#
# CFG_HI_NAND_FLASH_SUPPORT is not set
CFG_HI_EMMC_SUPPORT=y

#
# Demux Config
#

#
# IF Config
#
CFG_HI_IF_TYPE=parallel_nosync_188
CFG_HI_IF_BIT_SELECTOR=0

#
# TSI Config
#
CFG_HI_TSI_NUMBER=4

#
# TSI0 Config
#
CFG_HI_TSI0_TYPE=parallel_nosync_188
CFG_HI_TSI0_CLK_PHASE_REVERSE=1
CFG_HI_TSI0_BIT_SELECTOR=0
CFG_HI_TSI0_SERIAL_SHARE_CLK=tsi0

#
# TSI1 Config
#
CFG_HI_TSI1_TYPE=parallel_nosync_188
CFG_HI_TSI1_CLK_PHASE_REVERSE=1
CFG_HI_TSI1_BIT_SELECTOR=0
CFG_HI_TSI1_SERIAL_SHARE_CLK=tsi1

#
# TSI2 Config
#
CFG_HI_TSI2_TYPE=parallel_nosync_188
CFG_HI_TSI2_CLK_PHASE_REVERSE=1
CFG_HI_TSI2_BIT_SELECTOR=0
CFG_HI_TSI2_SERIAL_SHARE_CLK=tsi2

#
# TSI3 Config
#
CFG_HI_TSI3_TYPE=parallel_nosync_188
CFG_HI_TSI3_CLK_PHASE_REVERSE=1
CFG_HI_TSI3_BIT_SELECTOR=0
CFG_HI_TSI3_SERIAL_SHARE_CLK=tsi3

#
# TSI4 Config
#
CFG_HI_TSI4_TYPE=parallel_nosync_188
CFG_HI_TSI4_CLK_PHASE_REVERSE=1
CFG_HI_TSI4_BIT_SELECTOR=0
CFG_HI_TSI4_SERIAL_SHARE_CLK=tsi4

#
# TSI5 Config
#
CFG_HI_TSI5_TYPE=parallel_nosync_188
CFG_HI_TSI5_CLK_PHASE_REVERSE=1
CFG_HI_TSI5_BIT_SELECTOR=0
CFG_HI_TSI5_SERIAL_SHARE_CLK=tsi5

#
# TSI6 Config
#
CFG_HI_TSI6_TYPE=parallel_nosync_188
CFG_HI_TSI6_CLK_PHASE_REVERSE=0
CFG_HI_TSI6_BIT_SELECTOR=1
CFG_HI_TSI6_SERIAL_SHARE_CLK=tsi6

#
# TSO Config
#
CFG_HI_TSO_NUMBER=2

#
# TSO0 Config
#
CFG_HI_TSO0_CLK_100M=y
# CFG_HI_TSO0_CLK_150M is not set
# CFG_HI_TSO0_CLK_1200M is not set
# CFG_HI_TSO0_CLK_1500M is not set
CFG_HI_TSO0_CLK_MODE_NORMAL=y
# CFG_HI_TSO0_CLK_MODE_JITTER is not set
CFG_HI_TSO0_VALID_ACTIVE_OUTPUT=y
# CFG_HI_TSO0_VALID_ACTIVE_HIGH is not set
CFG_HI_TSO0_SERIAL=y
# CFG_HI_TSO0_PARALLEL is not set
CFG_HI_TSO0_SERIAL_BIT_0=y
# CFG_HI_TSO0_SERIAL_BIT_7 is not set

#
# TSO1 Config
#
CFG_HI_TSO1_CLK_100M=y
# CFG_HI_TSO1_CLK_150M is not set
# CFG_HI_TSO1_CLK_1200M is not set
# CFG_HI_TSO1_CLK_1500M is not set
CFG_HI_TSO1_CLK_MODE_NORMAL=y
# CFG_HI_TSO1_CLK_MODE_JITTER is not set
CFG_HI_TSO1_VALID_ACTIVE_OUTPUT=y
# CFG_HI_TSO1_VALID_ACTIVE_HIGH is not set
CFG_HI_TSO1_SERIAL=y
# CFG_HI_TSO1_PARALLEL is not set
CFG_HI_TSO1_SERIAL_BIT_0=y
# CFG_HI_TSO1_SERIAL_BIT_7 is not set
# CFG_HI_KEYLED_74HC164_SELECT is not set
# CFG_HI_KEYLED_GPIOKEY_SELECT is not set
CFG_HI_KEYLED_CT1642_SELECT=y
# CFG_HI_KEYLED_PT6961_SELECT is not set
# CFG_HI_KEYLED_PT6964_SELECT is not set
# CFG_HI_KEYLED_FD650_SELECT is not set
CFG_HI_GPIO_LIGHT_SUPPORT=y
CFG_HI_POSITIVE_GPIO_LIGHT_NUMBER=0x2e
CFG_HI_NEGATIVE_GPIO_LIGHT_NUMBER=0x2d
CFG_HI_POSITIVE_GPIO_LIGHT_NUMBER_QFP=0x2a
CFG_HI_SND_MUTECTL_SUPPORT=y
CFG_HI_SND_MUTECTL_GPIO=0x23
CFG_HI_SND_MUTECTL_LEVEL=0

#
# Video DAC Config
#
CFG_HI_DAC_CVBS=0
CFG_HI_VO_VDAC_LC_CIRCUIT=y
# CFG_HI_VO_VDAC_VIDEO_BUFFER is not set

#
# Boot Regfile Config
#
CFG_HI_BOOT_REG_NAME=hi3798mdmo1a_hi3798mv100_ddr3_1gbyte_16bitx2_4layers_emmc.reg

#
# Boot System
#
CFG_HI_UBOOT_SUPPORT=y
# CFG_HI_MINIBOOT_SUPPORT is not set
CFG_HI_BOOT_LOG_SUPPORT=y
# CFG_HI_FORCE_ENV_TO_MEDIA is not set
CFG_HI_BOOT_ENV_STARTADDR=0x100000
CFG_HI_BOOT_ENV_SIZE=0x10000
CFG_HI_BOOT_ENV_RANGE=0x10000
# CFG_HI_BOOT_ENV_BAK_SUPPORT is not set
# CFG_HI_BOOT_COMPRESSED is not set
# CFG_HI_BENCH_SUPPORT is not set
CFG_HI_BOOT_USB_SUPPORT=y
CFG_HI_BUILD_WITH_PRODUCT=y
CFG_HI_BOOT_LOGO_SUPPORT=y
CFG_HI_BOOT_UPGRADE_SUPPORT=y
CFG_HI_BUILD_WITH_KEYLED=y
# CFG_HI_BUILD_WITH_IR is not set

#
# Linux(REE) System
#

#
# Kernel
#

CFG_LINUX-4.4.y=y

CFG_HI_KERNEL_VERSION=linux-4.4.y
CFG_HI_KERNEL_CFG=hi3798mv100_defconfig
# CFG_HI_FS_BUILDIN is not set
# CFG_HI_MSP_BUILDIN is not set

#
# Filesystem
#

#
# Busybox Config
#
CFG_HI_BUSYBOX_CFG_NAME=glibc.config
CFG_HI_LIBCPP_SUPPORT=y
CFG_HI_ROOTFS_STRIP=y
CFG_HI_ROOTFS_INSTALL_SHARED_LIBS=y
CFG_HI_ROOTFS_CRAMFS=y
CFG_HI_ROOTFS_SQUASHFS=y
CFG_HI_ROOTFS_EXT4=y
CFG_HI_EMMC_ROOTFS_SIZE=256

#
# Tools
#
CFG_HI_NTFS_SUPPORT=y
CFG_HI_NTFS_TOOLS_SUPPORT=y
CFG_HI_EXFAT_SUPPORT=y
# CFG_HI_TOOL_DOSFS_SUPPORT is not set
CFG_HI_TOOL_E2FSPROGS_SUPPORT=y
CFG_HI_TOOL_FILECAP_SUPPORT=y
# CFG_HI_TOOL_GDB_SUPPORT is not set
CFG_HI_TOOL_IPTABLES_SUPPORT=y
CFG_HI_TOOL_MTDUTILS_SUPPORT=y
CFG_HI_TOOL_REG_SUPPORT=y
# CFG_HI_TOOL_PPPD_SUPPORT is not set
# CFG_HI_TOOL_MIITOOLS_SUPPORT is not set
# CFG_HI_TOOL_IPERF_SUPPORT is not set
# CFG_HI_TOOL_SYSSTAT_SUPPORT is not set
# CFG_HI_TOOL_SOC_SERVER is not set
CFG_HI_TOOL_MSP_DEBUG_SUPPORT=y
CFG_HI_TOOL_PQ_DEBUG_SUPPORT=y

#
# Features
#

#
# Demux Config
#
CFG_HI_DEMUX_SUPPORT=y
CFG_HI_DEMUX_POOLBUF_SIZE=0x200000
# CFG_HI_DMX_TSBUF_MULTI_THREAD_SUPPORT is not set

#
# Audio Config
#
CFG_HI_AENC_SUPPORT=y
CFG_HI_ADEC_AUDSPECTRUM_SUPPORT=y
CFG_HI_AI_SUPPORT=y
# CFG_HI_SND_SMARTVOLUME_SUPPORT is not set
CFG_HI_SND_HBRA_PASSTHROUGH_SUPPORT=y
# CFG_HI_SND_PORT_DELAY_SUPPORT is not set
# CFG_HI_ADAC_SUPPORT is not set
CFG_HI_ALSA_SUPPORT=y
# CFG_HI_ALSA_LIB_SUPPORT is not set
# CFG_HI_ALSA_DRIVER_SUPPORT is not set
# CFG_HI_AUDIO_RESAMPLER_SUPPORT is not set
# CFG_HI_SONIC_SUPPORT is not set
CFG_HI_HACODEC_SUPPORT=y
CFG_HI_HACODEC_MP3DECODE_SUPPORT=y
CFG_HI_HACODEC_AACDECODE_SUPPORT=y
CFG_HI_HACODEC_AACENCODE_SUPPORT=y
CFG_HI_HACODEC_AC3PASSTHROUGH_SUPPORT=y
CFG_HI_HACODEC_AMRNBCODEC_SUPPORT=y
CFG_HI_HACODEC_AMRWBCODEC_SUPPORT=y
CFG_HI_HACODEC_BLURAYLPCMDECODE_SUPPORT=y
CFG_HI_HACODEC_COOKDECODE_SUPPORT=y
CFG_HI_HACODEC_DRADECODE_SUPPORT=y
CFG_HI_HACODEC_DTSPASSTHROUGH_SUPPORT=y
CFG_HI_HACODEC_G711CODEC_SUPPORT=y
CFG_HI_HACODEC_G722CODEC_SUPPORT=y
CFG_HI_HACODEC_PCMDECODE_SUPPORT=y
CFG_HI_HACODEC_TRUEHDPASSTHROUGH_SUPPORT=y

#
# Video Config
#
CFG_HI_VIDEO_MAX_REF_FRAME_NUM=6
CFG_HI_VIDEO_MAX_DISP_FRAME_NUM=4
CFG_HI_VDEC_MJPEG_SUPPORT=y
CFG_HI_VDEC_USERDATA_CC_SUPPORT=y
CFG_HI_VDEC_USERDATA_CC_BUFSIZE=0xC000
CFG_HI_VENC_SUPPORT=y
CFG_HI_VPSS_MAX_BUFFER_NUMB=6
# CFG_HI_DISP_USE_QPLL_SOLELY is not set
CFG_HI_DISP_TTX_INBUFFERSIZE=0x4000
CFG_HI_DISP_CC_INBUFFERSIZE=0x4000
CFG_HI_PQ_V3_0=y
# CFG_HI_DISP_VIRT_OFFSET_EFFECT_WHEN_FULLSCREEN is not set
# CFG_HI_GFX_SDR2HDR_WEAK_PARA is not set
CFG_HI_VI_SUPPORT=y

#
# Graphics Config
#
CFG_HI_HIGO_SUPPORT=y
# CFG_HIFB_SCROLLTEXT_SUPPORT is not set
CFG_HI_DIRECTFB_SUPPORT=y
CFG_HI_DIRECTFB_MULTI_SUPPORT=y
# CFG_HI_DIRECTFB_DEBUG_SUPPORT is not set
CFG_HI_HD0_FB_VRAM_SIZE=7200
CFG_HI_HD1_FB_VRAM_SIZE=0
CFG_HI_HD2_FB_VRAM_SIZE=0

#
# HDMI Config
#
CFG_HI_HDMI_SUPPORT_1_4=y
CFG_HI_HDMI_SUPPORT_HDCP=y
CFG_HI_HDMI_SUPPORT_CEC=y
# CFG_HI_HDMI_CEC_FORCE_RAWDATA is not set
# CFG_HI_HDMI_SUPPORT_DEBUG is not set
CFG_HI_HDMI_DEBUG_MEM_SIZE=0x80000
# CFG_HI_HDMI_START_SUPPORT is not set

#
# GPU Config
#
CFG_HI_GPU_SUPPORT=y
CFG_HI_GPU_MALI450_SUPPORT=y
# CFG_HI_GPU_DEBUG is not set
CFG_EGL_FB=y
# CFG_EGL_DFB is not set
CFG_HI_EGL_TYPE=fb

#
# Peripherals Config
#

#
# IR Config
#
CFG_HI_IR_TYPE_S2=y
# CFG_HI_IR_TYPE_STD is not set
# CFG_HI_IR_TYPE_LIRC is not set
CFG_HI_IR_NEC_SUPPORT=y
CFG_HI_IR_RC6_SUPPORT=y
CFG_HI_IR_RC5_SUPPORT=y
# CFG_HI_IR_RSTEP_SUPPORT is not set
CFG_HI_IR_SONY_SUPPORT=y
CFG_HI_IR_TC9012_SUPPORT=y
# CFG_HI_IR_CREDIT_SUPPORT is not set

#
# Keyled Config
#
CFG_HI_KEYLED_SUPPORT=y
CFG_HI_KEYLED_74HC164_SUPPORT=y
# CFG_HI_KEYLED_GPIOKEY_SUPPORT is not set
CFG_HI_KEYLED_CT1642_SUPPORT=y
# CFG_HI_KEYLED_CT1642_GPIO_MODE is not set
CFG_HI_KEYLED_PT6961_SUPPORT=y
CFG_HI_KEYLED_PT6961_CLOCK_GPIO=0x2a
CFG_HI_KEYLED_PT6961_STB_GPIO=0x2b
CFG_HI_KEYLED_PT6961_DIN_GPIO=0x2c
CFG_HI_KEYLED_PT6961_DOUT_GPIO=0x2d
CFG_HI_KEYLED_PT6964_SUPPORT=y
CFG_HI_KEYLED_PT6964_CLOCK_GPIO=0x2a
CFG_HI_KEYLED_PT6964_STB_GPIO=0x2b
CFG_HI_KEYLED_PT6964_DINOUT_GPIO=0x2c
CFG_HI_KEYLED_FD650_SUPPORT=y
CFG_HI_KEYLED_FD650_CLOCK_GPIO=0x2b
CFG_HI_KEYLED_FD650_DINOUT_GPIO=0x2d

#
# SCI Config
#
CFG_HI_GPIOI2C_SUPPORT=y
# CFG_HI_SPI_BUS_SUPPORT is not set

#
# PowerManagement Config
#
CFG_HI_DVFS_CPU_SUPPORT=y
CFG_HI_AVS_SUPPORT=y
# CFG_HI_PM_POWERUP_MODE1_SUPPORT is not set

#
# Temperature Control
#
CFG_HI_TEMP_CTRL_DOWN_THRESHOLD=0x73
CFG_HI_TEMP_CTRL_UP_THRESHOLD=0x64
CFG_HI_TEMP_CTRL_REBOOT_THRESHOLD=0x7d
# CFG_HI_PM_START_MCU_RUNNING is not set

#
# PVR Config
#
# CFG_HI_PVR_SUPPORT is not set

#
# Caption Config
#
CFG_HI_CAPTION_SUBT_SUPPORT=y
CFG_HI_CAPTION_TTX_SUPPORT=y
CFG_HI_CAPTION_SO_SUPPORT=y
CFG_HI_CAPTION_CC_SUPPORT=y

#
# Crypto Config
#
CFG_HI_OPENSSL_SUPPORT=y

#
# CI Config
#
# CFG_HI_OMX_SUPPORT is not set
# CFG_HI_MCE_SUPPORT is not set
# CFG_HI_PLAYER_SUPPORT is not set
# CFG_HI_WIFI_SUPPORT is not set
# CFG_HI_BLUETOOTH_SUPPORT is not set
# CFG_HI_DRM_SUPPORT is not set
CFG_HI_VP_SUPPORT=y
# CFG_HI_TEE_SUPPORT is not set

#
# Upgrade System
#
# CFG_HI_UPGRADE_SUPPORT is not set
