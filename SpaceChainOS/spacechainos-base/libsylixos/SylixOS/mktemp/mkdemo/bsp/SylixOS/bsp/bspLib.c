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
** ��   ��   ��: bspLib.c
**
** ��   ��   ��: Han.Hui (����)
**
** �ļ���������: 2007 �� 12 �� 09 ��
**
** ��        ��: ��������ҪΪ SylixOS �ṩ�Ĺ���֧��.
*********************************************************************************************************/
#define  __SYLIXOS_KERNEL
#include "config.h"
#include "SylixOS.h"
/*********************************************************************************************************
  BSP ��Ϣ
*********************************************************************************************************/
/*
 * TODO: �޸������ַ���ΪĿ���� CPU ��Ϣ
 */
static const CHAR   _G_pcCpuInfo[]     = "SAMSUNG S3C2440A (ARM920T 405/101MHz NonFPU)";
/*
 * TODO: �޸������ַ���ΪĿ���� CACHE ��Ϣ
 */
static const CHAR   _G_pcCacheInfo[]   = "32KBytes L1-Cache (D-16K/I-16K)";
/*
 * TODO: �޸������ַ���ΪĿ������Ϣ
 */
static const CHAR   _G_pcPacketInfo[]  = "Mini2440 Packet";
/*
 * TODO: �޸������ַ���Ϊ BSP �İ汾��Ϣ
 */
