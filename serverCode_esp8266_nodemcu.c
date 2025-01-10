#include <ESP8266WiFi.h>  


const char* ssid = "YourDaddy";  
const char* password = "yourdaddy";       

// Define custom IP configuration
IPAddress local_IP(192.168.10.1);   
IPAddress gateway(192.168.10.1);    
IPAddress subnet(255.255.255.0);    

void setup() {
  Serial.begin(115200);
  Serial.println();

  
  WiFi.softAP(ssid, password);

  
  if (!WiFi.softAPConfig(local_IP, gateway, subnet)) {
    Serial.println("Failed to configure softAP!");
    return;
  }

  Serial.println("Access Point Started!");
  Serial.print("Access Point IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  
  Serial.println("Access Point Started!");
  Serial.print("Access Point IP: ");
  Serial.println(WiFi.softAPIP());
  delay(10000)
}
