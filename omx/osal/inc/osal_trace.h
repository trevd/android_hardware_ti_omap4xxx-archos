/*
 * Copyright (C) Texas Instruments - http://www.ti.com/
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _OSAL_TRACES_H_
#define _OSAL_TRACES_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <utils/Log.h>

#define OSAL_ErrorTrace(fmt,...) ALOGE(fmt);
#define OSAL_WarningTrace(fmt,...) ALOGE(fmt);
#define OSAL_Info(fmt,...) ALOGD(fmt);
#define OSAL_Entering(fmt,...) ALOGD(fmt);
#define OSAL_Exiting(fmt,...) ALOGD(fmt);


#ifdef __cplusplus
}
#endif

#endif  /* _OSAL_TRACES_H_ */
