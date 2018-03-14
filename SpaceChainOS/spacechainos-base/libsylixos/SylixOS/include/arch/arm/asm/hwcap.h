/*********************************************************************************************************
**
**                                    �й�������Դ��֯
**
**                                   Ƕ��ʽʵʱ����ϵͳ
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**
** ��   ��   ��: hwcap.h
**
** ��   ��   ��: Han.Hui (����)
**
** �ļ���������: 2013 �� 05 �� 04 ��
**
** ��        ��: ARM Ӳ�����Ա��.
*********************************************************************************************************/

#ifndef __ASMARM_HWCAP_H
#define __ASMARM_HWCAP_H

#define HWCAP_SWP       (1 << 0)
#define HWCAP_HALF      (1 << 1)
#define HWCAP_THUMB     (1 << 2)
#define HWCAP_26BIT     (1 << 3)                                        /* Play it safe                 */
#define HWCAP_FAST_MULT (1 << 4)
#define HWCAP_FPA       (1 << 5)
#define HWCAP_VFP       (1 << 6)
#define HWCAP_EDSP      (1 << 7)
#define HWCAP_JAVA      (1 << 8)
#define HWCAP_IWMMXT    (1 << 9)
#define HWCAP_CRUNCH    (1 << 10)
#define HWCAP_THUMBEE   (1 << 11)
#define HWCAP_NEON      (1 << 12)
#define HWCAP_VFPv3     (1 << 13)
#define HWCAP_VFPv3D16  (1 << 14)                                       /* also set for VFPv4-D16       */
#define HWCAP_TLS       (1 << 15)
#define HWCAP_VFPv4     (1 << 16)
#define HWCAP_IDIVA     (1 << 17)
#define HWCAP_IDIVT     (1 << 18)
#define HWCAP_VFPD32    (1 << 19)                                       /* set if VFP 32 regs (not 16)  */
#define HWCAP_IDIV      (HWCAP_IDIVA | HWCAP_IDIVT)
#define HWCAP_LPAE      (1 << 20)
#define HWCAP_EVTSTRM   (1 << 21)

#endif                                                                  /*  __ASMARM_HWCAP_H            */
/*********************************************************************************************************
  END
*********************************************************************************************************/