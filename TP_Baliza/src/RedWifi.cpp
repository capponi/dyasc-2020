#include "RedWifi.h"
#include <Arduino.h>
#include <WiFi.h>

RedWifi::RedWifi(const char* ssid, const char* password){
    _ssid = ssid;
    _password = password;
}

void RedWifi::conectar(){
    WiFi.begin(_ssid, _password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("WiFi connected.");
}

int RedWifi::chequearConexion(){
    return (WiFi.status() == WL_CONNECTED);
}