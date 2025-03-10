int disparo=7;
int rojo=5;
int amarrillo=1;
int blanco=6;///BLANCO(VERDE)
long tiempo;
long distancia;
///paola buscar
void setup() {
  // put your setup code here, to run once:
pinMode(disparo,OUTPUT);
pinMode(rojo,INPUT);
pinMode(amarrillo,INPUT);
pinMode(blanco,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  foco();
Serial.println(disparo,LOW);////serial.printl para mensajes
Serial.println(rojo,LOW);//alto
Serial.println(amarrillo,LOW);//bajar la velocidad
Serial.println(blanco,LOW);
delay(600);
 tiempo(rojo,HIGH);
  distancia=int(2.00*tiempo/10);
}

void foco(){
  if(rojo<15){
    digitalWrite(rojo,LOW);
    }else{
      if(amarrillo<20){
        digitalWrite(amarrillo,LOW);
        }else{
          if(blanco>50){
          digitalWrite(blanco(verde),Low);
          }else{
            if(rojo>15){
             digitalWrite(rojo,HIGH);
               }else{
             if(amarrillo>20){
              digitalWrite(amarrillo,HIGH);
              }else{
                digitalWrite(blanco,HIGH);
                }         
            } 
                   }
          }  
      }
  }




  /////que es baudios

