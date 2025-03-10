
int prende1=4;//Encendido
void setup() {
  // put your setup code here, to run once:
  pinMode(prende1,OUTPUT);
 digitalWrite(prende1,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

if(prende1==4){
  digitalWrite(prende1,HIGH);
  delay(3000);//entre mas pequeño se el numero menos tiempo durara

  digitalWrite(prende1,LOW);
  delay(3000);//

}/////que la frecuencia que enviemos no se superior a 10 Ers
}
