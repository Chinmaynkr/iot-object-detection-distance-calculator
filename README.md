# IoT Object Detection and Distance Calculator

This project implements an IoT-based system for object detection and live distance calculation using ESP8266, an ultrasonic sensor, buzzer, OLED display, and LED indicator. The system detects objects in its vicinity using the ultrasonic sensor, processes the data with ESP8266, and calculates the real-time distance to the detected object. The calculated distance is then displayed on an OLED display for convenient viewing.

## Features:

- **Object Detection:** Utilizes an ultrasonic sensor to detect objects in the surroundings.
- **Real-time Distance Calculation:** ESP8266 processes sensor data to calculate the distance to the detected object.
- **OLED Display:** Displays the calculated distance on a compact OLED display for easy monitoring.
- **Audible Alert (Buzzer):** Activates a buzzer to provide an audible alert when an object is detected within a specific range.
- **Visual Indicator (LED):** Lights up an LED to visually signal the presence of an object in the vicinity.

## Components Used:

- ESP8266
- Ultrasonic Sensor
- Buzzer
- OLED Display
- LED
- Breadboard
- Jumper wires

## Installation and Setup:

1. **Software Installation:** Upload the Arduino code (`Ultrasonic_Sensor.ino`) to the ESP8266 using the Arduino IDE.
2. **Run:** Power on the system and observe the OLED display for real-time object distance updates.

## Usage:

- Ensure the system is powered and the components are correctly connected.
- Monitor the OLED display for distance updates.
- Listen for the audible alert from the buzzer and observe the LED indicator based on object proximity.

## Contributing:

Contributions are welcome! For major changes, please open an issue first to discuss potential updates or improvements.

## License:

This project is licensed under the [MIT License](LICENSE).
