int led1=3;

void setup(){ //se ejecuta al inicion
  
   pinMode(led1,OUTPUT);//modopin(variable,ESTADO)
  
 }

 void loop(){  // ciclo infinito
  
  digitalWrite(led1,HIGH);//escrituradigital(variable,ESTADO)

 delay(1000);  //espera(milisegundos)
  
  digitalWrite(led1,LOW);

  delay(1000);//espera(milisegundos)
  }



  
