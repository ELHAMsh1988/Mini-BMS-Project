# Python BMS Simulation

This module simulates a simple Battery Management System (BMS) using Python.

## Purpose

The goal of this simulation is to:
- Generate simulated sensor data (Voltage, Current, Temperature)
- Monitor battery conditions
- Detect warning states (low/high voltage, high temperature)
- Visualize data using graphs

## Technologies Used

- NumPy (random data generation)
- Pandas (data handling)
- Matplotlib (data visualization)

## How It Works

1. Random battery values are generated.
2. The system checks:
   - If voltage is too low
   - If voltage is too high
   - If temperature exceeds safe limits
3. Warning messages are printed.
4. Graphs are displayed for analysis.

## How to Run

Install dependencies:

