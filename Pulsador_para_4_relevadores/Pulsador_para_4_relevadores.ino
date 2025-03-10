int bomba1=4;
int bomba2=5;
int bomba3=6;
int bomba4=7;


int valor=0;
int estado=0;
void setup() {
 pinMode(bomba1,OUTPUT);
  pinMode(bomba2,OUTPUT);
 pinMode(bomba3,OUTPUT);
 pinMode(bomba4,OUTPUT);
 pinMode(0,INPUT);
 digitalWrite(bomba1,LOW);///estado inicial:apagado
 digitalWrite(bomba2,LOW);
 digitalWrite(bomba3,LOW);
 digitalWrite(bomba4,LOW);
}

void loop() {
valor=digitalRead(0);///lee si el boton esta pulado;

if(valor==HIGH){
estado=1-estado;
}
if(estado==1){///Cuando se presiona se ejecuta lo siguiente
digitalWrite(bomba1,HIGH);
delay(6000);
digitalWrite(bomba1,LOW);
digitalWrite(bomba2,HIGH);
delay(6000);
digitalWrite(bomba2,LOW);
digitalWrite(bomba3,HIGH);
delay(6000);
digitalWrite(bomba3,LOW);
digitalWrite(bomba4,HIGH);
delay(6000);
digitalWrite(bomba4,LOW);
}else{//cuando se vuelve a presionar se ejecuta lo siguiente.
//Apagado de emergencia
  digitalWrite(bomba1,LOW);///estado inicial:apagado
 digitalWrite(bomba2,LOW);
 digitalWrite(bomba3,LOW);
 digitalWrite(bomba4,LOW);
}
}

