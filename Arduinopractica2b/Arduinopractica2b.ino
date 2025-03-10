const int boton=7;
int valor=0;
int estado=0;
int anterior =0;

void setup() {
Serial.begin(9600);
pinMode(boton,INPUT);



}

void loop() {
valor=digitalRead(boton);

if(valor==HIGH){
  Serial.println("Prendido"); 
}else{
  Serial.println("Apagado");
}
delay(250);
if((valor==HIGH)&&(anterior==LOW)){
estado=1-estado;////estado es 0 ,pero aqui es 1-0 lo que se convierte estado en 1
//valores or-or ,xor-xor, and-&& , not-!
delay(10);
}

anterior=valor;
if(estado==1){
Serial.println("==Prendido==");
}else{
Serial.println("__Apagado__");
}
}


