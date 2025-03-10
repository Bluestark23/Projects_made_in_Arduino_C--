int prende=3;//ENCENDIDO
int prende1=4;//APAGADO///corregido
void setup() {
  // put your setup code here, to run once:
 pinMode(prende,OUTPUT);
 digitalWrite(prende,LOW);
  pinMode(prende1,OUTPUT);
 digitalWrite(prende1,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(prende==3){
digitalWrite(prende,HIGH);

}
if(prende1==4){
  digitalWrite(prende1,HIGH);
  delay(100);//entre mas pequeño se el numero menos tiempo durara

  digitalWrite(prende1,LOW);
  delay(1200);//

}/////que la frecuencia que enviemos no se superior a 10 Ers
}
