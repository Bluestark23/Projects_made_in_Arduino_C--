int leds[]={8,9,10,11,12};

int buz = 6;
int pot;
int n=0;

void setup(){
   for(n=0;n<5;n++) {
            pinMode(leds[n],OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  pot = analogRead(0);// variable pot entrada analógica en A0
  Serial.print(10);
  Serial.println(pot);
  if (pot==0)
      encender(0);
  else if(pot > 0 && pot <= 200){
     encender(1);
  }
  else if(pot >= 200 && pot <= 400){
     encender(2);
  }
  else if(pot >= 400 && pot <= 600){
     encender(3);
  }
  else if(pot >= 600 && pot <= 800){
      encender(4);
  }
  else if(pot >= 800){
      encender(5);
  }

  // sonorá el buzzer si supera el valor 1000
  if (pot >=1000)
      beep(200);
  else
    beep(0);
}

void encender(int x){
 for(n=0;n<x;n++)
         digitalWrite(leds[n],HIGH);
 for(n=x;n<5;n++)
        digitalWrite(leds[n],LOW);
}

void beep(unsigned char pausa) {
            analogWrite(buz, 20);
            delay(pausa);                      // Espera
            analogWrite(buz, 0);     // Apaga
            delay(pausa);                      // Espera
}




