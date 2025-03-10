///sensor infrarrojo  
int pinLecturaIR=A0;
int LED=6;

int led1=13;
int pinLecturaIr=A1;
int valor;

void setup() {
  Serial.begin(9600);
pinMode(LED,OUTPUT);

pinMode(led1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int lecturaIR=analogRead(pinLecturaIR);
Serial.println(lecturaIR);
if(lecturaIR< 600){
  digitalWrite(LED,HIGH);
}else{
  digitalWrite(LED,LOW);
}


int lector=analogRead(pinLecturaIr);
if(lector<600)
digitalWrite(led1,!valor);
}else{
digitalWrite(led1,valor);
}

}

