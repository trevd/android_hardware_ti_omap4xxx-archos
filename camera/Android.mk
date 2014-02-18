LOCAL_PATH:= $(call my-dir)

ifeq ($(TARGET_BOARD_PLATFORM),omap4)
OMAP4_CAMERA_HAL_USES:= ALL

CAMERAHAL_CFLAGS += $(ANDROID_API_CFLAGS)

ifdef TI_CAMERAHAL_DEBUG_ENABLED
    # Enable CameraHAL debug logs
    CAMERAHAL_CFLAGS += -DCAMERAHAL_DEBUG
endif

ifdef TI_CAMERAHAL_VERBOSE_DEBUG_ENABLED
    # Enable CameraHAL verbose debug logs
    CAMERAHAL_CFLAGS += -DCAMERAHAL_DEBUG_VERBOSE
endif

ifdef TI_CAMERAHAL_DEBUG_FUNCTION_NAMES
    # Enable CameraHAL function enter/exit logging
    CAMERAHAL_CFLAGS += -DTI_UTILS_FUNCTION_LOGGER_ENABLE
endif

ifdef TI_CAMERAHAL_DEBUG_TIMESTAMPS
    # Enable timestamp logging
    CAMERAHAL_CFLAGS += -DTI_UTILS_DEBUG_USE_TIMESTAMPS
endif

ifndef TI_CAMERAHAL_DONT_USE_RAW_IMAGE_SAVING
    # Enabled saving RAW images to file
    CAMERAHAL_CFLAGS += -DCAMERAHAL_USE_RAW_IMAGE_SAVING
endif

ifdef TI_CAMERAHAL_PROFILING
    # Enable OMX Camera component profiling
    CAMERAHAL_CFLAGS += -DCAMERAHAL_OMX_PROFILING
endif

CAMERAHAL_CFLAGS += -DLOG_TAG=\"CameraHal\" -DENHANCED_DOMX -DARCH_ARM_HAVE_NEON

TI_CAMERAHAL_COMMON_INCLUDES := \
	system/media/camera/include \
	hardware/ti/omap4xxx-archos/include \
	hardware/ti/omap4xxx-archos/hwc \
	external/jpeg \
	external/jhead \
	$(LOCAL_PATH)/../libtiutils \
	$(LOCAL_PATH)/inc

TI_CAMERAHAL_COMMON_INCLUDES += \
    frameworks/native/include/media/hardware \
    $(DOMX_PATH)/mm_osal/inc \
    $(DOMX_PATH)/omx_core/inc    

TI_CAMERAHAL_COMMON_SRC := \
    CameraHal_Module.cpp \
    CameraHal.cpp \
    CameraHalUtilClasses.cpp \
    AppCallbackNotifier.cpp \
    ANativeWindowDisplayAdapter.cpp \
    BufferSourceAdapter.cpp \
    CameraProperties.cpp \
    BaseCameraAdapter.cpp \
    MemoryManager.cpp \
    Encoder_libjpeg.cpp \
    Decoder_libjpeg.cpp \
    SensorListener.cpp  \
    NV12_resize.cpp \
    CameraParameters.cpp \
    TICameraParameters.cpp \
    CameraHalCommon.cpp \
    FrameDecoder.cpp \
    SwFrameDecoder.cpp \
    DecoderFactory.cpp

TI_CAMERAHAL_OMX_SRC := \
    OMXCameraAdapter/OMX3A.cpp \
    OMXCameraAdapter/OMXAlgo.cpp \
    OMXCameraAdapter/OMXCameraAdapter.cpp \
    OMXCameraAdapter/OMXCapabilities.cpp \
    OMXCameraAdapter/OMXCapture.cpp \
    OMXCameraAdapter/OMXReprocess.cpp \
    OMXCameraAdapter/OMXDefaults.cpp \
    OMXCameraAdapter/OMXExif.cpp \
    OMXCameraAdapter/OMXFD.cpp \
    OMXCameraAdapter/OMXFocus.cpp \
    OMXCameraAdapter/OMXMetadata.cpp \
    OMXCameraAdapter/OMXZoom.cpp \
    OMXCameraAdapter/OMXDccDataSave.cpp \
    OMXCameraAdapter/OMXDCC.cpp \
    OmxFrameDecoder.cpp

TI_CAMERAHAL_USB_SRC := \
    V4LCameraAdapter/V4LCameraAdapter.cpp \
    V4LCameraAdapter/V4LCapabilities.cpp

TI_CAMERAHAL_COMMON_SHARED_LIBRARIES := \
    libui \
    libbinder \
    libutils \
    libcutils \
    libtiutils \
    libcamera_client \
    libgui \
    libjpeg \
    libexif

TI_CAMERAHAL_COMMON_SHARED_LIBRARIES += \
    libion_ti \
    liblog

ifdef OMAP_ENHANCEMENT_CPCAM
TI_CAMERAHAL_COMMON_STATIC_LIBRARIES += \
    libcpcamcamera_client
endif

# =====================
#  ALL Camera Adapters
# ---------------------

include $(CLEAR_VARS)
LOCAL_CLANG := true
CAMERAHAL_CFLAGS += -DOMX_CAMERA_ADAPTER -DV4L_CAMERA_ADAPTER

LOCAL_SRC_FILES:= \
    $(TI_CAMERAHAL_COMMON_SRC) \
    $(TI_CAMERAHAL_OMX_SRC) \
    $(TI_CAMERAHAL_USB_SRC)

LOCAL_C_INCLUDES += \
    $(TI_CAMERAHAL_COMMON_INCLUDES) \
    $(DOMX_PATH)/omx_core/inc \
    $(DOMX_PATH)/mm_osal/inc \
    $(LOCAL_PATH)/inc/OMXCameraAdapter \
    $(LOCAL_PATH)/inc/V4LCameraAdapter

LOCAL_SHARED_LIBRARIES:= \
    $(TI_CAMERAHAL_COMMON_SHARED_LIBRARIES) \
    libmm_osal \
    libOMX_Core \
    libdomx

LOCAL_STATIC_LIBRARIES := $(TI_CAMERAHAL_COMMON_STATIC_LIBRARIES)

LOCAL_CFLAGS += -Wno-error=unused-parameter -DUSE_LIBION_TI -fno-short-enums -DCOPY_IMAGE_BUFFER $(CAMERAHAL_CFLAGS)

LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_MODULE:= camera.omap4
LOCAL_MODULE_TAGS:= optional

include $(BUILD_HEAPTRACKED_SHARED_LIBRARY)

endif

