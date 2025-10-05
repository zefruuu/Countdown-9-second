# Countdown-9-second
Arduino project, a simple 9-second timer, can be restarted by pressing a button, and a sound is emitted when the timer ends.

## 🖼️ Circuit Diagram
If you’ve created your wiring diagram in Tinkercad or Fritzing, save it as `[docs/schematic.png](https://drive.google.com/file/d/1CmBbQH6z5q1-sLIL_vnh-RqjvL_QcxTe/view?usp=sharing)` and add it here:

![Circuit Diagram]([docs/schematic.png](https://drive.google.com/file/d/1CmBbQH6z5q1-sLIL_vnh-RqjvL_QcxTe/view?usp=sharing))

## 🔧 Components

| Component | Quantity | Description |
|------------|-----------|-------------|
| Arduino Uno | 1 | Main controller board |
| LEDs (x8) or 7-segment display | 1 | To display digits 1–9 |
| Resistors (220 Ω) | 8 | For LEDs |
| Buzzer | 1 | For sound alert |
| Push button | 1 | To start the countdown |
| Wires and breadboard | – | For connections |

---

## ⚙️ Description

- Pressing the button starts a countdown from **9 to 1**.  
- Each number is displayed using LEDs connected to pins **2–9**.  
- After the countdown ends, the **buzzer (pin 10)** and **LED (pin 12)** start blinking with a 0.5-second interval.  
- Pressing the button again during the countdown immediately resets it.

---

## 🔌 Wiring

| Component | Arduino Pin | Function |
|------------|--------------|----------|
| LED segment A–H | D2–D9 | Number display |
| Buzzer | D10 | Sound output |
| LED (indicator) | D12 | Visual alert |
| Button | D11 | Start / reset |
| GND | GND | Common ground |

*(You can use a 7-segment display instead of separate LEDs.)*

---

## 💾 Code Overview

### Main idea
The code stores digit patterns (1–9) in a two-dimensional array and uses `digitalWrite()` to show each number on LEDs.  
After reaching 1, it triggers blinking of the buzzer and LED.

### Key functions
- `showDigit(int n)` — lights up LEDs according to the digit pattern.  
- `loop()` — waits for button press, performs countdown, then activates buzzer and LED blink loop.
