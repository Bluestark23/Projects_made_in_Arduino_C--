int verd1=2; int ama1=3;int  rojo1=4;///cemaforo #1

int verd2=5; int ama2=6; int rojo2=6;///cemaforo #2

int verd3=8;int ama3=9;int rojo3=10;///cemaforo #3

int verd4=11;int ama4=12; int rojo4=13;///cemaforo #4


void setup () {
  for(int x=0;                   x<=13                        ;x++){
    //valor inicial      //mientras condicion                 ///incrementa
    pinMode(x,OUTPUT);
    digitalWrite(x;LOW),
      


  }
        prender(rojo1);
        prender(rojo2);
        prender(rojo3);
        prender(rojo4);

}

void loop(){
  }

void prender(led){digitalWrite(led,HIGH);}

void apagar(led){digitalWrite(led,LOW);}


void semaforo(int verde,int amarillo,int rojo){
////VERDE
apagar(rojo);
prender(verde);
delay(3000);

/////PARPADEO--DEL VERDE
 apargar(verde);
 delay(500);
 prender(verde);
 delay(500);
 apargar(verde);
 delay(500);
 prender(verde);
 delay(500);
 apargar(verde);
 delay(500);
 ///AMARILLO
 prender(amarillo);
 delay(1000);
 apagar(amarillo);
 prender(rojo);

void loop(){
  semaforo(verd1,amarillo1,rojo1);
  semaforo(verd2,amarillo2,rojo2);
  semaforo(verd3,amarillo3,rojo3);
  semaforo(verd4,amarillo4,rojo4);

  
         }



 
  }

