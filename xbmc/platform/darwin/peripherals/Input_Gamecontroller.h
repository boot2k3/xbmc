/*
 *  Copyright (C) 2020 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include "peripherals/PeripheralTypes.h"
#include "threads/CriticalSection.h"

#import <Foundation/Foundation.h>

enum class GCCONTROLLER_TYPE;
@class CBPeripheralBusGCControllerManager;

@interface Input_GCController : NSObject

- (instancetype)initWithName:(CBPeripheralBusGCControllerManager*)callbackManager;
- (PERIPHERALS::PeripheralScanResults)GetGCDevices;
- (GCCONTROLLER_TYPE)GetGCControllerType:(int)deviceID;
- (int)checkOptionalButtons:(int)deviceID;

@end
