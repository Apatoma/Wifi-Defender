// NetworkScanner.h

#ifndef NETWORK_SCANNER_H
#define NETWORK_SCANNER_H

#include <WiFi.h>

class NetworkScanner {
    public:
        NetworkScanner();
        void scanNetworks();
        bool isDuplicateFound();

        private:
        String ssidList[50];
        bool duplicateFound;
};

#endif