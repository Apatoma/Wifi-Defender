// NetworkScanner.cpp

#include "NetworkScanner.h"
#include <Arduino.h>

NetworkScanner::NetworkScanner() : duplicateFound(false) {}

void NetworkScanner::scanNetworks() {
    int networkCount = WiFi.scanNetworks();
    duplicateFound = false;

    Serial.printf("Redes encontradas: %d\n", networkCount);

    for (int i = 0; i < networkCount; i++) {
        String ssid = WiFi.SSID(i);
        bool isDuplicate = false;

        for (int j = 0; j < i; j++) {
            if (ssid == ssidList[j]) {
                isDuplicate = true;
                duplicateFound = true;
                break;
            }

        }

    ssidList[i] = ssid;
    Serial.printf("SSID: %s, Signal: %d dBm\n", ssid.c_str(), WiFi.RSSI(i));

    }
}

bool NetworkScanner::isDuplicateFound() {
    return duplicateFound;
}