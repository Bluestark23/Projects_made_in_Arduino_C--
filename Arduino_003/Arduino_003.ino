int x=3;
int y=5;
void setup() {
  // put your setup code here, to run once:
 pinMode(x,OUTPUT);
  pinMode(y,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(x,1);
  digitalWrite(y,0);
    delay(1000);







    digitalWrite(x,0);
  digitalWrite(y,1);
    delay(1000);
}
