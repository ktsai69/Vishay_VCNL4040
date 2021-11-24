/*
  This file is part of the Vishay_VCNL4040 library.
  Copyright (c) 2021 Vishay Capella.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Vishay_VCNL4040.h"

void setup()
{
  Serial.begin(9600);
  while (!Serial);
  Serial.println();

  if (!vcnl4040.begin())
  {
    Serial.println("Failed to initialize vcnl4040");
    while(1);
  }
  
  // Set IR LED current to 100mA
  vcnl4040.set_PRX_LED_I(vcnl4040.PRX_LED_I_100mA);

  Serial.println("PRX\tLux");
}

void loop()
{
  uint16_t prx;

  if (vcnl4040.read_PRX(&prx))
  {
    Serial.print(prx);
    Serial.print('\t');
    Serial.println(vcnl4040.get_lux());
  }

  delay(500);
}
