#include <Servo.h>
//crea el objeto tipo servo
Servo miservo;
 int ldrValue =8;
const int LDRPin = A0;
const int threshold = 100;
int LEDPin=7;
 int angulo=0; //numero de grados del servo
void setup() {
   pinMode(LEDPin, OUTPUT);
   pinMode(LDRPin, INPUT);
   miservo.attach(ldrValue); 
}
 
void loop() {
   
   if (LDRPin<threshold) {
    int i;
   for(i=0;i<180;i++)
   {
     ldrValue.write(90);
delay(15);
   }
    delay(20);
   }
   else {
      digitalWrite(LEDPin,HIGH);
      delay(15);
       digitalWrite(LEDPin,LOW);
   delay(15);
   }
}

