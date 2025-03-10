//#include <Servo.h>
//crea el objeto tipo servo
//Servo miservo;

//Interruptor
const int botonONOFF = 2; //Pin del interruptor
int estadoBoton = 0;     //Estado inicial del interruptor

//Motor
//int angulo_inicial = 0; //Angulo inicial del servo motor
const int motorPin1 = 3;     // Pin IN1 del controlador de motor DC

//Sensor infrarojo
const int sensor_infra = A0;//Pin analógico
int estadoSensor = 0;

//Bomba de agua
const int bomba_agua = A1;
int estadoBomba = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(botonONOFF, INPUT_PULLUP);  // Configura el pin 2 como entrada con pull-up interno,evitar lecturas erráticas cuando se conecta un interruptor a un pin de entrada.

  //miservo.attach(9) //El 9 es el pin asociado 
  pinMode(motorPin1, OUTPUT);  

  pinMode(bomba_agua,OUTPUT)

  Serial.begin(9600);       // Inicializa la comunicación serial

}

void loop() {
  estadoBoton = digitalRead(botonONOFF);//devuelve HIGH(1) o LOW(0)

  switch (estadoBoton){
    case HIGH:
        digitalWrite(motorPin1, HIGH);
        estadoSensor = analogRead(sensor_infra);// Leer el valor del sensor  voltaje =(valorleido/1023)*5
        if (estadoSensor != 0){
          digitalWrite(motorPin1,LOW);

          digitalWrite(bomba_agua,HIGH);
          delay(60000) //Espera 60 segundos
          digitalWirte(bomba_agua,LOW);
          
        }
        break;
    case LOW:
        digitalWrite(motorPin1, LOW);
        delay(100);// 100 segundo / 1000 = 0.1 segundos
        break;

  }
 


}
