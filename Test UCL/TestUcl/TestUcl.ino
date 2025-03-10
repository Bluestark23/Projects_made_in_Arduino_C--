#include <SPI.h>
#include <Ethernet.h>
#include "Mudbus.h"

Mudbus Mb;

void setup() {

  Serial.begin(9600);
  
  uint8_t mac[]       = {0xAC, 0xE2, 0xD3, 0x4B, 0xA0, 0x6A};
  uint8_t ip[]        = {192, 168, 137, 27};
  uint8_t gateway[]   = {192, 168, 137,  1};
  //uint8_t ip[]        = {169, 254,  59, 107};
  //uint8_t gateway[]   = {169, 254,  59, 142};
  uint8_t subnet[]    = {255, 255, 255,  0};
  Ethernet.init(10);  // Most Arduino shields
  Ethernet.begin(mac, ip, gateway, subnet);
  Serial.println("Iniciando...");

  delay(5000);

  Mb.R[0] = 0;
  Mb.R[1] = 0;
  Mb.R[2] = 0;
  Mb.R[3] = 0;
  Mb.R[4] = 0;
  Mb.R[5] = 0;
  Mb.R[6] = 0;
  Mb.R[7] = 0;
}

void loop() {
  Mb.Run();

  int MbR0 = analogRead(0);
  int MbR1 = analogRead(1);
  int MbR2 = analogRead(2);
  int MbR3 = analogRead(3);

  Mb.R[0] = MbR0;
  Mb.R[1] = MbR1;
  Mb.R[2] = MbR2;
  Mb.R[3] = MbR2;
  Serial.println("======");
  Serial.println(MbR0);
  Serial.println(MbR1);
  Serial.println(MbR2);
  Serial.println(MbR3);
  delay(50000);

}