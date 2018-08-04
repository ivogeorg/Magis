/*
 * This file is part of Cleanflight and Magis.
 *
 * Cleanflight and Magis are free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight and Magis are distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef __cplusplus
extern "C" {
#endif 

#define MPU6500_WHO_AM_I_CONST              (0x70)

#define MPU6500_BIT_RESET                   (0x80)

#pragma once

bool mpu6500AccDetect(acc_t *acc);
bool mpu6500GyroDetect(gyro_t *gyro);

void mpu6500AccInit(void);
void mpu6500GyroInit(uint16_t lpf);

#ifdef __cplusplus
}
#endif 
