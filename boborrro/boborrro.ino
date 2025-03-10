
int disparo=3;
int receptor=8;///int= entero
long tiempo;
long distancia;///para muchos decimales 
//float para decimales

void setup(){
  pinMode(disparo,OUTPUT);///entrada
  pinMode(receptor,INPUT);////salida
  Serial.begin(9600);
 }

void loop() {
  // put your main code here, to run repeatedly:
  medir();
  Serial.println(distancia);///para imprimir print y println para saltar hacia otra cosa en el"Monitor serie"
  ////¿ serial .println para mandar mensajes
  delay(500);//5 sec
}

void medir(){
  digitalWrite(disparo,LOW); ///establilizar sensor
  delayMicroseconds(5);
  digitalWrite(disparo,HIGH);///prender HIGH, APAGAR LOW.      //eenvio del pulso ultrasonico
  delayMicroseconds(10);
  tiempo=pulseIn(receptor,HIGH);
  distancia=int(0.17*tiempo/10);///obtener distancia en "cm"
}


////tarea
  /////que es baudios
  //_/_/_/_los focos van acelerando mas rapido
///terminar esto   



