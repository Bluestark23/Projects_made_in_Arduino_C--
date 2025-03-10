int led1=3; 
int led2=4;
int led3=5;
void setup() {
  // put your setup code here, to run once:
   pinMode(led1,OUTPUT); ///pinMode que es lo que va hacer
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
///digitalWrite escritura digital es para una salida,solamente si y no


}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(led1,HIGH); ///high enciende,low apaga
   delay(2000);                   ///delay es para esperar un timpo en milicengundos
   digitalWrite(led1,LOW);///2000 equivale a 2 segundos
   digitalWrite(led2,HIGH);
   delay(2000);
   digitalWrite(led2,LOW);///ONUW 
   digitalWrite(led3,HIGH);
   delay(2000);
   digitalWrite(led3,LOW);



}
