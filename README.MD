#WiFiDefender

WifiDefender is a project for the ESP32 M5 Stick C Plus that scans nearby WiFi networks and alerts potential "evil twin" attacks by detecting duplicate networks.

## Project Structure

- 'src/': Source code
- 'include/': Global configuration files
- 'lib/': Additional libraries

## Configuration

1. **Install Required Libraries in Arduino IDE:**
- Open **Tools > Manage Libraries**.
- Search for and install **M5StickCPlus by M5Stack**.
- Make sure to have **ESP32 by Espressif Systems** installed in **Tools > Board Manager**.

2. **Scan Interval Configuration**:
- Open 'include/config.h' to set the scan interval time in milliseconds.
- Example: '#define SCAN_INTERVAL 5000' for a 5 second scan interval.

3. **Upload the Code**:
- Upload the code to the ESP32 M5 Stick C Plus.
- Monitor network scan results on the M5Stick's screen or via the serial monitor.

## PlatformIO Setup (Optional)

if you're using PlatformIO, use the following config in your 'platformio.ini' file:

''ini
[env:mstick-c-plus]
platform = expressif32
board = m5stick-c
framework = arduino
monitor_speed = 115200
lib_deps = 
    m5stack/M5StickCPlus
    
