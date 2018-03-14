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
# ��   ��   ��: libbitcoin_crypto.mk
#
# ��   ��   ��: RealEvo-IDE
#
# �ļ���������: 2017 �� 12 �� 11 ��
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
LOCAL_TARGET_NAME := libbitcoin_consensus.so

#*********************************************************************************************************
# Source list
#*********************************************************************************************************
LOCAL_SRCS :=  \
src/arith_uint256.cpp \
src/consensus/merkle.cpp \
src/hash.cpp \
src/primitives/block.cpp \
src/primitives/transaction.cpp \
src/pubkey.cpp \
src/script/bitcoinconsensus.cpp \
src/script/interpreter.cpp \
src/script/script.cpp \
src/script/script_error.cpp \
src/uint256.cpp \
src/utilstrencodings.cpp

#*********************************************************************************************************
# Header file search path (eg. LOCAL_INC_PATH := -I"Your header files search path")
#*********************************************************************************************************
LOCAL_INC_PATH := \
-I"./src" \
-I"./src/compat" \
-I"./src/config" \
-I"./src/qtum/" \
-I"./src/cpp-ethereum" \
-I"./src/leveldb/include" \
-I"./src/univalue/include" \
-I"./src/leveldb/helpers/memenv" \
-I"./src/include" \
-I"./src/secp256k1/include" \
-I"$(WORKSPACE_libevent)/src/include" \
-I"$(WORKSPACE_libboost)/src" \
-I"$(WORKSPACE_libdb)/src/config" 

#*********************************************************************************************************
# Pre-defined macro (eg. -DYOUR_MARCO=1)
#*********************************************************************************************************
LOCAL_DSYMBOL := 

#*********************************************************************************************************
# Compiler flags
#*********************************************************************************************************
LOCAL_CFLAGS   := 
LOCAL_CXXFLAGS := -std=c++11 -fexceptions -frtti

#*********************************************************************************************************
# Depend library (eg. LOCAL_DEPEND_LIB := -la LOCAL_DEPEND_LIB_PATH := -L"Your library search path")
#*********************************************************************************************************
LOCAL_DEPEND_LIB := \
-lbitcoin_crypto \
-lcextern \
-lsecp256k1

LOCAL_DEPEND_LIB_PATH := \
-L"./$(Output)" 

#*********************************************************************************************************
# Depend target
#*********************************************************************************************************
LOCAL_DEPEND_TARGET := ./$(Output)/libbitcoin_crypto.so
LOCAL_DEPEND_TARGET += ./$(Output)/libsecp256k1.so

#*********************************************************************************************************
# C++ config
#*********************************************************************************************************
LOCAL_USE_CXX := yes
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