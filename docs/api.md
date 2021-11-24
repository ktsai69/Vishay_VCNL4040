# Vishay_VCNL4040 library

## Methods

### `begin()`

Initialize the vcnl4040.

#### Syntax 

```
vcnl4040.begin()
```

#### Parameters

None.

#### Returns

1 on success, 0 on failure.

#### Example

```
if (!vcnl4040.begin()) {
    Serial.println("Failed to initialize vcnl4040!");
    while (1);
}
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `end()`

De-initialize the vcnl4040.

#### Syntax 

```
vcnl4040.end()
```

#### Parameters

None.

#### Returns

None.

#### Example

```
if (!vcnl4040.begin()) {
    Serial.println("Failed to initialize vcnl4040!");
    while (1);
}

// Read data...

// Done with the vcnl4040 readings
vcnl4040.end();
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `read_PRX()`

Read the vcnl4040's Proximity sensor. 

#### Syntax 

```
boolean vcnl4040.read_PRX(uint16_t *prx)
```

#### Parameters

prx - point of uint16_t for proximity count.

#### Returns

true on success, false on failure.

#### Example

```
uint16_t prx;

if (vcnl4040.read_PRX(&prx))
    Serial.print(prx);

```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `read_ALS()`

Read the vcnl4040's Ambient Light sensor. 

#### Syntax 

```
boolean vcnl4040.read_ALS(uint16_t *als)
```

#### Parameters

als - point of uint16_t for ambient light count.

#### Returns

true on success, false on failure.

#### Example

```
uint16_t als;

if (vcnl4040.read_ALS(&als))
    Serial.print(als);

```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `get_lux()`

Read the vcnl4040's Ambient Light sensor and report to lux. 

#### Syntax 

```
float vcnl4040.get_lux()
```

#### Parameters

None.

#### Returns

Positive or zero on success, negative on failure.

#### Example

```
float lux = vcnl4040.get_lux();

if (lux >= 0)
    Serial.print(lux);

```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `ALS_SD()`

Shutdown/Enable Ambient Light sensor. 

#### Syntax 

```
boolean vcnl4040.ALS_SD(boolean shutdown)
```

#### Parameters

shutdown
- **true** to **Shut Down** sensor
- **false** to **Power On** sensor.

#### Returns

true on success, false on failure.

#### Example

```
// Power on Ambient Light sensor
vcnl4040.ALS_SD(false);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `ALS_INT_EN()`

Enable/disable interrupt of Ambient Light sensor. 

#### Syntax 

```
boolean vcnl4040.ALS_INT_EN(boolean enable)
```

#### Parameters

enable - true to enable ALS interrupt, false to disable ALS interrupt.

#### Returns

true on success, false on failure.

#### Example

```
// Enable ALS interrupt
vcnl4040.ALS_INT_EN(true);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `ALS_INT_with_threshold()`

Enable Ambient Light sensor interrupt and set threshold by percentage. 

#### Syntax 

```
boolean vcnl4040.ALS_INT_with_threshold(float percent)
```

#### Parameters

percent - set the +/- percentage of current Ambient Light counts.

#### Returns

true on success, false on failure.

#### Example

```
// Enable ALS interrupt with +/- 3.0% threshold
vcnl4040.ALS_INT_with_threshold(3.0f);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `PRX_SD()`

Shutdown/Enable Proximity sensor. 

#### Syntax 

```
boolean vcnl4040.PRX_SD(boolean shutdown)
```

#### Parameters

shutdown - true to Shut Down sensor, false to Power On sensor.
- **true** to **Shut Down** sensor
- **false** to **Power On** sensor.

#### Returns

true on success, false on failure.

#### Example

```
// Shut Down Proximity sensor
vcnl4040.PRX_SD(true);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `PRX_INT()`

Set interrupt mode for Proximity sensor. 

#### Syntax 

```
boolean vcnl4040.PRX_INT(VCNL4040Sensor prx_int)
```

#### Parameters

prx_int
- **PRX_INT_DISABLE** for disable proximity interrupt.
- **PRX_INT_CLOSING** for enable closing interrupt.
- **PRX_INT_AWAY** for enable away interrupt.
- **PRX_INT_BOTH** for enable both closing and away interrupts.

#### Returns

true on success, false on failure.

#### Example

```
// Enable PRX both Closing and Away interrupt
vcnl4040.ALS_INT_EN(vcnl4040.PRX_INT_BOTH);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `PRX_INT_with_threshold()`

Enable Proximity sensor interrupt and set Low and High thresholds. 

#### Syntax 

```
boolean vcnl4040.PRX_INT_with_threshold(uint16_t thdl, uint16_t thdh)
```

#### Parameters

thdl - Low threshold.
thdh - High threshold.

#### Returns

true on success, false on failure.

#### Example

```
// Enable PRX interrupt at 50 low threshold and 100 high threshold.
vcnl4040.PRX_INT_with_threshold(50, 100);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `read_INT_FLAG()`

Read to clean interrupt for VCNL4040.

#### Syntax 

```
boolean vcnl4040.read_INT_FLAG(uint16_t *int_flag)
```

#### Parameters

