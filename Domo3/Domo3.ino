///sensor infrarrojo 1  
int pinLecturaIR=A0;
int LED=6;

//sensor infrarrojo 2
int led1=5;
int lectura1=A1;

//Para el modulo Bluetooth con AppInventor
int rele1=9;     
int rele2=10;
int rele3=11;

int Received=0;
int rele1_estado=0;
int rele2_estado=0;
int rele3_estado=0;

//para el sensor de calor
const int led34=8;
const int flame=7;//sensor

void setup() {
  Serial.begin(9600);
pinMode(LED,OUTPUT);//para el led del sensor 1

pinMode(led1,OUTPUT);//para el led del sensor 2

//Los tres son para el modulo bluetooth
pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
   

//Para el sensor de calor
pinMode(led34,OUTPUT);//para los pulsos de encendido y pagado
pinMode(flame,INPUT);//para leer el dato del sensor


}

void loop() {
  // put your main code here, to run repeatedly:
  //procedimiento para la ejecucion del led del sensor 1(Encienda/apage)
int lecturaIR=analogRead(pinLecturaIR);
Serial.println(lecturaIR);
if(lecturaIR< 600){
  digitalWrite(LED,HIGH);
}else{
  digitalWrite(LED,LOW);
}

//procedimiento para la ejecucion del led del sensor 2(Encienda/apage)
int detector=analogRead(lectura1);
Serial.println(detector);
if(detector< 600){
  digitalWrite(led1,HIGH);
}else{
  digitalWrite(led1,LOW);
}





//para el sensor de calor
digitalWrite(led34,digitalRead(flame)); //ya con esto se iluminara el led cuando 
//detecte fuego



///modulo bluethoo
if(Serial.available()>0){
  Received= Serial.read();
}

if(rele1_estado==0 && Received=='a'){
  digitalWrite(rele1,HIGH);
  rele1_estado=1;
  Received=0;
}

if(rele1_estado==1 && Received=='a'){
  digitalWrite(rele1,LOW);
  rele1_estado=0;
  Received=0;
}

///
if(rele2_estado==0 && Received=='b'){
  digitalWrite(rele1,HIGH);
  rele2_estado=1;
  Received=0;
}

if(rele2_estado==1 && Received=='b'){
  digitalWrite(rele1,LOW);
  rele2_estado=0;
  Received=0;
}

////
if(rele3_estado==0 && Received=='c'){
  digitalWrite(rele1,HIGH);
  rele3_estado=1;
  Received=0;
}

if(rele3_estado==1 && Received=='c'){
  digitalWrite(rele1,LOW);
  rele3_estado=0;
  Received=0;
}






}



  ///buscar como usar las codicionales en arduino
