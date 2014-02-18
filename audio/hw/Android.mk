# Copyright (C) 2011 Texas Instruments
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.



LOCAL_PATH := $(call my-dir)

###
### OMAP ABE AUDIO HAL
###

ifeq ($(TARGET_BOARD_PLATFORM), omap4)

include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_CFLAGS := -Wno-unused-parameter

LOCAL_MODULE := audio.primary.omap4

LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_SRC_FILES := audio_hw.c
LOCAL_SRC_FILES += ril_interface.c

LOCAL_C_INCLUDES += \
	external/tinyalsa/include \
	system/media/audio_utils/include \
	system/media/audio_effects/include
LOCAL_SHARED_LIBRARIES := liblog libcutils libtinyalsa libaudioutils libdl
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)

endif # omap4, omap5

###
### OMAP HDMI AUDIO HAL
###
ifeq ($(TARGET_BOARD_PLATFORM), omap4)

include $(CLEAR_VARS)
LOCAL_CLANG := true
LOCAL_CFLAGS := -Wno-unused-parameter

LOCAL_MODULE := audio.hdmi.omap4

LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_SRC_FILES := hdmi_audio_hw.c \
	hdmi_audio_utils.c

LOCAL_C_INCLUDES += \
	external/tinyalsa/include \
	system/media/audio_utils/include \
	system/media/audio_effects/include \
    hardware/ti/domx/omx_core/inc
    
LOCAL_SHARED_LIBRARIES := liblog libcutils libtinyalsa libaudioutils libdl
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)

endif # omap4, omap5, jacinto6
