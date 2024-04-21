/******************************************************************************

Copyright (C), 2016, Hisilicon Tech. Co., Ltd.
******************************************************************************
File Name     : hal_klad_basic.h
Version       : Initial draft
Author        : Hisilicon hisecurity team
Created       : 2016-12-08
Last Modified :
Description   :
Function List :
History       :
******************************************************************************/
#ifndef __HAL_KLAD_BASIC_H__
#define __HAL_KLAD_BASIC_H__

#include "hi_type.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


HI_VOID HAL_KLAD_BOOTStart(HI_U8 alg, HI_U8 decrypt, HI_U8 addr, HI_U8 target);

HI_VOID HAL_KLAD_BOOTGetEncRslt(HI_U8 *data);

HI_U32 HAL_KLAD_BOOTGetState(HI_VOID);

HI_VOID HAL_KLAD_SWStart(HI_U8 decrypt, HI_U8 addr);

HI_VOID HAL_KLAD_SWGetEncRslt(HI_U8 *data);

HI_U32 HAL_KLAD_SWGetState(HI_VOID);

HI_VOID HAL_KLAD_STB_ROOTKEYStart(HI_U8 addr);

HI_U32 HAL_KLAD_WIDEVINEGetDecFlag(HI_VOID);

HI_VOID HAL_KLAD_CA_TAStart(HI_U8 addr);

#if (defined(CHIP_TYPE_hi3796mv200) || defined(CHIP_TYPE_hi3716mv450))
HI_VOID HAL_KLAD_CLEAR_CWStart(HI_U8 addr, HI_U8 odd, HI_U8 engine, HI_U8 target);

HI_U32 HAL_KLAD_LockClearCw(HI_VOID);

HI_VOID HAL_KLAD_UnLockClearCw(HI_VOID);

HI_VOID HAL_KLAD_SetClearCwDataIn(HI_U8 *data);
#endif

HI_VOID HAL_KLAD_BASIC_SetBasicKladSecen(HI_VOID);

HI_VOID HAL_KLAD_BASIC_SetBasicKladSecenLock(HI_VOID);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif	/* __HAL_KLAD_BASIC_H__ */
