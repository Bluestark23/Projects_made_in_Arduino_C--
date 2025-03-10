int prende=3;
void setup() {
  // put your setup code here, to run once:
 pinMode(prende,OUTPUT);
 digitalWrite(prende,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(prende,HIGH);
delay(100000);
digitalWrite(prende,LOW);
}
