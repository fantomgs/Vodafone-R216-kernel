LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
include $(BALONG_TOPDIR)/config/product/$(OBB_PRODUCT_NAME)/config/balong_product_config.mk
LOCAL_ARM_MODE := arm


LOCAL_SRC_FILES := reb_boot.c

LOCAL_C_INCLUDES := $(call include-path-for, bootloader)

# balong config
LOCAL_C_INCLUDES += $(BALONG_TOPDIR)/config/product/$(OBB_PRODUCT_NAME)/config
LOCAL_C_INCLUDES += $(BALONG_TOPDIR)/include/drv
LOCAL_C_INCLUDES += $(BALONG_TOPDIR)/platform/$(CFG_PLATFORM)
LOCAL_C_INCLUDES += $(BALONG_TOPDIR)/platform/$(CFG_PLATFORM)/soc
LOCAL_C_INCLUDES += $(BALONG_TOPDIR)/modem/drv/common/include

LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include/boot
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../include/balongv7r2
LOCAL_C_INCLUDES += $(LOCAL_PATH)/inc
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../nand/nandc

LOCAL_CFLAGS := -O2 -g -W -Wall
LOCAL_CFLAGS += -march=armv7-a

LOCAL_MODULE := libreb

include $(BUILD_RAW_STATIC_LIBRARY)