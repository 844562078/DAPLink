/**
 * @file    dapule_stm32f103xb_nrf52.c
 * @brief   board file for DAPule (stm32f103xb) targeting nRF52
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2021, Arm Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "target_board.h"
#include "target_family.h"

extern target_cfg_t target_device_nrf52;

const board_info_t g_board_info = {
    .info_version = kBoardInfoVersion,
    .board_id = "FFFE",
    .family_id = kNordic_Nrf52_FamilyID,
    .flags = kEnablePageErase,
    .target_cfg = &target_device_nrf52,
};