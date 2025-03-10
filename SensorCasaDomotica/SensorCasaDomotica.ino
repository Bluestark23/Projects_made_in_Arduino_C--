#include <infrarrojo.h>

infrarrojo estado(13);
int valor;
int led=12;
int led_estado;


void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);//velocidad
}

void loop() {
  // put your main code here, to run repeatedly:
 
led_estado = estado.lectura(valor);
if(led_estado==1){
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
delay(100);
}

