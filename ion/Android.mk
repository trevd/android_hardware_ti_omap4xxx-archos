LOCAL_PATH:= $(call my-dir)

ifeq ($(TARGET_BOARD_PLATFORM),omap4)
# only use the archos omap4 modules if variant is declared
ifeq ($(TARGET_BOARD_PLATFORM_VARIANT),archos)
include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_SRC_FILES := ion.c
LOCAL_MODULE := libion_ti
LOCAL_MODULE_TAGS := optional
LOCAL_SHARED_LIBRARIES := liblog
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_SRC_FILES := ion.c ion_test.c
LOCAL_MODULE := ion_ti_test
LOCAL_MODULE_TAGS := optional tests
LOCAL_SHARED_LIBRARIES := liblog
include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_SRC_FILES := ion.c ion_test_2.c
LOCAL_MODULE := ion_ti_test2
LOCAL_MODULE_TAGS := optional tests
LOCAL_SHARED_LIBRARIES := liblog
include $(BUILD_EXECUTABLE)

endif
endif
