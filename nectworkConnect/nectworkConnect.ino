#include <ESP8266WiFi.h>

const char* ssid = "DrZin";
const char* pass = "0985626152a";
String hostname = "Esp1";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  WiFi.hostname(hostname);
  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("");
  Serial.println("Wi-Fi connected"); //แสดงว่าเชื่อมต่อ Wi-Fi ได้แล้ว
  Serial.print("IP Address : ");
  Serial.println(WiFi.localIP()); //แสดง IP ของบอร์ดที่ได้รับแจกจาก AP
}



void loop() {
  // put your main code here, to run repeatedly:
  

}