static const CHAR   _G_pcVersionInfo[] = "BSP version 1.0.0 for NeZha";
/*********************************************************************************************************
  �ж����
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspIntInit
** ��������: �ж�ϵͳ��ʼ��
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspIntInit (VOID)
{
    /*
     * TODO: ������Ĵ�������
     *
     * ���ĳ�ж�Ϊ��ʽ�жϣ����������:
     * API_InterVectorSetFlag(LW_IRQ_4, LW_IRQ_FLAG_QUEUE);
     * �Ĵ���.
     *
     * ���ĳ�жϿ�������ʼ����������ӣ����������:
     * API_InterVectorSetFlag(LW_IRQ_0, LW_IRQ_FLAG_SAMPLE_RAND);
     * �Ĵ���.
     */
}
/*********************************************************************************************************
** ��������: bspIntHandle
** ��������: �ж����
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspIntHandle (VOID)
{
    /*
     * TODO: ͨ����ȡӲ���Ĵ���, �õ���ǰ�������ж�������, ������ uiVector ����
     */
    REGISTER UINT32   uiVector = 0;

    archIntHandle((ULONG)uiVector, LW_FALSE);
}
/*********************************************************************************************************
** ��������: bspIntVectorEnable
** ��������: ʹ��ָ�����ж�����
** ��  ��  : ulVector     �ж�����
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspIntVectorEnable (ULONG  ulVector)
{
    /*
     * TODO: ͨ������Ӳ���Ĵ���, ʹ��ָ�����ж�����
     */
}
/*********************************************************************************************************
** ��������: bspIntVectorDisable
** ��������: ����ָ�����ж�����
** ��  ��  : ulVector     �ж�����
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspIntVectorDisable (ULONG  ulVector)
{
    /*
     * TODO: ͨ������Ӳ���Ĵ���, ����ָ�����ж�����
     */
}
/*********************************************************************************************************
** ��������: bspIntVectorIsEnable
** ��������: ���ָ�����ж������Ƿ�ʹ��
** ��  ��  : ulVector     �ж�����
** ��  ��  : LW_FALSE �� LW_TRUE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
BOOL  bspIntVectorIsEnable (ULONG  ulVector)
{
    /*
     * TODO: ͨ����ȡӲ���Ĵ���, ���ָ�����ж������Ƿ�ʹ��
     */
    return  ((0) ? LW_FALSE : LW_TRUE);
}
/*********************************************************************************************************
** ��������: bspIntVectorSetPriority
** ��������: ����ָ�����ж����������ȼ�
** ��  ��  : ulVector     �ж�������
** 			 uiPrio		  ���ȼ�
** �䡡��  : ERROR CODE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
#if LW_CFG_INTER_PRIO > 0

ULONG   bspIntVectorSetPriority (ULONG  ulVector, UINT  uiPrio)
{
	return  (ERROR_NONE);
}
/*********************************************************************************************************
** ��������: bspIntVectorGetPriority
** ��������: ��ȡָ�����ж����������ȼ�
** ��  ��  : ulVector     �ж�������
** 			 puiPrio      ���ȼ�
** �䡡��  : ERROR CODE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
ULONG   bspIntVectorGetPriority (ULONG  ulVector, UINT  *puiPrio)
{
	*puiPrio = 0;
	return  (ERROR_NONE);
}

#endif                                                                  /*  LW_CFG_INTER_PRIO > 0       */
/*********************************************************************************************************
** ��������: bspIntVectorSetTarget
** ��������: ����ָ�����ж�������Ŀ�� CPU
** �䡡��  : ulVector      �ж�������
**           stSize        CPU ���뼯�ڴ��С
**           pcpuset       CPU ����
** �䡡��  : ERROR CODE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
#if LW_CFG_INTER_TARGET > 0

ULONG   bspIntVectorSetTarget (ULONG  ulVector, size_t  stSize, const PLW_CLASS_CPUSET  pcpuset)
{
	return  (ERROR_NONE);
}
/*********************************************************************************************************
** ��������: bspIntVectorGetTarget
** ��������: ��ȡָ�����ж�������Ŀ�� CPU
** �䡡��  : ulVector      �ж�������
**           stSize        CPU ���뼯�ڴ��С
**           pcpuset       CPU ����
** �䡡��  : ERROR CODE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
ULONG   bspIntVectorGetTarget (ULONG  ulVector, size_t  stSize, PLW_CLASS_CPUSET  pcpuset)
{
    LW_CPU_ZERO(pcpuset);
    LW_CPU_SET(0, pcpuset);
	return  (ERROR_NONE);
}

#endif                                                                  /*  LW_CFG_INTER_TARGET > 0     */
/*********************************************************************************************************
  BSP ��Ϣ
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspInfoCpu
** ��������: BSP CPU ��Ϣ
** �䡡��  : NONE
** �䡡��  : CPU ��Ϣ
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
CPCHAR  bspInfoCpu (VOID)
{
    return  (_G_pcCpuInfo);
}
/*********************************************************************************************************
** ��������: bspInfoCache
** ��������: BSP CACHE ��Ϣ
** �䡡��  : NONE
** �䡡��  : CACHE ��Ϣ
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
CPCHAR  bspInfoCache (VOID)
{
    return  (_G_pcCacheInfo);
}
/*********************************************************************************************************
** ��������: bspInfoPacket
** ��������: BSP PACKET ��Ϣ
** �䡡��  : NONE
** �䡡��  : PACKET ��Ϣ
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
CPCHAR  bspInfoPacket (VOID)
{
    return  (_G_pcPacketInfo);
}
/*********************************************************************************************************
** ��������: bspInfoVersion
** ��������: BSP VERSION ��Ϣ
** �䡡��  : NONE
** �䡡��  : BSP VERSION ��Ϣ
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
CPCHAR  bspInfoVersion (VOID)
{
    return  (_G_pcVersionInfo);
}
/*********************************************************************************************************
** ��������: bspInfoHwcap
** ��������: BSP Ӳ������
** �䡡��  : NONE
** �䡡��  : Ӳ������ (���֧��Ӳ����, ���Լ��� HWCAP_VFP , HWCAP_VFPv3 , HWCAP_VFPv3D16 , HWCAP_NEON)
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
ULONG  bspInfoHwcap (VOID)
{
    /*
     * TODO: ����Ӳ������ (���֧��Ӳ����, ���Լ��� HWCAP_VFP , HWCAP_VFPv3 , HWCAP_VFPv3D16 , HWCAP_NEON)
     */
    return  (0ul);
}
/*********************************************************************************************************
** ��������: bspInfoRomBase
** ��������: BSP ROM ����ַ
** �䡡��  : NONE
** �䡡��  : ROM ����ַ
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
addr_t bspInfoRomBase (VOID)
{
    return  (BSP_CFG_ROM_BASE);
}
/*********************************************************************************************************
** ��������: bspInfoRomSize
** ��������: BSP ROM ��С
** �䡡��  : NONE
** �䡡��  : ROM ��С
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
size_t bspInfoRomSize (VOID)
{
    return  (BSP_CFG_ROM_SIZE);
}
/*********************************************************************************************************
** ��������: bspInfoRamBase
** ��������: BSP RAM ����ַ
** �䡡��  : NONE
** �䡡��  : RAM ����ַ
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
addr_t bspInfoRamBase (VOID)
{
    return  (BSP_CFG_RAM_BASE);
}
/*********************************************************************************************************
** ��������: bspInfoRamSize
** ��������: BSP RAM ��С
** �䡡��  : NONE
** �䡡��  : RAM ��С
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
size_t bspInfoRamSize (VOID)
{
    return  (BSP_CFG_RAM_SIZE);
}
/*********************************************************************************************************
  BSP HOOK
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspTaskCreateHook
** ��������: ���񴴽� hook
** ��  ��  : ulId     ���� ID
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTaskCreateHook (LW_OBJECT_ID  ulId)
{
    (VOID)ulId;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspTaskDeleteHook
** ��������: ����ɾ�� hook
** ��  ��  : ulId         ���� ID
**           pvReturnVal  ����ֵ
**           ptcb         ������ƿ�
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTaskDeleteHook (LW_OBJECT_ID  ulId, PVOID  pvReturnVal, PLW_CLASS_TCB  ptcb)
{
    (VOID)ulId;
    (VOID)pvReturnVal;
    (VOID)ptcb;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspTaskSwapHook
** ��������: �����л� hook
** ��  ��  : hOldThread       ������������
**           hNewThread       Ҫ���е�����
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTaskSwapHook (LW_OBJECT_HANDLE   hOldThread, LW_OBJECT_HANDLE   hNewThread)
{
    (VOID)hOldThread;
    (VOID)hNewThread;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspTaskIdleHook
** ��������: idle ������ô˺���
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTaskIdleHook (VOID)
{
    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspTaskIdleHook
** ��������: ÿ������ϵͳʱ�ӽ��ģ�ϵͳ�������������
** ��  ��  : i64Tick      ϵͳ��ǰʱ��
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTickHook (INT64   i64Tick)
{
    (VOID)i64Tick;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspWdTimerHook
** ��������: ���Ź���ʱ����ʱ��ʱ��������������
** ��  ��  : ulId     ���� ID
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspWdTimerHook (LW_OBJECT_ID  ulId)
{
    (VOID)ulId;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspTCBInitHook
** ��������: ��ʼ�� TCB ʱ������������
** ��  ��  : ulId     ���� ID
**           ptcb     ������ƿ�
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTCBInitHook (LW_OBJECT_ID  ulId, PLW_CLASS_TCB   ptcb)
{
    (VOID)ulId;
    (VOID)ptcb;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspKernelInitHook
** ��������: ϵͳ��ʼ�����ʱ������������
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspKernelInitHook (VOID)
{
    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspReboot
** ��������: ϵͳ��������
** �䡡��  : iRebootType       ��������
**           ulStartAddress    ������ʼ��ַ
** �䡡��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspReboot (INT  iRebootType, addr_t  ulStartAddress)
{
    (VOID)ulStartAddress;

    /*
     * TODO: ������Ĵ�������, ����ʹ��Ӳ�����Ź���Ӳ����λ��·����λ, ���û��, ��������Ĵ���
     */

