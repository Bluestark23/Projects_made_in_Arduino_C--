int a=A0,b;///esto es igual a int a=A0; int b;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);////
pinMode(a,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
b=analogRead(a);
Serial.println(b);
delay (500);
}
