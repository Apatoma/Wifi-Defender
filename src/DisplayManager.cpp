// NetworkScanner.cpp

#include "NetworkScanner.h"
#include <Arduino.h>

NetworkScanner::NetworkScanner() : duplicateFound(false) {}

void NetworkScanner::scanNetworks() {
    int networkCount = WiFi.scanNetworks();
    duplicateFound = false;
    
    Serial.printf("Redes encontradas: %d\n", networkCount);

    for (int i = 0; i < networkCount; i++) {
        String ssid = WiFi.SSID
    }
}