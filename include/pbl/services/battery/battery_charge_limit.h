/* SPDX-FileCopyrightText: 2026 Shashvat Prabhu */
/* SPDX-License-Identifier: Apache-2.0 */

#pragma once

#include "pbl/services/battery/battery_state.h"

//! Optionally pauses charging once the battery reaches a configured percentage limit to
//! reduce degradation from sustained high charge levels. While plugged in the watch runs
//! from USB power, so the level holds without a resume threshold. Charging re-enables as
//! soon as the level is below the limit, the watch is unplugged, or the limit is disabled.

#define CHARGE_LIMIT_PCT_DISABLED 0
#define CHARGE_LIMIT_PCT_MIN 50
#define CHARGE_LIMIT_PCT_MAX 95

void battery_charge_limit_evaluate(PreciseBatteryChargeState state);

void battery_charge_limit_handle_pref_change(void);
