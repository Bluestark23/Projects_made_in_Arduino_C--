#include <Servo.h>
//crea el objeo tipo servo
Servo myservo;
int pinldr=A0;//establece el pin de la LDR
int pinled1=7; //establece pin led1 7
int servopin=8;//pin conexion servo



int ldrValue; ///variable para almacena el valor del servo
int angulo=0;//numero de grados del servo
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinled1,OUTPUT);
pinMode(pinldr,INPUT);

myservo.attach(servopin);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrstatus=analogRead(pinldr);//lee la entra analogica-pin ldr
 angulo=map(ldrstatus,0,1023,0,90);
 
 
 if(analogRead(pinldr)>20){
 myservo.write(angulo);
 delay(15); 
}else{
  if(analogRead(pinldr)<20){
    digitalWrite(pinled1,HIGH);
    delay(15);
        digitalWrite(pinled1,LOW);
    delay(1500);

   }
}

}

