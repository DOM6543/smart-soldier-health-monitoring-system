# 🪖 Smart Soldier Health Monitoring System (LoRa-Based)

## 📌 Overview

This project presents a **low-power, cost-effective wearable system** designed to monitor soldier health and safety in remote and border areas where internet connectivity is unavailable.

It integrates multiple sensors with **edge-based decision logic** and **LoRa communication** to transmit alerts only during emergency situations.

---

## 🎯 Problem Statement

Soldiers deployed in remote regions face:

* No GSM / internet connectivity
* Long periods without supervision
* Undetected health emergencies

Existing systems are:

* Expensive
* Power-hungry
* Not scalable

---

## 💡 Proposed Solution

A **wearable embedded system** that:

* Monitors health & motion
* Uses **edge intelligence (decision tree)**
* Sends alerts via **LoRa (5–10 km)**
* Transmits data **only during emergencies**

---

## ⚙️ Hardware Components

| Component  | Purpose                  |
| ---------- | ------------------------ |
| ESP32      | Main controller          |
| MAX30102   | Heart rate sensor        |
| MPU6050    | Motion detection         |
| Neo-6M GPS | Location tracking        |
| DHT22      | Temperature & humidity   |
| LoRa RA-02 | Long-range communication |

---

## 🧠 Edge-Based Decision Logic

### Inputs:

* Heart Rate
* Motion Status
* Temperature
* Humidity
* Time Duration

### Output States:

* ✅ Normal
* ⚠️ Warning
* 🚨 Emergency

### Decision Rules:

* HR ↑ + Temp ↑ → Heat stress
* No motion + abnormal HR → Emergency
* No motion + normal HR → Safe (resting)

---

## 🔋 Key Features

* Event-based transmission (low power)
* No internet / SIM required
* Long-range communication (LoRa)
* Reduced false alerts
* Lightweight wearable design

---

## 📡 System Flow

```
Sensors → ESP32 → Edge Processing → LoRa → Receiver → Dashboard
```

---

## 🚫 Why Not GSM?

| GSM           | LoRa          |
| ------------- | ------------- |
| Needs network | Works offline |
| Requires SIM  | No SIM        |
| High power    | Low power     |

---

## 📷 Prototype

(Add your image in `/images`)

```
![Prototype](images/prototype.jpg)
```

---

## 🔧 Project Status

* Sensor Integration ✅
* Edge Logic ⚠️ (In Progress)
* LoRa Communication 🔄

---

## 🚀 Future Enhancements

* Encrypted LoRa communication
* Web dashboard
* Solar-powered system
* Personalized health profiles

---

## 👨‍💻 Team

* Seshasaai (Team Lead)
* Bala Manikanta
* Kamaleshwaran

---

## 📌 Conclusion

A practical, low-cost solution focusing on:

* Power efficiency
* Reliability
* Real-world deployment

---

## ⭐ Support

If you like this project, give it a ⭐ on GitHub!
