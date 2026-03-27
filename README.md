# 💊 Medicine ATM

> An intelligent, public-facing pharmaceutical kiosk delivering 24/7 OTC medicine access with on-device diagnostic guidance — no internet required.

![Platform](https://img.shields.io/badge/Platform-NXP%20SLN--TLHMI--IOT-blue)
![MCU](https://img.shields.io/badge/MCU-i.MX%20RT117H-orange)
![Framework](https://img.shields.io/badge/UI-LVGL%20v8.x-green)
![ML](https://img.shields.io/badge/ML-Decision%20Tree%20Classifier-yellow)
![License](https://img.shields.io/badge/License-Research%20Prototype-lightgrey)

---

## 📌 Overview

The **Medicine ATM** is a self-serve, embedded healthcare kiosk designed to bridge the critical gap in pharmaceutical access across rural and semi-urban India. It functions as a **virtual pharmacist** — guiding users through a structured, symptom-based diagnostic flow and recommending appropriate over-the-counter (OTC) medication categories, all without requiring cloud connectivity.

Built on the **NXP SLN-TLHMI-IOT** development platform, the system combines:
- A high-resolution, 60 FPS capacitive touchscreen HMI
- An offline diagnostic chatbot powered by an on-device Decision Tree Classifier
- A full simulated transaction and dispensing pipeline

---

## 🚨 The Problem

| Metric | Fact |
|--------|------|
| Indian population (2023) | 1.4 billion |
| Healthcare infrastructure in urban areas | ~70% |
| Population in rural areas | ~65% |
| Generic drug export share (global) | >20% |

Despite India being the world's largest generic drug exporter, rural and semi-urban communities lack access to even basic retail pharmacies — and those that exist operate on restricted hours. Existing automated dispensers are designed for **chronic, pre-prescribed patients** in residential settings and are wholly unsuitable for anonymous public transactional use.

---

## ✅ Key Features

- **🧠 On-Device Diagnostic Chatbot** — A Decision Tree Classifier trained on WHO Essential Medicines List, National Formulary of India, and community pharmacy guidelines. No cloud dependency.
- **⚡ Sub-100 ms Inference** — Symptom-to-medication-category mapping completes in under 87 ms on the ARM Cortex-M7 at 1 GHz.
- **🖥️ 60 FPS Touchscreen UI** — Rendered via LVGL v8.x with VGLite 2D GPU acceleration on a 720×1280 MIPI-DSI capacitive display.
- **🛒 Full Transaction Pipeline** — Browse → Chatbot → Add to Cart → Pay → Dispense, all in a seamless UX flow.
- **📡 Offline-First Architecture** — All diagnostic intelligence runs bare-metal on the MCU. Wi-Fi used only for optional payment gateway integration.
- **♿ Accessible Design** — Large touch-friendly buttons, ≤5 options per screen, designed for users with limited health literacy.

---

## 🏗️ System Architecture

```
┌──────────────────────────────────────────────────────┐
│               NXP SLN-TLHMI-IOT Board                │
│                                                      │
│  ┌─────────────────────┐  ┌────────────────────────┐ │
│  │   ARM Cortex-M7     │  │   ARM Cortex-M4        │ │
│  │   @ 1 GHz           │  │   @ 400 MHz            │ │
│  │                     │  │                        │ │
│  │  • LVGL UI (60 FPS) │  │  • Touchscreen (I²C)  │ │
│  │  • Decision Tree ML │  │  • Sensor acquisition  │ │
│  │  • App logic & cart │  │  • Interrupt servicing │ │
│  └────────┬────────────┘  └────────────┬───────────┘ │
│           │  Shared Memory + Semaphores │             │
│           └────────────────────────────┘             │
│                                                      │
│  ┌──────────────┐  ┌────────────┐  ┌──────────────┐  │
│  │ 720×1280     │  │  VGLite    │  │ IW416 Wi-Fi  │  │
│  │ MIPI-DSI     │  │  2D GPU    │  │ + Bluetooth  │  │
│  │ Touchscreen  │  │            │  │ (BT 5.0)     │  │
│  └──────────────┘  └────────────┘  └──────────────┘  │
└──────────────────────────────────────────────────────┘
```

---

## 🌿 Diagnostic Chatbot

The chatbot is the core intellectual contribution of this system. It replaces the licensed pharmacist's role of **decoding symptoms and recommending a suitable treatment category**.

### Algorithm: Decision Tree Classifier

Selected for three key reasons:
1. **Low compute footprint** — No floating-point tensor libraries needed; compiles to a nested C `if-else` block ("model baking").
2. **Interpretability** — Every recommendation is fully auditable for regulatory review.
3. **Training data fit** — Modest, well-structured OTC symptom-to-category dataset.

### OTC Categories Covered

| Category | Symptoms Addressed |
|---|---|
| **Respiratory** | Dry cough, productive cough, nasal congestion, allergic rhinitis, sore throat |
| **Analgesic / Antipyretic** | Headache, fever, body ache, localised muscle/joint pain |
| **Gastrointestinal** | Acidity, heartburn, diarrhoea, dehydration |
| **Dermatological** | Fungal rash, minor cuts/abrasions, generalised itching |
| **Multi-Symptom** | Concurrent fever + body ache + cough + congestion (cold & flu) |

### Training Details

- **Library:** scikit-learn (Python)
- **Criterion:** Gini impurity
- **Input:** Binary feature vector (13 symptoms: dry cough, cold cough, nasal congestion, sore throat, fever, headache, body ache, nausea, heartburn, diarrhoea, localised pain, rash with itch, minor wound)
- **Output:** Integer class index → OTC medication category
- **References:** WHO EML 23rd Ed., National Formulary of India (2021)
- **Deployment:** Serialised as a C `if-else` function compiled directly into firmware

---

## 📱 UI Screens

| Screen | Description |
|--------|-------------|
| **Home** | Card-based product grid with images, names, pricing |
| **Chatbot** | Sequential symptom selection menus with large touch buttons |
| **Product Detail** | Name, category, usage instructions, price, Add to Cart |
| **Shopping Cart** | Dynamic item list, quantities, running total |
| **Payment** | Total due, confirmation (NFC/QR-ready in future) |
| **Dispensing** | Animated sequence confirming physical product release |

All screen transitions use LVGL fade/slide animations at 400–500 ms duration, rendering artifact-free at 60 FPS.

---

## 📊 Performance Results

| Metric | Result |
|--------|--------|
| UI Rendering | Constant **60 FPS** across all screen types |
| Frame drops | **0** during validation |
| Inference latency (max) | **87 ms** (target: <100 ms ✅) |
| Validation set | 21 symptom combinations, all OTC categories |
| Accuracy | **100%** correct categorisation on validation set |
| Post-payment animation | Completes within **3 seconds** |
| Touch responsiveness | Subjectively rated as **immediate** by all evaluators |

---

## 🛠️ Tech Stack

| Layer | Technology |
|-------|------------|
| Hardware Platform | NXP SLN-TLHMI-IOT |
| Primary Core | ARM Cortex-M7 @ 1 GHz |
| Secondary Core | ARM Cortex-M4 @ 400 MHz |
| Display | 720×1280 MIPI-DSI Capacitive Touchscreen |
| GPU | NXP VGLite 2D Hardware Accelerator |
| Graphics Framework | LVGL v8.x (C99, MIT License) |
| SDK | NXP MCUXpresso SDK |
| ML Training | Python / scikit-learn |
| ML Inference | Bare-metal C (model baked into firmware) |
| Connectivity | IW416 Wi-Fi (802.11a/b/g/n) + Bluetooth 5.0 |

---

## ⚠️ Platform Constraints (Prototype Stage)

| Constraint | Notes |
|------------|-------|
| **Unit Cost** | SLN-TLHMI-IOT is a dev kit; production would use custom i.MX RT117H PCB |
| **Power** | Higher draw than simpler MCUs; UPS/battery backup needed off-grid |
| **Form Factor** | Board optimised for prototyping; production requires custom enclosure PCB |

---

## 🔮 Roadmap

### v2.0 — Physical Payment Integration
- [ ] UPI QR code scanner
- [ ] NFC reader (ISO/IEC 14443 — RuPay, Visa/Mastercard contactless)
- [ ] Cloud payment gateway via Wi-Fi
- [ ] Remote stock monitoring & replenishment alerts

### v2.1 — Voice Interaction
- [ ] PDM microphone array with acoustic beamforming (AFE subsystem)
- [ ] On-device ASR (keyword spotting / sequence-to-sequence)
- [ ] "Talk and Listen" mode — speak symptoms instead of tapping
- [ ] Critical for users with low literacy or motor disabilities

### v2.2 — Visual Verification
- [ ] On-device face-based demographic estimation (age/gender) for dosage adjustment
- [ ] Age-gate for restricted OTC products
- [ ] Full compliance with India's Digital Personal Data Protection Act (2023) — no biometric data transmitted externally

### v2.3 — Public Health Analytics
- [ ] Anonymised symptom/purchase telemetry from ATM network
- [ ] Early outbreak detection via geographic symptom clustering
- [ ] Encrypted HTTPS + differential privacy for data transmission
- [ ] Aligned with WHO GOARN objectives

---

## 📁 Repository Structure

```
medicine-atm/
├── firmware/
│   ├── core_m7/              # Cortex-M7: LVGL UI + ML inference + app logic
│   │   ├── gui/              # Screen definitions and LVGL widget code
│   │   ├── chatbot/          # Decision tree classifier (C if-else)
│   │   └── transaction/      # Cart, payment, dispensing state machine
│   └── core_m4/              # Cortex-M4: Touch controller + I/O drivers
├── ml/
│   ├── train.py              # scikit-learn Decision Tree training script
│   ├── dataset.csv           # Symptom-to-category training data
│   ├── export_to_c.py        # Model serialisation to C conditional block
│   └── validate.py           # Validation set evaluation
├── assets/
│   ├── images/               # Product images (compressed for flash)
│   └── fonts/                # LVGL-compatible font binaries
├── docs/
│   └── Medicine_ATM_Paper.pdf
└── README.md
```

---

## 📖 Citation

If you use this work in your research, please cite:

```bibtex
@article{medicineATM2024,
  title   = {Medicine ATM — A Human Machine Interface},
  journal = {[Not Yet confirmed]},
  year    = {2026},
  note    = {NXP SLN-TLHMI-IOT, Decision Tree Classifier,
             LVGL, Edge AI, OTC Pharmaceutical Kiosk}
}
```

---

## 📚 References

- WHO Model List of Essential Medicines, 23rd Ed. (2023)
- National Formulary of India, 5th Ed. (2021)
- NXP Semiconductors — SLN-TLHMI-IOT Reference Manual (2023)
- Pedregosa et al. — Scikit-learn: Machine Learning in Python, JMLR (2011)
- Card, Moran & Newell — The Psychology of Human-Computer Interaction (1983)
- Grand View Research — Smart Pill Dispenser Market Report (2023)

---

## 🤝 Contributing

Contributions are welcome! Please open an issue to discuss proposed changes before submitting a pull request. Areas actively seeking contributions:

- ML model improvements (larger dataset, multi-label classification)
- LVGL UI enhancements and additional screen flows
- Payment module drivers (NFC/QR)
- Voice ASR integration

---

## 📄 Declaration

All authors declare no conflicts of interest. This is a research prototype. **This system is not a substitute for professional medical advice.** Users presenting serious or ambiguous symptoms are directed to consult a licensed pharmacist or physician.

---

