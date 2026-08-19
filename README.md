# Arduino Chrome Dino Auto Player 🦖

An Arduino-based automatic player for the Google Chrome Dino game.

The project uses an LDR to detect obstacles on the screen and an SG90 servo motor to physically press the SPACE key whenever an obstacle is detected.

## How It Works

LDR Sensor
↓
Arduino UNO
↓
Obstacle Detection
↓
SG90 Servo Motor
↓
SPACE Key
↓
Chrome Dino Jumps

## Components

- Arduino UNO
- LDR (Light Dependent Resistor)
- 10 kΩ Resistor
- SG90 Servo Motor
- Breadboard
- Jumper Wires
- USB Cable
- Laptop

## Circuit Connections

### LDR

| Component | Arduino |
|---|---|
| LDR | 5V and A0 |
| 10 kΩ Resistor | A0 and GND |

### Servo

| Servo Wire | Arduino |
|---|---|
| Red | 5V |
| Brown/Black | GND |
| Orange/Yellow | D9 |

## Working

The LDR continuously monitors the Chrome Dino game screen.

When there is no obstacle, the LDR reading remains above the configured threshold.

When a cactus enters the detection area, the LDR reading decreases.

The Arduino detects this change and activates the SG90 servo.

The servo moves its arm to physically press the SPACE key, making the Dino jump.

## Software

- Arduino IDE
- Arduino C/C++
- Servo Library

## Current Configuration

- LDR Pin: A0
- Servo Pin: D9
- Detection Threshold: 470
- Servo Angle: 70°
- Servo Press Duration: 70 ms
- Jump Cooldown: 150 ms

## Project Flow

```text
Chrome Dino Screen
        ↓
      LDR
        ↓
   Arduino UNO
        ↓
Obstacle Detected
        ↓
   SG90 Servo
        ↓
   SPACE Key
        ↓
   Dino Jumps
