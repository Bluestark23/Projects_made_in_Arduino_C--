/*==sensor ping== 
 * mide el alcanze en metros con un ultrasonico y de vuelve la distancia del objeto mas cercano en el rango.Para ello envia un pulso al sensor para iniciar una lectura,
 * acontinuacion,escucha el pulso regresar.
 * El circuitp:
 * *Conexion de V+ de ping>> a 5v
 * GND>>> a tierra(-)
 * Triger(disparador)>>>7 arduino 
 * echo(reeceptor)>>>8 arduino
 * 
 * 
 * el sonido viaja a 340 m/s
 */
 
int disparo=3;
int receptor=8;
long tiempo;
long distancia;

void setup(){
  pinMode(disparo,OUTPUT);///entrada
  pinMode(receptor,INPUT);////salida
  Serial.begin(9600);
 }

void loop() {
  // put your main code here, to run repeatedly:
  medir();
  Serial.println(distancia);///para imprimir print y println para saltar hacia otra cosa
  ////¿ serial .println para mandar mensajes
  delay(500);
}

void medir(){
  digitalWrite(disparo,LOW); ///establilizar sensor
  delayMicroseconds(5);
  digitalWrite(disparo,HIGH);///prender HIGH, APAGAR LOW.      //eenvio del pulso ultrasonico
  delayMicroseconds(10);
  tiempo=pulseIn(receptor,HIGH);
  distancia=int(0.17*tiempo/10);///obtener distancia en "cm"
}

