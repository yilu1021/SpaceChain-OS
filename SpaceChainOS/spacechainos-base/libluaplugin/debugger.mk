#*********************************************************************************************************
#
#                                    �й�������Դ��֯
#
#                                   Ƕ��ʽʵʱ����ϵͳ
#
#                                SylixOS(TM)  LW : long wing
#
#                               Copyright All Rights Reserved
#
#--------------�ļ���Ϣ--------------------------------------------------------------------------------
#
# ��   ��   ��: debugger.mk
#
# ��   ��   ��: RealEvo-IDE
#
# �ļ���������: 2016 �� 10 �� 08 ��
#
# ��        ��: ���ļ��� RealEvo-IDE ���ɣ��������� Makefile ���ܣ������ֶ��޸�
#*********************************************************************************************************

#*********************************************************************************************************
# Clear setting
#*********************************************************************************************************
include $(CLEAR_VARS_MK)

#*********************************************************************************************************
# Target
#*********************************************************************************************************
LOCAL_TARGET_NAME := debugger

#*********************************************************************************************************
# Source list
#*********************************************************************************************************
LOCAL_SRCS := 

#*********************************************************************************************************
# Header file search path (eg. LOCAL_INC_PATH := -I"Your hearder files search path")
#*********************************************************************************************************
LOCAL_INC_PATH := 

#*********************************************************************************************************
# Pre-defined macro (eg. -DYOUR_MARCO=1)
#*********************************************************************************************************
LOCAL_DSYMBOL := 

#*********************************************************************************************************
# Depend library (eg. LOCAL_DEPEND_LIB := -la LOCAL_DEPEND_LIB_PATH := -L"Your library search path")
#*********************************************************************************************************
LOCAL_DEPEND_LIB      := 
LOCAL_DEPEND_LIB_PATH := 

#*********************************************************************************************************
# C++ config
#*********************************************************************************************************
LOCAL_USE_CXX        := no
LOCAL_USE_CXX_EXCEPT := no

#*********************************************************************************************************
# Code coverage config
#*********************************************************************************************************
LOCAL_USE_GCOV := no

#*********************************************************************************************************
# User link command
#*********************************************************************************************************
ifeq ($(LUA_VER), 5.3)
LOCAL_POST_LINK_CMD  := cp -r luadebugger/lua5.3/* $(OUTDIR)
LOCAL_POST_STRIP_CMD := cp -r luadebugger/lua5.3/* $(OUTDIR)/strip
else
LOCAL_POST_LINK_CMD  := cp -r luadebugger/lua5.2/* $(OUTDIR)
LOCAL_POST_STRIP_CMD := cp -r luadebugger/lua5.2/* $(OUTDIR)/strip
endif

#*********************************************************************************************************
# Depend target
#*********************************************************************************************************
LOCAL_DEPEND_TARGET := ./$(OUTDIR)/lfs.so ./$(OUTDIR)/strip/lfs.so

include $(DUMMY_MK)

#*********************************************************************************************************
# End
#*********************************************************************************************************