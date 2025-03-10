const int led=13;
const int sensor=2;
int valor

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
valor=digitalRead(sensor);
digitalWrite(led,!valor);
delay(500);
}
