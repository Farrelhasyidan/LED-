#define BLYNK_PRINT Serial
#include <ESP8266Wifi.h>
#include <BlynkSimpleEsp8266.h)

 char auth[] = "C_N1ocO06shoiAdhLgwSjww-89r8gTk1";
 char ssid[] = "vivo 1814";
 char pass[] = "FARREL GANTENG";

void setup() {
 Serial.begin(9600);

 Blynk.begin(auth,ssid,pass);

}

void loop() {
  Blynk.run();

}
