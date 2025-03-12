#include <Servo.h>
// crea el objeto tipo servo
Servo motoreductor;

// Interruptor
const int botonONOFF = 2; // Pin del interruptor
int estadoBoton = 0;       // Estado inicial del interruptor

// Motor
const int motorPin1 = 3;   // Pin IN1 del controlador de motoreductor

// Sensor infrarrojo 1
const int sensor_infra_1 = A0; // Pin analógico
int estadoSensor_1;

// Sensor infrarrojo 2
const int sensor_infra_2 = A1;
int estadoSensor_2;

// Bomba de agua
const int bomba_agua = A3;
int estadoBomba = 0; 

//Sensor ultrasonico
const int echo=A1;
const int trigger=A0;
const int distancia_al_fondo = 11;

//Bucer pasivo

void setup() {
  // Configura los pines
  pinMode(botonONOFF, INPUT_PULLUP);  // Configura el pin 2 como entrada con pull-up interno
  pinMode(motorPin1, OUTPUT);         // Configura el pin para el motoreductor como salida
  pinMode(bomba_agua, OUTPUT);        // Configura el pin para la bomba como salida

  //Configuracion del sensor ultrasonico
  pinMode(echo,INPUT);  //Entrada 
  pinMode(trigger,OUTPUT); //Salida 

  Serial.begin(9600);                 // Inicializa la comunicación serial
}

void loop() {

  medicion();

  estadoBoton = digitalRead(botonONOFF); // Lee el estado del interruptor

  switch (estadoBoton) {
    case HIGH:  // Si el botón está activado (HIGH)
      estadoSensor_1 = analogRead(sensor_infra_1); // Lee el valor del sensor 1
      estadoSensor_2 = analogRead(sensor_infra_2); // Lee el valor del sensor 2
      


      
      // Caso 1: Si el sensor 1 detecta algo y el sensor 2 no detecta
      if (estadoSensor_1 > 0 && estadoSensor_2 == 0) {
        digitalWrite(motorPin1, LOW);        // Detener el motor
        if (distancia < distancia_al_fondo ){ //Distancia maxima o fondo del vote
            digitalWrite(bomba_agua, HIGH);      // Activar la bomba de agua
            delay(10000);                        // Esperar 10 segundos
            digitalWrite(bomba_agua, LOW);       // Apagar la bomba
            delay(100);                          // Espera breve antes de continuar
        }

        digitalWrite(motorPin1, HIGH);      // Reactivar el motor
      }
      // Caso 2: Si el sensor 1 no detecta nada y el sensor 2 detecta algo
      else if (estadoSensor_1 == 0 && estadoSensor_2 > 0) {
        digitalWrite(motorPin1, LOW);  // Detener el motor (no se hace nada más)
      }
      // Caso 3: Si ambos sensores detectan algo
      else if (estadoSensor_1 > 0 && estadoSensor_2 > 0) {
        digitalWrite(motorPin1, LOW);  // Detener el motor

        // Esperar hasta que el sensor 2 deje de detectar
        while (estadoSensor_2 > 0) {
          estadoSensor_2 = analogRead(sensor_infra_2); // Lee continuamente el sensor 2
          delay(100); // Retraso breve para evitar lectura excesiva
        }
        // Cuando el sensor 2 ya no detecta, puedes proceder con el código
        digitalWrite(motorPin1, HIGH); // Reactivar el motor
      }
      break;

    case LOW:  // Si el botón está apagado (LOW)
      digitalWrite(motorPin1, LOW);  // Detener el motor
      delay(100);                    // Retraso breve
      break;
  }
}

void medicion(){
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  tiempo = pulseIn(echo,HIGH); //us = microsegundos
  distancia = float ( tiempo ¨0.0343)/2;//343 velocidad del sonido pero en cm
  delay(10);

}