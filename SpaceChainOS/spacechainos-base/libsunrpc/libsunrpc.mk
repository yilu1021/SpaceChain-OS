#*********************************************************************************************************
#
#                                    中国软件开源组织
#
#                                   嵌入式实时操作系统
#
#                                SylixOS(TM)  LW : long wing
#
#                               Copyright All Rights Reserved
#
#--------------文件信息--------------------------------------------------------------------------------
#
# 文   件   名: libsunrpc.mk
#
# 创   建   人: RealEvo-IDE
#
# 文件创建日期: 2017 年 08 月 11 日
#
# 描        述: 本文件由 RealEvo-IDE 生成，用于配置 Makefile 功能，请勿手动修改
#*********************************************************************************************************

#*********************************************************************************************************
# Clear setting
#*********************************************************************************************************
include $(CLEAR_VARS_MK)

#*********************************************************************************************************
# Target
#*********************************************************************************************************
LOCAL_TARGET_NAME := libsunrpc.so

#*********************************************************************************************************
# Source list
#*********************************************************************************************************
LOCAL_SRCS := \
sunrpc/authdes_prot.c \
sunrpc/authuxprot.c \
sunrpc/auth_none.c \
sunrpc/auth_unix.c \
sunrpc/bindrsvprt.c \
sunrpc/clnt_gen.c \
sunrpc/clnt_perr.c \
sunrpc/clnt_raw.c \
sunrpc/clnt_simp.c \
sunrpc/clnt_tcp.c \
sunrpc/clnt_udp.c \
sunrpc/clnt_unix.c \
sunrpc/create_xid.c \
sunrpc/des_crypt.c \
sunrpc/des_impl.c \
sunrpc/des_soft.c \
sunrpc/getprotobyname.c \
sunrpc/getrpcport.c \
sunrpc/get_myaddr.c \
sunrpc/key_call.c \
sunrpc/key_prot.c \
sunrpc/pmap_clnt.c \
sunrpc/pmap_prot.c \
sunrpc/pmap_prot2.c \
sunrpc/pmap_rmt.c \
sunrpc/pm_getmaps.c \
sunrpc/pm_getport.c \
sunrpc/rpc_cmsg.c \
sunrpc/rpc_common.c \
sunrpc/rpc_dtable.c \
sunrpc/rpc_prot.c \
sunrpc/rpc_thread.c \
sunrpc/rtime.c \
sunrpc/svc.c \
sunrpc/svc_auth.c \
sunrpc/svc_authux.c \
sunrpc/svc_raw.c \
sunrpc/svc_run.c \
sunrpc/svc_simple.c \
sunrpc/svc_tcp.c \
sunrpc/svc_udp.c \
sunrpc/svc_unix.c \
sunrpc/xcrypt.c \
sunrpc/xdr.c \
sunrpc/xdr_array.c \
sunrpc/xdr_float.c \
sunrpc/xdr_intXX_t.c \
sunrpc/xdr_mem.c \
sunrpc/xdr_rec.c \
sunrpc/xdr_ref.c \
sunrpc/xdr_sizeof.c \
sunrpc/xdr_stdio.c

#*********************************************************************************************************
# Header file search path (eg. LOCAL_INC_PATH := -I"Your header files search path")
#*********************************************************************************************************
LOCAL_INC_PATH :=  -I"./sunrpc"

#*********************************************************************************************************
# Pre-defined macro (eg. -DYOUR_MARCO=1)
#*********************************************************************************************************
LOCAL_DSYMBOL := 

#*********************************************************************************************************
# Compiler flags
#*********************************************************************************************************
LOCAL_CFLAGS   := 
LOCAL_CXXFLAGS := 

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
# OpenMP config
#*********************************************************************************************************
LOCAL_USE_OMP := no

#*********************************************************************************************************
# User link command
#*********************************************************************************************************
LOCAL_PRE_LINK_CMD   := 
LOCAL_POST_LINK_CMD  := 
LOCAL_PRE_STRIP_CMD  := 
LOCAL_POST_STRIP_CMD := 

include $(LIBRARY_MK)

#*********************************************************************************************************
# End
#*********************************************************************************************************
