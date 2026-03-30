# 🪖 Smart Soldier Health Monitoring System (LoRa-Based)

## 📌 Overview

A low-power, cost-effective wearable system designed to monitor soldier health and safety in remote areas without internet connectivity.

This system uses **LoRa communication**, **edge-based decision making**, and multiple sensors to detect emergencies and transmit alerts only when necessary.

---

## 🎯 Objectives

* Monitor soldier **heart rate** in real-time
* Detect **motion / inactivity / falls**
* Track **GPS location during emergencies**
* Reduce **false alerts using edge intelligence**
* Enable communication in **no-network zones using LoRa**
* Minimize **power consumption with event-based transmission**

---

## ⚙️ System Architecture

### 🔹 Hardware Components

* ESP32 (Main Controller)
* LoRa Module (RA-02)
* Heart Rate Sensor (MAX30102)
* Motion Sensor (MPU6050)
* GPS Module (Neo-6M)
* DHT22 (Temperature & Humidity)

### 🔹 Communication Flow

Sensor Data → ESP32 (Edge Processing) → LoRa Transmission → Receiver ESP32 → Dashboard

---

## 🧠 Edge-Based Decision Logic (Simple ML)

A rule-based decision tree runs locally on the ESP32.

### Inputs:

* Heart Rate
* Motion Status
* Temperature
* Humidity
* Time Duration

### Outputs:

* ✅ Normal (No transmission)
* ⚠️ Warning (Local monitoring)
* 🚨 Emergency (LoRa alert + GPS)

### Example Rules:

* High HR + High Temperature → Heat stress / Panic
* No motion + Abnormal HR → Medical emergency
* No motion + Normal HR → Normal (rest/guard duty)

---

## 🔋 Key Features

* Event-based communication (saves power)
* Long-range (5–10 km) LoRa transmission
* No internet / No SIM required
* Reduced false alarms using multi-sensor logic
* Lightweight wearable design

---

## 🚫 Why Not GSM?

* Requires network availability
* Vulnerable in border areas
* Needs SIM & subscription

### ✔️ LoRa Advantages:

* No internet required
* Long range communication
* Low power consumption
* Works in remote regions

---

## 💡 Innovation

This project is unique because of:

* Edge-based intelligence (no cloud needed)
* Context-aware decision making
* Power-efficient alert system
* Low-cost implementation (~₹3000)

---

## 🔧 Current Status

* Sensor integration completed ✅
* LoRa communication setup in progress 🔄
* Edge decision logic partially implemented ⚠️

---

## 🚀 Future Enhancements

* Encrypted LoRa communication
* Base station dashboard
* Personalized health profiles
* Solar/kinetic energy harvesting

---

## 📚 References

* Research papers on soldier monitoring systems
* LoRa-based communication systems
* IoT wearable health monitoring

---

## 👨‍💻 Team

* Seshasaai (Team Lead)
* Bala Manikanta
* Kamaleshwaran

---

## 📌 Note

This project focuses on **low-cost, low-power deployment**, not replacing high-end military systems.