int_flag - point of uint16_t, it mixes by:<BR>
- **ALS_IF_H** for ALS High threshold event.<BR>
- **ALS_IF_L** for ALS High threshold event.<BR>
- **PRX_IF_CLOSE** for PRX Close event.<BR>
- **PRX_IF_AWAY** for PRX Away event.<BR>
- **PRX_SPFLAG** for PRX enter sunlight protection.<BR>
- **PRX_UPFLAG** for PRX code saturated.<BR>

#### Returns

true on success, false on failure.

#### Example

```
uint16_t int_flag;
if (vcnl4040.read_INT_FLAG(&int_flag))
{
  if (int_flag & (vcnl4040.ALS_IF_L | vcnl4040.ALS_IF_H))
  {
    Serial.print("Lux = ");
    Serial.print(vcnl4040.get_lux());
    if (int_flag & vcnl4040.ALS_IF_L)
      Serial.print("\tLow threshold.");
    if (int_flag & vcnl4040.ALS_IF_H)
      Serial.print("\tHigh threshold.");
    Serial.println();
    // Re-set thresholds
    vcnl4040.ALS_INT_with_threshold(thd_percent);
  }
  if (int_flag & (vcnl4040.PRX_IF_CLOSE | vcnl4040.PRX_IF_AWAY))
  {
    uint16_t prx;
    vcnl4040.read_PRX(&prx);
    Serial.print("PRX = ");
    Serial.print(prx);
    if (int_flag & vcnl4040.PRX_IF_CLOSE)
      Serial.print("\tClose event.");
    if (int_flag & vcnl4040.PRX_IF_AWAY)
      Serial.print("\tAway event.");
    Serial.println();
  }
}
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)


### `lens_factor`

Lens Factor for customerize material effect. 

#### Syntax 

```
float vcnl4040.lens_factor
```

#### Parameters

None.

#### Returns

Floating variable.

#### Example

```
Serial.print(vcnl4040.lens_factor);
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `set_PRX_LED_I()`

Set IR LED current.

#### Syntax 

```
boolean vcnl4040.set_PRX_LED_I(PRX_LED_I_t led_i)
```

#### Parameters

led_i - it mixes by:<BR>
- **PRX_LED_I_50mA** 50mA<BR>
- **PRX_LED_I_75mA** 75mA<BR>
- **PRX_LED_I_100mA** 100mA<BR>
- **PRX_LED_I_120mA** 120mA<BR>
- **PRX_LED_I_140mA** 140mA<BR>
- **PRX_LED_I_160mA** 160mA<BR>
- **PRX_LED_I_180mA** 180mA<BR>
- **PRX_LED_I_200mA** 200mA<BR>

#### Returns

true on success, false on failure.

#### Example

```
  // Set IR LED to 100mA current
  vcnl4040.set_PRX_LED_I(vcnl4040.PRX_LED_100mA));
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

### `get_PRX_LED_I()`

Get the setting of IR LED current.

#### Syntax 

```
VCNL4040Class::PRX_LED_I_t vcnl4040.get_PRX_LED_I()
```

#### Parameters

None.

#### Returns

- **PRX_LED_I_50mA** 50mA<BR>
- **PRX_LED_I_75mA** 75mA<BR>
- **PRX_LED_I_100mA** 100mA<BR>
- **PRX_LED_I_120mA** 120mA<BR>
- **PRX_LED_I_140mA** 140mA<BR>
- **PRX_LED_I_160mA** 160mA<BR>
- **PRX_LED_I_180mA** 180mA<BR>
- **PRX_LED_I_200mA** 200mA<BR>

#### Example

```
  // Get the IR LED current
  Serial.print("PRX_LED_I: ");
  switch(vcnl4040.get_PRX_LED_I())
  {
    case VCNL4040Class::PRX_LED_I_50mA:
      Serial.println("50mA");
      break;
    case VCNL4040Class::PRX_LED_I_75mA:
      Serial.println("75mA");
      break;
    case VCNL4040Class::PRX_LED_I_100mA:
      Serial.println("100mA");
      break;
    case VCNL4040Class::PRX_LED_I_120mA:
      Serial.println("120mA");
      break;
    case VCNL4040Class::PRX_LED_I_140mA:
      Serial.println("140mA");
      break;
    case VCNL4040Class::PRX_LED_I_160mA:
      Serial.println("160mA");
      break;
    case VCNL4040Class::PRX_LED_I_180mA:
      Serial.println("180mA");
      break;
    case VCNL4040Class::PRX_LED_I_200mA:
      Serial.println("200mA");
      break;
  }
```

#### See also

* [begin()](#begin)
* [end()](#end)
* [read_PRX()](#read_PRX)
* [read_ALS()](#read_ALS)
* [get_lux()](#get_lux)
* [ALS_SD()](#ALS_SD)
* [ALS_INT_EN()](#ALS_INT_EN)
* [ALS_INT_with_threshold()](#ALS_INT_with_threshold)
* [PRX_SD()](#PRX_SD)
* [PRX_INT()](#PRX_INT)
* [PRX_INT_with_threshold()](#PRX_INT_with_threshold)
* [read_INT_FLAG()](#read_INT_FLAG)
* [lens_factor](#lens_factor)
* [set_PRX_LED_I()](#set_PRX_LED_I)
* [get_PRX_LED_I()](#get_PRX_LED_I)

