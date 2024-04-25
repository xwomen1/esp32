#include <stdio.h>
#include "esp_system.h"
#include<esp_mac.h>

void app_main() {
    uint8_t mac_addr[6]; // Mảng để lưu địa chỉ MAC, mỗi phần tử là một byte

    // Lấy địa chỉ MAC của ESP32
    esp_read_mac(mac_addr, ESP_MAC_WIFI_STA); // Đọc địa chỉ MAC của giao diện WiFi STA

    // In địa chỉ MAC ra console
    printf("Địa chỉ MAC của ESP32 là: %02X:%02X:%02X:%02X:%02X:%02X\n",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
}
