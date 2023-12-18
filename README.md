# ESP8266-MFRC522 NFC-POS 📱🔒

This project is a simple Mobile NFC-POS system using ESP8266-MFRC522 RFID hardware, implementing a closed system that pairs with a mobile device via WiFi for secure communication without external API interaction and using RFID hardware for payments.

#Disclaimer: Project was just a research project. Not meant for production

## `display.h` (OLED Display Control)

### Functionality:
- **`initOLED()`:** 🖥️ Initializes the OLED display for visual output.
- **`runBootAnimation()`:** 🌟 Runs a boot-up animation sequence.
- **`printString()`:** 🖨️ Displays a string on the OLED screen.

## `http.h` (HTTP Server Setup)

### Functionality:
- **`initServer()`:** 🌐 Initializes an HTTP server for card scanning and data transfer.

## `Mobile_NFC_POS.ino` (Main Code)

### Functionality:
- **`coreInit()`:** 🚀 Core initialization involving OLED setup and boot animation.
- **`scanCard()`:** 📟 Initiates the RFID card scanning process.
- **`handleRequests()`:** 🌐 Handles incoming HTTP requests.
- **`checkNetworkConnection()`:** 📡 Monitors and maintains network connection status.

## `rfid.h` (RFID Card Handling)

### Functionality:
- **`initRFID()`:** 📟 Initializes the RFID card reader.
- **`getUID()`:** 🆔 Retrieves the Unique Identifier (UID) from the scanned RFID card.

## `wifi.h` (WiFi Configuration)

### Functionality:
- **`initNetwork()`:** 📶 Initializes WiFi in access point (AP) mode for connecting to mobile devices.
