# ESP32 Discrete Transistor Stepper Driver (28BYJ-48)

<p align="center">
  <img src="circuit.png" width="350">
</p>


## Project Description

This project controls a 28BYJ-48 unipolar stepper motor using an ESP32 and a discrete transistor driver circuit. Instead of an IC like ULN2003, it uses 2N2222 NPN transistors and 1N4005 flyback diodes to demonstrate low-level motor control, current switching, and inductive load protection.

---

## Key Features
- Discrete transistor-based motor driver
- Flyback diode protection for inductive loads
- Clockwise and counter-clockwise control
- External 5V motor power support

## Hardware Used
- ESP32
- 28BYJ-48 stepper motor (5V)
- 4 × 2N2222 NPN transistors
- 4 × 1N4005 diodes
- 4 × 220Ω resistors
- External 5V power supply

## Notes
- Do not power the motor from the ESP32 5V pin
- Ensure common ground between ESP32 and motor supply

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Author

**Jerit Jose**  
Embedded Systems & IoT Developer
