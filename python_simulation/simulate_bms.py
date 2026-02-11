import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# شبیه‌سازی ۱۰ سیکل باتری
voltages = 3.5 + np.random.rand(10)*1.5
currents = np.random.rand(10)*2.0
temperatures = 20 + np.random.rand(10)*15

df = pd.DataFrame({
    "Voltage(V)": voltages,
    "Current(A)": currents,
    "Temperature(C)": temperatures
})

# بررسی هشدارها
for i, row in df.iterrows():
    if row["Voltage(V)"] < 3.6:
        print(f"Warning: Voltage too low! {row['Voltage(V)']:.2f} V")
    elif row["Voltage(V)"] > 4.2:
        print(f"Warning: Voltage too high! {row['Voltage(V)']:.2f} V")
    if row["Temperature(C)"] > 30:
        print(f"Warning: Temperature high! {row['Temperature(C)']:.2f} C")

# رسم نمودار
plt.figure(figsize=(8,5))
plt.plot(df["Voltage(V)"], label="Voltage")
plt.plot(df["Current(A)"], label="Current")
plt.plot(df["Temperature(C)"], label="Temperature")
plt.title("Mini BMS Simulation")
plt.xlabel("Cycle")
plt.ylabel("Value")
plt.legend()
plt.grid(True)
plt.savefig("bms_chart.png")
plt.show()
