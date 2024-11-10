#include <M5StickCPlus.h>
#include "config.h"
#include "NetworkScanner.h"
#include "DisplayManager.h"

NetworkScanner scanner;
DisplayManager display;

void setup() {
  Serial.begin(115200);
    WiFi.mode(WiFi_STA);
    WiFi.disconnect();
    delay(100);
}

void  loop() {
    scanner.scanNetworks(); 
    
    int networkCount = WiFi.scanNetworks();
    display.showNetworkCount(networkCount);

    for (int i = 0; i < networkCount; i++) {
        String ssid = WiFi.SSID(i);
        int rssi = WiFi.RSSI(i);
        bool isDuplicate = scanner.isDuplicateFound();
        display.showNetwork(ssid, rssi, isDuplicate);
        delay(100);

    }    

    display.showAlert(scanner.isDuplicateFound());
    delay(SCAN_INTERVAL);

}