#ifdef __BOOT_INRAM
    ((VOID (*)(INT))bspInfoRamBase())(iRebootType);
#else
    ((VOID (*)(INT))bspInfoRomBase())(iRebootType);
#endif                                                                  /*  __BOOT_INRAM                */
}
/*********************************************************************************************************
** ��������: bspDebugMsg
** ��������: ��ӡϵͳ������Ϣ
** �䡡��  : pcMsg     ��Ϣ
** �䡡��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspDebugMsg (CPCHAR  pcMsg)
{
    /*
     * TODO: ͨ�� UART ��ӡϵͳ������Ϣ
     */
}
/*********************************************************************************************************
  CACHE ��ؽӿ�
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspL2CBase
** ��������: ��� L2 ����������ַ
** ��  ��  : pulBase      ���صĻ���ַ
** ��  ��  : -1 ��ʾ������ L2
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
INT  bspL2CBase (addr_t  *pulBase)
{
    /*
     * TODO: ͨ�����Ĵ������ֲ�, �� L2 ����������ַ���� *pulBase ����,
     * ��������� L2, ���� PX_ERROR ����, �������, ���� ERROR_NONE
     */
    return  (PX_ERROR);
}
/*********************************************************************************************************
** ��������: bspL2CAux
** ��������: ��� L2 ������ Aux ��������
** ��  ��  : puiAuxVal      Aux �Ĵ���ֵ
**           puiAuxMask     Aux ��������
** ��  ��  : -1 ��ʾ������ L2
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
INT  bspL2CAux (UINT32  *puiAuxVal, UINT32  *puiAuxMask)
{
    /*
     * TODO: ͨ����ȡӲ�� Aux �Ĵ���, ������ *puiAuxVal ����, ���� Aux �������븳�� *puiAuxMask ����,
     * ��������� L2, ���� PX_ERROR ����, �������, ���� ERROR_NONE
     */
    *puiAuxVal  =  0u;
    *puiAuxMask = ~0u;
    
    return  (ERROR_NONE);
}
/*********************************************************************************************************
  MMU ��ؽӿ�
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspMmuPgdMaxNum
** ��������: ��� PGD �ص�����
** ��  ��  : NONE
** ��  ��  : PGD �ص����� (1 ���ؿ�ӳ�� 4GB �ռ�, �Ƽ����� 1)
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
ULONG  bspMmuPgdMaxNum (VOID)
{
    /*
     * TODO: ���� PGD �ص�����, �Ƽ����� 1
     */
    return  (1);
}
/*********************************************************************************************************
** ��������: bspMmuPgdMaxNum
** ��������: ��� PTE �ص�����
** ��  ��  : NONE
** ��  ��  : PTE �ص����� (ӳ�� 4GB �ռ�, ��Ҫ 4096 �� PTE ��)
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
ULONG  bspMmuPteMaxNum (VOID)
{
    /*
     * TODO: ���� PTE �ص����� (ӳ�� 4GB �ռ�, ��Ҫ 4096 �� PTE ��)
     */
    return  (2048);
}
/*********************************************************************************************************
  ����ϵͳ��˽ӿ�
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspMpInt
** ��������: ����һ���˼��ж�
** ��  ��  : ulCPUId      Ŀ�� CPU
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID   bspMpInt (ULONG  ulCPUId)
{
    (VOID)ulCPUId;

    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspCpuUp
** ��������: ����һ�� CPU
** ��  ��  : ulCPUId      Ŀ�� CPU
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID   bspCpuUp (ULONG  ulCPUId)
{
    /*
     * TODO: ������Ĵ�������, ���û��, �뱣������ĵ�����Ϣ
     */
    bspDebugMsg("bspCpuUp() error: this cpu CAN NOT support this operate!\r\n");
}
/*********************************************************************************************************
** ��������: bspCpuDown
** ��������: ֹͣһ�� CPU
** ��  ��  : ulCPUId      Ŀ�� CPU
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID   bspCpuDown (ULONG  ulCPUId)
{
    /*
     * TODO: ������Ĵ�������, ���û��, �뱣������ĵ�����Ϣ
     */
    bspDebugMsg("bspCpuDown() error: this cpu CAN NOT support this operate!\r\n");
}
/*********************************************************************************************************
  ����ϵͳ CPU �ٶȿ��ƽӿ�
*********************************************************************************************************/
/*********************************************************************************************************
** ��������: bspSuspend
** ��������: ϵͳ��������״̬
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID    bspSuspend (VOID)
{
    /*
     * TODO: ������Ĵ�������, ���û��, �뱣������ĵ�����Ϣ
     */
    bspDebugMsg("bspSuspend() error: this BSP CAN NOT support this operate!\r\n");
}
/*********************************************************************************************************
** ��������: bspCpuPowerSet
** ��������: CPU ���������ٶ�
** ��  ��  : uiPowerLevel     �����ٶȼ���
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID    bspCpuPowerSet (UINT  uiPowerLevel)
{
    /*
     * TODO: ������Ĵ�������
     */
}
/*********************************************************************************************************
** ��������: bspCpuPowerGet
** ��������: CPU ��ȡ�����ٶ�
** ��  ��  : puiPowerLevel    �����ٶȼ���
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID    bspCpuPowerGet (UINT  *puiPowerLevel)
{
    /*
     * TODO: ������Ĵ�������, ���û��, �뱣������Ĵ���
     */
    if (puiPowerLevel) {
        *puiPowerLevel = LW_CPU_POWERLEVEL_TOP;
    }
}
/*********************************************************************************************************
  ����ϵͳʱ����غ���
*********************************************************************************************************/
/*********************************************************************************************************
  TICK �����������
*********************************************************************************************************/
#define TICK_IN_THREAD  0
#if TICK_IN_THREAD > 0
static LW_HANDLE    htKernelTicks;                                      /*  ����ϵͳʱ�ӷ����߳̾��    */
#endif                                                                  /*  TICK_IN_THREAD > 0          */
/*********************************************************************************************************
** ��������: __tickThread
** ��������: ��ʼ�� tick �����߳�
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
#if TICK_IN_THREAD > 0

static VOID  __tickThread (VOID)
{
    for (;;) {
        API_ThreadSuspend(htKernelTicks);
        API_KernelTicks();                                              /*  �ں� TICKS ֪ͨ             */
        API_TimerHTicks();                                              /*  ���� TIMER TICKS ֪ͨ       */
    }
}

