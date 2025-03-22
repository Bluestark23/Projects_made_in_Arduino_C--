/* CÓDIGO DE EJEMPLO DE BANDA CON BOMBA DE AGUA DESARROLLADO POR ESTRELLA AZUL IT EN ASOCIACIÓN CON RÍO ON LINE INNOVACIÓN TECNOLÓGICA */


// Definir los pines de control del L9110S, motoreductor M1
const int M1_INA1 = 3;  // Pin de control M1_INA1 (pin PWM)
const int M1_INA2 = 4;  // Pin de control M1_INA2
int vel = 150; // Velocidad del motor (0 a 255 para PWM)

// Infrarrojo S1
const int S1 = 8;

// Infrarrojo S2
const int S2 = 9;

//Sensor infrarojo
const int echo=A1;
const int trigger=A0;
float distancia;
long tiempo;


//Tamaño de la botella
float botella = 15.81;




//Bomba de agua
const int M2_INA1 = 5;  // Pin de control M2_INA1 (pin PWM)
const int M2_INA2 = 6;  // Pin de control M2_INA2
bool nivelAguaOk;  // Variable global para almacenar el estado del nivel de agua
bool nivelactual;
int bomba_high = 5000;//Espera 5 segundos
int bomba_low =5000;//Espera 5 segundos
//buzzer
int buzzerPin = 10;  // Pin al que está conectado el buzzer




unsigned long inicio, fin, transcurrido;
float conversion;
bool estado_anterior = true;


void setup() {
  // Iniciar comunicación serie
  Serial.begin(9600);
  
  // Configurar los pines de control como salidas
  pinMode(M1_INA1, OUTPUT);
  pinMode(M1_INA2, OUTPUT);

  //Sensores infrarojos
  pinMode(S1, INPUT);  // Definir pin S1 como entrada
  pinMode(S2, INPUT);  // Definir pin S2 como entrada

  //Sensor ultrasonico
  pinMode(echo,INPUT); 
  pinMode(trigger,OUTPUT);


  //buzzer
  pinMode(buzzerPin, OUTPUT);  // Definir el pin como salida

  //bomba
  pinMode(M2_INA1, OUTPUT);
  pinMode(M2_INA2, OUTPUT);


}

void loop() {

  nivel_agua();
  indicador_nivel();

  Serial.print("Distancia: ");
  Serial.print(distancia);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(1000);
  int estadoSensor_1;
  int estadoSensor_2;

  // Leer el valor del sensor infrarrojo (ajustar según tipo de sensor)
  estadoSensor_1 = digitalRead(S1); // Usamos digitalRead() si el sensor es digital
  //Serial.print("estadoSensor_1: ");
  //Serial.println(estadoSensor_1);
  //delay(1000);

  estadoSensor_2 = digitalRead(S2); // Usamos digitalRead() si el sensor es digital
  //Serial.print("estadoSensor_2: ");
  //Serial.println(estadoSensor_2);
  //delay(1000);
  switch (nivelAguaOk) {
        case true:

          // Si ambos sensores no detectan nada, arrancamos el motor
          if (estadoSensor_1 == HIGH && estadoSensor_2 == HIGH ) { // No detecta nada en S1
            start();
            break;

          }  
          // Si cualquiera de los sensores detecta algo, detenemos el motor
          if (estadoSensor_2 == LOW) {
                      //stop();
                      _start_stop();
                      break;

          }
          if (estadoSensor_1 == LOW && nivelactual == true){
                          Serial.println("Bomba inicia");
                          stop();
                          estatus();
                             
                          start();

                          break;


                        }

          
        case false:
          _start_stop();
          break;

          

        default:
              Serial.println("Valor desconocido.");
          break;
  }
}

void start() {
  // Girar el motor hacia adelante con velocidad PWM
  Serial.println("Start");
  //delay(1000);
  inicio=millis();

  analogWrite(M1_INA1, vel);  // Motor hacia adelante con velocidad (ajustando el valor PWM)
  digitalWrite(M1_INA2, 0); // Motor hacia adelante
}

