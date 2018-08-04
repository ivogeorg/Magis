/*
 * This file is part of Magis.
 *
 * Magis is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Magis is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

class Althold_P {

public:

    int32_t getEstimatedAltitude(void);

    int32_t getVelocityZ(void);

    void activateAlthold(bool activate);

    bool isAltholdModeActive(void);

    void setAltholdHeight(int32_t height);

    void setRelativeAltholdHeight(int32_t height);

    int32_t getAltholdHeight(void);

};

extern Althold_P Althold;

#ifdef __cplusplus
}
#endif
