//
//  common.hpp
//  agoraRTMCWrapper
//
//  Created by 张涛 on 2020/9/11.
//  Copyright © 2020 张涛. All rights reserved.
//
#pragma once
#include <stdio.h>

#if defined(_WIN64)
#define AGORARTC_EXPORT
#pragma comment(lib, "../sdk/x64/lib/agora_rtm_sdk.lib")
#include "../sdk/x64/include/IAgoraRtmCallManager.h"
#include "../sdk/x64/include/IAgoraRtmService.h"
#elif defined(_WIN32)
#define AGORARTC_EXPORT
#pragma comment(lib, "../sdk/x86/lib/agora_rtm_sdk.lib")
#include "../sdk/x86/include/IAgoraRtmCallManager.h"
#include "../sdk/x86/include/IAgoraRtmService.h"
#elif defined(__APPLE__)
#include "../Agora_RTM_SDK_for_iOS/libs/AgoraRtmKit.framework/Headers/IAgoraRtmCallManager.h"
#include "../Agora_RTM_SDK_for_iOS/libs/AgoraRtmKit.framework/Headers/IAgoraRtmService.h"
#elif defined(__ANDROID__) || defined(__linux__)
#include "../prebuilt/include/IAgoraRtmCallManager.h"
#include "../prebuilt/include/IAgoraRtmService.h"
#endif
