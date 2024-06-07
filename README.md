# LVGL ported to Renesas RX72N Envision Kit

## Overview

Equipped with 32-bit microcomputer, RX family flagship RX72N is an excellent choice for GUI creation using LCD, HMI development such as voice input/output, and IoT device development using Wi-Fi, BLE or Ethernet. By using LVGL's demo repository with Renesas' ecosystem, you can experience immediately and develop quickly.

The IC is equipped with the third-generation RX CPU core, the RXv3, and an internal networking of peripheral allowing real-time control high-performance with a single chip. The device also has complete security capability, vital for industrial and consumer equipment today.

## Benchmark

[![image](https://github.com/lvgl/lv_port_renesas_rx72n-envision-kit/assets/7599318/43f682f4-515a-449c-92dc-7eb2383643d1)
](https://www.youtube.com/watch?v=__56v8DsfH0)



## Buy

You can purchase the Renesas RX72N Envision Kit from many distributors. See the sources at https://www.renesas.com/rx72n-envision-kit

## Specification

### CPU and Memory
- **MCU:** R5F572NNHDFB (RXv3, 240MHz)
- **RAM:** 1MB internal SRAM
- **Flash:** 4MB internal, 32MB external QSPI Flash
- **GPU:** Dave2D

### Display and Touch
- **Resolution:** 480x272
- **Display Size:** 4.3”
- **Interface:** Parallel RGB565
- **Color Depth:** 16-bit
- **Technology:** TFT-LCD, Transmissive
- **DPI:** 128 px/inch
- **Touch Pad:** Capacitive

### Connectivity
The board is equipped with many communication interfaces, including (but not limited to):
- Ethernet
- Wi-Fi/BLE combo module
- USB 2.0 full speed host
- 3.5mm audio jack
- microSD

## Getting started

### Hardware setup
- Connect the USB cable to the `Debug` (ECN1) connector, next to the Ethernet port.
- Set both channels of SW1 (next to ECN1) to OFF

### Software setup
- You can clone the repository with the following command:
    ```
    git clone https://github.com/lvgl/lv_port_renesas_rx72n-envision-kit.git --recurse-submodules
    ```
    Downloading the `.zip` from GitHub doesn't work as it doesn't download the submodules.

- Follow the *RX family* section of the [*documentation*](https://docs.lvgl.io/master/integration/chip/renesas.html#get-started-with-the-renesas-ecosystem) to prepare your environment and import the project

## Contribution and Support

If you find any issues with the development board feel free to open an Issue in this repository. For LVGL related issues (features, bugs, etc) please use the main [lvgl repository](https://github.com/lvgl/lvgl). 

If you found a bug and found a solution too please send a Pull request. If you are new to Pull requests refer to [Our Guide](https://docs.lvgl.io/master/CONTRIBUTING.html#pull-request) to learn the basics.

