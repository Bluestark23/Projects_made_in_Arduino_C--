#include <Servo.h>
//crea el objeto tipo servo
Servo miservo;

//constantes para la conexion de pines
const int ldrpin=A0; //pin conexion ldr
const int servopin=8; //pin conexion servo

int ldrValue; //variable para almacenar el valor del servo
int angulo=0; //numero de grados del servo
int valor_limite=490;
int luz=0;

void setup() {

  Serial.begin(9600); ///puerto serie
  miservo.attach(servopin); ///se vincula el servo al pin digital
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

ldrValue=analogRead(ldrpin); ///lectura ldr 0-1023,creo que grados?
luz=(5.0*ldrValue*100.0)/1024.0;

if (luz<=valor_limite)
 {
angulo=map(ldrValue,0,1023,0,180);///intensidad de luz??
Serial.println(luz);
miservo.write(luz);
delay(15);
 }
//*angulo=map(ldrValue,0,1023,0,150);///convesion de laa ldr  en grados
///quiero pensar que ubicacion original 0 (inicia),1023(termina) angulo donde termina (0(inicia)),(180(termina))
 // Serial.println(angulo);//imprime el valor del angulo
//miservo.write(angulo);
///delay(45);

}
