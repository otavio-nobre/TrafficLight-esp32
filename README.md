# ESP32 Traffic Light Controller 🚦

A lightweight embedded systems project implementing a standard three-phase traffic light sequence using an ESP32 microcontroller board and C++/Arduino framework.

## 📌 Features

- **Automated Cycling:** Cycles between Red, Green, and Yellow states using non-overlapping timing intervals.
- **Hardware Abstraction:** Clean pin mapping setup for standard GPIO configuration on ESP32 DevModules.
- **Prototyping:** Breadboard-ready circuit design utilizing current-limiting resistors and LED indicators.

---

## 📹 Hardware Demo & Setup

| Circuit Demonstration | Breadboard Wiring |
| :---: | :---: |


https://github.com/user-attachments/assets/d0d1ec3b-c3e3-4a80-8570-5ffbf4d8f1a0

<img width="1200" height="1600" alt="traficlightphoto" src="https://github.com/user-attachments/assets/e15bd549-524d-4e4a-8805-606b5a352a73" />


---

## 🛠️ Components & Pinout

### Hardware List
* **Microcontroller:** ESP32-WROOM-32 / DevModule (1x)
* **LED Indicators:**
  * Red LED (1x)
  * Yellow LED (1x)
  * Green LED (1x)
* **Resistors:** 220Ω Current Limiting Resistors (3x)
* **Breadboard & Jumpers**

### Pin Configuration
| Component | GPIO Pin |
| :--- | :--- |
| Red LED | `GPIO 12` |
| Yellow LED | `GPIO 27` |
| Green LED | `GPIO 25` |

---

## 💻 Getting Started

### Prerequisites
1. [Arduino IDE 2.x](https://www.arduino.cc/en/software) or [VSCodium](https://vscodium.com/) with PlatformIO.
2. ESP32 board support installed via the Arduino Board Manager (`https://dl.espressif.com/dl/package_esp32_index.json`).

### Installation & Flashing
1. Clone the repository:
   ```bash
   git clone [https://github.com/otavio-nobre/TrafficLight-esp32.git](https://github.com/otavio-nobre/TrafficLight-esp32.git)
