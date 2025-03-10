int Boton=3;;//ENTRADA
int led=4;//SALIDA

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(Boton,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(Boton)==LOW){
  digitalWrite(led,HIGH);
  }else{
  digitalWrite(led,LOW);
  }
}
