
#ifndef __A8300_H__
#define __A8300_H__



#include "hi_type.h"
#include "drv_tuner_ext.h"




HI_S32 a8300_init(HI_U32 u32TunerPort, HI_U32 u32I2CNum, HI_U8 u8DevAddr, HI_UNF_DEMOD_DEV_TYPE_E enDemodDevType);
HI_S32 a8300_deInit(HI_U32 u32TunerPort);
HI_S32 a8300_standby(HI_U32 u32TunerPort, HI_U32 u32Standby);
HI_S32 a8300_lnbctrl_power(HI_U32 u32TunerPort, HI_U8 u8Power);
HI_S32 a8300_set_lnb_out(HI_U32 u32TunerPort, TUNER_LNB_OUT_E enOut);
HI_S32 a8300_send_continuous_22K(HI_U32 u32TunerPort, HI_U32 u32Continuous22K);
HI_S32 a8300_send_tone(HI_U32 u32TunerPort, HI_U32 u32Tone);
HI_S32 a8300_DiSEqC_send_msg(HI_U32 u32TunerPort, HI_UNF_TUNER_DISEQC_SENDMSG_S *pstSendMsg);
HI_S32 a8300_DiSEqC_recv_msg(HI_U32 u32TunerPort, HI_UNF_TUNER_DISEQC_RECVMSG_S *pstRecvMsg);



#endif
