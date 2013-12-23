# Copyright (C) 2011 The Android Open Source Project
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

# only use the archos omap4 modules if variant is declared
ifeq ($(strip $(TARGET_BOARD_PLATFORM_VARIANT)),archos)

PRODUCT_PACKAGES += \
	libdomx \
	libOMX_Core \
	libOMX.TI.DUCATI1.VIDEO.H264E \
	libOMX.TI.DUCATI1.VIDEO.MPEG4E \
	libOMX.TI.DUCATI1.VIDEO.DECODER \
	libOMX.TI.DUCATI1.VIDEO.DECODER.secure \
	libOMX.TI.DUCATI1.VIDEO.CAMERA \
	libOMX.TI.DUCATI1.MISC.SAMPLE \
	libstagefrighthw \
	libI420colorconvert \
	libion_ti \
	libtiutils \
	libtiaudioutils \
	libcamera \
	libomxcameraadapter \
	smc_pa_ctrl \
	tf_daemon \
	libedid \
	libdsswb \
	libtf_crypto_sst \
	libbt-vendor \
	uim-sysfs
	
# Hardware specific libs
PRODUCT_PACKAGES += \
	hwcomposer.omap4 \
	camera.omap4 \
	audio_policy.omap4 \
	audio.primary.omap4 \
	audio.hdmi.omap4 \

PRODUCT_VENDOR_KERNEL_HEADERS := hardware/ti/omap4xxx-archos/kernel-headers

endif