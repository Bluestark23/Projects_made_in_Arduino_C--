//documentarr la practica.

/////////////////////////77que use blutup. poner un contraseña para el modulo bluto o default 
///sensor ultraspnico

///motor a
#include <SoftwareSerial.h>

int ENA=10;
int IN1=6;
int IN2=7;


///motor b
int ENB=5;
int IN3=8;
int IN4=9;


//motor c
///int EN5=1;
//int IN6=2;
///int IN7=3;  bluto abajo
SoftwareSerial BT1(10, 11); // RX | TX

//sensor
const int Trigger=2;//pin digital 2 para el trigger del sensor
const int Echo=3; //pin digital 3 para el echo del  sensor

void setup() {
  // put your setup code here, to run once:
///DECLARACION DE LOS PINES COMOO SALIDA

pinMode(ENA,OUTPUT);
pinMode(ENB,OUTPUT);

pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);

//bluuto
pinMode(8,OUTPUT);//AL PONER EN HIGH FORZAREMOS EL MODO AT
pinMode(9,OUTPUT);//Cuando se alimente de aqui
digitalWrite(9,HIGH);
delay(500);//espera antes de encender el modulo
Serial.begin(9600);
Serial.println("Levantando el modulo HC-06");
digitalWrite(8,HIGH);//ENCIENDE EL MODULO
Serial.println("Esperando comandos at:");
BT1.begin(57600);


//sensror

Serial.begin(9600);//inicializamos la comunicacion
pinMode(Trigger,OUTPUT);//PIN como salida
pinMode(Echo,INPUT);//Pin como entrada
digitalWrite(Trigger,LOW);//Inicializamos el pin con 0
}


void loop() {
  // put your main code here, to run repeatedly:
//bluto
if(BT1.available())

  Serial.write(BT1.read());
  
  if(Serial.available())

  BT1.write(Serial.read());
  

//sensor
long t;//tiempo que demora en llegar el eco
long d;//distancia en centimetros
digitalWrite(Trigger,HIGH);
delayMicroseconds(10); ///enviamos un pulso de 10us(microsegundos)
digitalWrite(Trigger,LOW);

t=pulseIn(Echo,HIGH); // respesta del sensor por el Echo, para medir el pulso usamos esta funcion
//con la de arriba obtenemos  el ancho del pulso


//usamos esta formula 
//velocidad=distancia recorrida/tiempo
//ejemplo 340/s*1s/1000000us*100cm/1m=2d/t 
///d(cm)=t(us)/59
d = t/59;             //escalamos el tiempo a una distancia en cm
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(100);          //Hacemos una pausa de 100msd 
  

//movimientos
Adelante();
delay(5000);
Atras();
delay(2000);
Derecha();
delay(2000);
Izquierda();
delay(2000);
Para();
delay(4000);
}

void Adelante(){
//direcccion motor a

digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
analogWrite(ENA,255);////velocidad del motor a

//direccion motor b

digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
analogWrite(ENB,255); ///velocidad motor b
}


void Atras(){
//direccion motor a

digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
analogWrite(ENA,128);///velocidad motor a

//digital motor b
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
analogWrite(ENB,128);//VELOCIDAD MOTOR 8

}

void Derecha(){
//direccion motor a
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
analogWrite(ENA,200);//VELOCIDAD MOTOR A

//DIRECCION MOTOR B
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
analogWrite(ENB,100);//VELOCIDAD MOTORA
}




void Izquierda(){
///direccion motor a
digitalWrite(IN1,LOW);
digitalWrite (IN2, HIGH);
  analogWrite (ENA, 50); //Velocidad motor A
  //Direccion motor B
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  analogWrite (ENB, 150); //Velocidad motor A
  }

void Para ()
{
  //Direccion motor A
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  analogWrite (ENA, 0); //Velocidad motor A
  //Direccion motor B
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
  analogWrite (ENB, 0); //Velocidad motor A
      


 

}


////}

  
/////}

