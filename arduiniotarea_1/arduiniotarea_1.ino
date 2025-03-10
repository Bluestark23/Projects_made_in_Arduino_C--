int led_1verde=3; 
int led_1amarillo=4;
int led_1rojo=5;
//GND TIERRA
int led_2verde=6; 
int led_2amarillo=7;
int led_2rojo=8;

int led_3verde=9; 
int led_3amarillo=10;
int led_3rojo=11;

int led_4verde=12; 
int led_4amarillo=13;
int led_4rojo=2;

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


   pinMode(led_3verde,OUTPUT); ///pinMode que es lo que va hacer
   pinMode(led_3amarillo,OUTPUT);
   pinMode(led_3rojo,OUTPUT);
   digitalWrite(led_3verde,LOW);
   digitalWrite(led_3amarillo,LOW);
   digitalWrite(led_3rojo,LOW);
///digitalWrite escritura digital es para una salida,solamente si y no
   pinMode(led_4verde,OUTPUT); ///pinMode que es lo que va hacer
   pinMode(led_4amarillo,OUTPUT);
   pinMode(led_4rojo,OUTPUT);
   digitalWrite(led_4verde,LOW);
   digitalWrite(led_4amarillo,LOW);
   digitalWrite(led_4rojo,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led_1verde,HIGH); ///high enciende,low apaga
  digitalWrite(led_2rojo,HIGH);
  digitalWrite(led_3rojo,HIGH);
  digitalWrite(led_4rojo,HIGH);
  
  digitalWrite(led_1rojo,LOW);
  digitalWrite(led_2amarillo,LOW);///ONUW
    digitalWrite(led_3amarillo,LOW);
  digitalWrite(led_4amarillo,LOW);
 digitalWrite(led_2verde,LOW); ///high enciende,low apaga
 digitalWrite(led_3verde,LOW); ///high enciende,low apaga
 digitalWrite(led_4verde,LOW); ///high enciende,low apaga

  
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


 digitalWrite(led_3verde,HIGH);///2000 equivale a 2 segundos
  digitalWrite(led_2amarillo,LOW);///ONUW
  digitalWrite(led_2rojo,HIGH);//                          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   HIGH a LOW
  digitalWrite(led_3rojo,LOW);//                          >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   HIGH a LOW

  delay(1000);
   digitalWrite(led_3verde,LOW);///2000 equivale a 2 segundos

  digitalWrite(led_3amarillo,HIGH);///ONUW        >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   2a1
  
  delay(1000);

  digitalWrite(led_3amarillo,LOW);///ONUW                 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   2a1
  digitalWrite(led_3rojo,HIGH);
  digitalWrite(led_4rojo,LOW);//
  digitalWrite(led_4verde,HIGH);///ONUW                 >s>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   2a1>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   rojo a verde
  delay(1000);
  digitalWrite(led_4verde,LOW);///ONUW                 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   2a1
  digitalWrite(led_4amarillo,HIGH);
  
  delay(1000);
  digitalWrite(led_4amarillo,LOW);
  digitalWrite(led_4rojo,HIGH);
  delay(1000);




}
