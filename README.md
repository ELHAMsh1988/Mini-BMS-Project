# Mini-BMS-Project
Mini Battery Management System (STM32 – Embedded C)
Overview

This project implements a simplified Battery Management System (BMS) using an STM32 microcontroller (ARM Cortex-M). The focus is on system-level firmware development in Embedded C with hardware-oriented programming.

The system monitors battery voltage levels, evaluates system states, and simulates protection logic.

Architecture

The firmware is structured into logical layers:

Hardware Abstraction Layer (Register-Level Configuration)

Peripheral Initialization (ADC, GPIO, Timer)

State Machine Logic

Monitoring & Protection Logic

Data Output Interface

A Finite State Machine (FSM) is used to manage system states such as:

Initialization

Normal Operation

Warning

Fault / Protection Mode

Technical Features

Bare-Metal programming in Embedded C

Register-level peripheral configuration

ADC-based voltage sampling

Interrupt-based event handling

Deterministic state transitions

Modular firmware structure

Functional validation through test scenarios

Development Focus

This project emphasizes:

Structured embedded software design

Hardware-near programming

Deterministic behavior in microcontroller systems

Clean and maintainable code architecture

Version control with Git

Tools

STM32 (ARM Cortex-M)

Embedded C

Git / GitHub

VS Code / Embedded Toolchain

Future Extensions

Integration of communication interface (UART / CAN)

Migration to RTOS-based scheduling

Extended fault-diagnostics

Hardware-in-the-loop testing

![IMG_9385](https://github.com/user-attachments/assets/830135e8-5ac4-4bd5-a1cd-ec24f8654570)




## Simulation Results


### Battery Voltage
<img width="640" height="480" alt="IMG_9386" src="https://github.com/user-attachments/assets/e2abf0c9-f991-41d0-bbf4-c2d5ccf86904" />


### Battery Temperature
<img width="640" height="480" alt="IMG_9387" src="https://github.com/user-attachments/assets/5c169d7a-2fcb-4eba-b7b6-42ef2b1b894e" />


### Battery Current
<img width="640" height="480" alt="IMG_9388" src="https://github.com/user-attachments/assets/1c77e18f-dd7a-4b28-bea0-beb8a6306f84" />
