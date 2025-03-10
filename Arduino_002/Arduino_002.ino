int led_1verde=3; 
int led_1amarillo=4;
int led_1rojo=5;

int led_2verde=6; 
int led_2amarillo=7;
int led_2rojo=8;
void setup() {
  // put your setup code here, to run once:
   pinMode(led_1verde,OUTPUT); ///pinMode que es lo que va hacer
   pinMode(led_1amarillo,OUTPUT);
   pinMode(led_1rojo,OUTPUT);
   digitalWrite(led_1verde,LOW);
   digitalWrite(led_1amarillo,LOW);
   digitalWrite(led_1rojo,LOW);
///digitalWrite escritura digital es para una salida,solamente si y no
 pinMode(led_2verde,OUTPUT); ///pinMode que es lo que va hacer
   pinMode(led_2amarillo,OUTPUT);
   pinMode(led_2rojo,OUTPUT);
   digitalWrite(led_2verde,LOW);
   digitalWrite(led_2amarillo,LOW);
   digitalWrite(led_2rojo,LOW);

}

void loop() {
  digitalWrite(led_1verde,HIGH); ///high enciende,low apaga
  digitalWrite(led_2rojo,HIGH);
  digitalWrite(led_1rojo,LOW);
  digitalWrite(led_2amarillo,LOW);///ONUW
  delay(1000);                   ///delay es para esperar un timpo en milicengundos
  digitalWrite(led_1verde,LOW);///2000 equivale a 2 segundos
  digitalWrite(led_1amarillo,HIGH);///ONUW
  delay(1000);
  digitalWrite(led_1amarillo,LOW);///ONUW                 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   2a1
  digitalWrite(led_1rojo,HIGH);
  digitalWrite(led_2verde,HIGH);///2000 equivale a 2 segundos
  digitalWrite(led_2rojo,LOW);//                          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   HIGH a LOW
  delay(1000);
  digitalWrite(led_2verde,LOW);//                         >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   rojo a verde
  digitalWrite(led_2amarillo,HIGH);
  delay(1000);
}
