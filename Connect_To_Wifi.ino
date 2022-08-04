#include <ESP8266WiFi.h>
// static const uint8_t D1   = 5;

char* ssid = "";       //Your SSID
char* password = ""; //Your Wifi Password

void setup() {
  WiFi.begin(ssid,password);
  Serial.begin(115200);
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(500);
    }
    Serial.println("");
    Serial.print("IP Adddress: ");
    Serial.print(WiFi.localIP());
}

void loop() {

}
