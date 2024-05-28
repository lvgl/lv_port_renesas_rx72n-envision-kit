# LVGL ported to Renesas RX72N Envision Kit

## Overview

???
The EK-RA6M3G evaluation kit enables users to seamlessly evaluate the features of the RA6M3 MCU Group and develop embedded systems applications using Renesas’ Flexible Software Package (FSP) and e2 studio IDE. Utilize rich on-board features along with your choice of popular ecosystem add-ons to bring your big ideas to life.

The MCU has a high-performance Arm Cortex-M4 core and offers a TFT controller with 2D accelerator and JPEG decoder. Additionally, it has Ethernet MAC with individual DMA and USB high-speed interface to ensure high data throughput
???

## Buy

You can purchase the Renesas RX72N Envision Kit from many distributors. See the sources at https://www.renesas.com/rx72n-envision-kit

## Benchmark

???
During the benchmark 2 frame buffer were used in the external SRRAM. LVGL was configured to `LV_DISPLAY_RENDER_MODE_DIRECT` and the buffer were swapped on VSYNC to avoid tearing.
???

As observed in the video ...

Check out RX72N in action, running LVGL's benchmark demo:
[![image](https://github.com/lvgl/lv_renesas/assets/7599318/a0a0dc0a-f96f-410a-ba71-555b3a788b61)](https://www.youtube.com/embed/LHPIqBV_MGA)

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
- Install the proper drivers
    - for Windows: [64 bit here](https://www.renesas.com/us/en/document/uid/usb-driver-renesas-mcu-tools-v27700-64-bit-version-windows-os?r=488806) and [32 bit here](https://www.renesas.com/us/en/document/uid/usb-driver-renesas-mcu-toolse2e2-liteie850ie850apg-fp5-v27700for-32-bit-version-windows-os?r=488806)
    - for Linux: [here](https://www.renesas.com/us/en/document/swo/e2-emulator-e2-emulator-lite-linux-driver?r=488806)
- Install a compiler for the RX family. A free and open-source version is available [here](https://llvm-gcc-renesas.com/rx-download-toolchains/) after a registration.
- Install the [JLink driver](https://www.segger.com/downloads/jlink/) if not installed yet. 
- Install [Renesas E2 Studio](https://www.renesas.com/us/en/software-tool/e-studio)

### Run the project
Step-by-step description of setting up the project can be found in [the official LVGL documentation](https://docs.lvgl.io/master/integration/chip/renesas.html#getting-started-with-lvgl).

### Debugging
- JLink VCOM port is not available, but e2 studio provides a feature rich debugging experience.

## Contribution and Support

If you find any issues with the development board feel free to open an Issue in this repository. For LVGL related issues (features, bugs, etc) please use the main [lvgl repository](https://github.com/lvgl/lvgl). 

If you found a bug and found a solution too please send a Pull request. If you are new to Pull requests refer to [Our Guide](https://docs.lvgl.io/master/CONTRIBUTING.html#pull-request) to learn the basics.

