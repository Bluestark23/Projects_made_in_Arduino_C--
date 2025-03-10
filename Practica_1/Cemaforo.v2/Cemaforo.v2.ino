
int led1=3;///Se coloca el puerto de salida y la variable.  verde
int led2=4;  //amarillo
int led3=5;  //rojo

///GND usar uno negro
//EL NEGRO TAMBIENS ES NEGATIVO Y EL ROJO ES POSITIVO,BLANCO NEUTRAL
void setup(){ //se ejecuta al inicion
   pinMode(led1,OUTPUT); ///Se  declaran las variables de los leds como salidas
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
                                      
  digitalWrite(led1,LOW); ///Se apagan los leds
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     
}

void loop(){  // ciclo infinito ////r2.- vuelve a comenzar el ciclo y finaliza en (r2).
  //verde
    digitalWrite(led1,HIGH);  //prender led 1
    delay(3000);              //esperar 5 seg
  //parpadeo(verde)
    digitalWrite(led1,LOW);   //apagar
    delay(500);               // espera 0.5
    digitalWrite(led1,HIGH);  //prende led 1
    delay(500);
    digitalWrite(led1,LOW);///apagar
    delay(500);           //Espera 0.5
    digitalWrite(led1,HIGH);      ///PRENDE LED1
    delay(500);           //// apagar
    digitalWrite(led1,LOW);///apagar
    delay(500);           //Espera 0.5
  //amarillo
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
  //rojo
    digitalWrite(led3,HIGH);  //prende led rojo
    delay(6000);
    digitalWrite(led3,LOW);  //prende led rojo
    
    /*digitalWrite(led1,LOW);///apagar
    delay(500);           //Espera 0.5
    digitalWrite(led1,HIGH); ///PRENDE LED1
    delay(500);           //// apagar
    digitalWrite(led3,HIGH);
    delay(5000);
    digitalWrite(led3,LOW);
    delay(500);               // espera 0.5
    digitalWrite(led1,HIGH);  //prende led 1
    delay(500);
    digitalWrite(led1,LOW);///apagar
    delay(500);           //Espera 0.5
    digitalWrite(led1,HIGH); ///PRENDE LED1
    delay(500);           //// apagar*/
 
} /// r1.-finaliza el primer siclo y regresa(r2)



 //// para las entradas en arduino es 01234456...13      [TXD][1]        
                                                   ///// [RXD][0]