void stop() {
  // Detener el motor (poner PWM en 0)
  Serial.println("Stop");

  //delay(1000);
  fin = millis();

  analogWrite(M1_INA1, 0);  // Detener motor (sin PWM)
  digitalWrite(M1_INA2, 0); // Detener motor (sin dirección activa)

}
void _start_stop(){
    Serial.println("Apagando bomba y motor");

    analogWrite(M1_INA1, 0);  // Detener motor (sin PWM)
    digitalWrite(M1_INA2, 0); // Detener motor (sin dirección activa)          

    analogWrite(M2_INA1, 0);  // Motor hacia adelante con velocidad (ajustando el valor PWM)
    digitalWrite(M2_INA2, 0); // Motor hacia adelante
}

void estatus(){
  transcurrido =   fin - inicio;
  conversion = transcurrido/1000.0;// Convertir a segundos (usamos 1000.0 para obtener un resultado en decimal)
  Serial.println("inicio: " + String(inicio) + ", fin: " + String(fin));
  Serial.println("Segundos transcurridos: " + String(conversion));
  if (conversion > 2.0) {//checar
    estado_anterior = true; // Si ha pasado 1 segundo o más, cambiar el estado
  } else if (conversion <= 1.0){
    estado_anterior = false; // Si no ha pasado 1 segundo, mantener el estado falso
  }
    


  if (estado_anterior == true) {
     Serial.println("La condición se cumple: El tiempo es mayor a 1.5 segundos");
     
     bomba_start_stop();  // Iniciar la bomba
     inicio = millis();  // Reiniciar el tiempo de inicio
     fin = millis();     // Reiniciar el tiempo de fin
  } else {
    Serial.println("La condición NO se cumple: El tiempo es menor a 1.0 segundos");
  }
  
}


void bomba_start_stop(){
                          delay(bomba_low);
                          digitalWrite(M2_INA1, HIGH);  // Motor hacia adelante con velocidad (ajustando el valor PWM)
                          digitalWrite(M2_INA2, 0); // Motor hacia adelante
                          delay(bomba_high);
                          digitalWrite(M2_INA1, LOW);  // Motor hacia adelante con velocidad (ajustando el valor PWM)
                          digitalWrite(M2_INA2, 0); // Motor hacia adelante
                          delay(bomba_low);
                          estado_anterior = false;
}



void nivel_agua(){
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);


  tiempo= pulseIn(echo,HIGH); //us = microsegundos
  distancia = float(tiempo * 0.0343)/2;
  delay(10);

}

void  indicador_nivel(){
  float restar = botella/3;
  
  float nivel_medio = botella - restar;
  float nivel_bajo =  nivel_medio - restar;
  if(distancia<nivel_bajo){
           Serial.println("Nivel de agua alto");
          nivelAguaOk = true;
          nivelactual = nivelAguaOk;
          digitalWrite(buzzerPin, LOW);


  }else if(distancia< nivel_medio){
          Serial.println("Nivel de agua medio");
          // Enciende el buzzer (sonido durante 500 ms)
          digitalWrite(buzzerPin, HIGH);
          delay(300);  // 500 ms de sonido

          // Apaga el buzzer (silencio durante 3000 ms)
          digitalWrite(buzzerPin, LOW);
          delay(700);  // 3000 ms de silencio
          nivelAguaOk = true;
          nivelactual = nivelAguaOk;
   
  }else if (distancia <=  botella){
          Serial.println("Nivel de agua bajo");

          // Sonido continuo o más intermitente según el nivel más bajo
         for (int i = 0; i < 20; i++) {  // 20 ciclos de sonido
               digitalWrite(buzzerPin, HIGH);
                delay(100);  // Sonido por 100 ms
                digitalWrite(buzzerPin, LOW);
                delay(100);  // Pausa de 100 ms
          }
          nivelAguaOk = false;
          nivelactual = nivelAguaOk;

  } 

}