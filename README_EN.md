# OV2710 MIPI CSI camera module — documentation & samples

**简体中文：** [`README.md`](README.md)

---

> This repository focuses on the **OV2710 camera module**, with an ESP-IDF sample. The demo captures MIPI CSI video on ESP32-P4 and previews on a **3.95″ 480×480 MIPI display** (reference setup; the repo name reflects the camera, not the panel).

## Product overview

| Item | Description |
|:--|:--|
| Product type | **MIPI CSI camera module** |
| Sensor | **OV2710** |
| Interface | **MIPI CSI** (SCCB/I2C for configuration) |
| Spec ID | **`camera-mipi-csi-ov2710`** is the common product designation in documentation |
| Output modes | Driver supports modes such as **1280×720@60**, **1920×1080@30** (see menuconfig / sensor settings; not a single fixed resolution) |

---

## Repository layout

### Top-level

| Path | Contents |
|:--|:--|
| `assets/` | Demo images / videos (when available) |
| `docs/` | Adapter board schematic |
| `examples/` | **Sample projects** |

### `examples/` layout

| Location | Description |
|:--|:--|
| `examples/` root | ESP32-P4: OV2710 MIPI CSI capture + 3.95″ 480×480 MIPI preview |

### Sample project paths

| Description | Path |
|:--|:--|
| OV2710 MIPI CSI preview demo | `examples/esp32p4c6-395mipi-480x480-camera_ov2710-demo/` |

---

## Resources

| Resource | Link |
| ---- | ---- |
| Shared OV2710 / SC2336 camera adapter schematic (V1.1) | [`docs/SCH_OV2710&SC2336摄像头转接板V1.1_2026-10-13.pdf`](./docs/SCH_OV2710%26SC2336%E6%91%84%E5%83%8F%E5%A4%B4%E8%BD%AC%E6%8E%A5%E6%9D%BFV1.1_2026-10-13.pdf) |