#endif                                                                  /*  TICK_IN_THREAD > 0          */
/*********************************************************************************************************
** ��������: __tickTimerIsr
** ��������: tick ��ʱ���жϷ������
** ��  ��  : NONE
** ��  ��  : �жϷ��񷵻�
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
static irqreturn_t  __tickTimerIsr (VOID)
{
    /*
     * TODO: ͨ������Ӳ���Ĵ���, ��� tick ��ʱ���ж�
     */

    API_KernelTicksContext();                                           /*  ���汻ʱ���жϵ��߳̿��ƿ�  */

#if TICK_IN_THREAD > 0
    API_ThreadResume(htKernelTicks);
#else
    API_KernelTicks();                                                  /*  �ں� TICKS ֪ͨ             */
    API_TimerHTicks();                                                  /*  ���� TIMER TICKS ֪ͨ       */
#endif                                                                  /*  TICK_IN_THREAD > 0          */
    
    return  (LW_IRQ_HANDLED);
}
/*********************************************************************************************************
** ��������: bspTickInit
** ��������: ��ʼ�� tick ʱ��
** ��  ��  : NONE
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTickInit (VOID)
{
#if TICK_IN_THREAD > 0
    LW_CLASS_THREADATTR threakattr;
#endif
    ULONG                ulVector = 0;

#if TICK_IN_THREAD > 0
    API_ThreadAttrBuild(&threakattr, (8 * LW_CFG_KB_SIZE),
                        LW_PRIO_T_TICK,
                        LW_OPTION_THREAD_STK_CHK |
                        LW_OPTION_THREAD_UNSELECT |
                        LW_OPTION_OBJECT_GLOBAL |
                        LW_OPTION_THREAD_SAFE, LW_NULL);

    htKernelTicks = API_ThreadCreate("t_tick", (PTHREAD_START_ROUTINE)__tickThread,
                                     &threakattr, LW_NULL);
#endif                                                                  /*  TICK_IN_THREAD > 0          */

    /*
     * TODO: ��ʼ��Ӳ����ʱ��, Ƶ��Ϊ LW_TICK_HZ, ����Ϊ�Զ���װ, ����Ӳ����ʱ��
     *
     * ����Ӳ����ʱ���������жϺŸ��� ulVector ����
     */
    API_InterVectorConnect(ulVector,
                           (PINT_SVR_ROUTINE)__tickTimerIsr,
                           LW_NULL,
                           "tick_timer");

    API_InterVectorEnable(ulVector);
}
/*********************************************************************************************************
** ��������: bspTickHighResolution
** ��������: ���������һ�� tick ����ǰ�ľ�ȷʱ��.
** �䡡��  : ptv       ��Ҫ������ʱ��
** �䡡��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspTickHighResolution (struct timespec *ptv)
{

}
/*********************************************************************************************************
** ��������: bspDelayUs
** ��������: �ӳ�΢��
** ��  ��  : ulUs     ΢����
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID bspDelayUs (ULONG ulUs)
{
    /*
     * TODO: ������Ĵ���������, �޸�Ϊ��Ĵ�������
     */
    volatile UINT  i;

    while (ulUs) {
        ulUs--;
        for (i = 0; i < 600; i++) {
        }
    }
}
/*********************************************************************************************************
** ��������: bspDelayNs
** ��������: �ӳ�����
** ��  ��  : ulNs     ������
** ��  ��  : NONE
** ȫ�ֱ���:
** ����ģ��:
*********************************************************************************************************/
VOID  bspDelayNs (ULONG ulNs)
{
    /*
     * TODO: ������Ĵ���������, �޸�Ϊ��Ĵ�������
     */
    volatile UINT  i;

    while (ulNs) {
        ulNs = (ulNs < 100) ? (0) : (ulNs - 100);
        for (i = 0; i < 40; i++) {
        }
    }
}
/*********************************************************************************************************
  semihosting
*********************************************************************************************************/
#define import(__use_no_semihosting_swi)

void  _ttywrch (int  ch)
{
    bspDebugMsg("__use_no_semihosting_swi _ttywrch()!\n");
    while (1);
}

void  _sys_exit (int  return_code)
{
    bspDebugMsg("__use_no_semihosting_swi _sys_exit()!\n");
    while (1);
}
/*********************************************************************************************************
  GCC
*********************************************************************************************************/
#ifdef __GNUC__
int  __aeabi_read_tp (void)
{
    return  (0);
}

#endif                                                                  /*  __GNUC__                    */
/*********************************************************************************************************
  END
*********************************************************************************************************/