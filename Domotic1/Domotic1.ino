///sensor infrarrojo 1  
int pinLecturaIR=A0;
int LED=6;

//sensor infrarrojo 2
int led1=5;
int lectura1=A1;

//Para el modulo Bluetooth con AppInventor
//Variables asociadas a los dos LEDs que se van a controlar
int led_1 = 12;
int led_2 = 13;
char valor;  //Variable para indicar que llega una orden


//para el sensor de calor
const int led34=8;
const int flame=7;//sensor

void setup() {
  Serial.begin(9600);
pinMode(LED,OUTPUT);//para el led del sensor 1

pinMode(led1,OUTPUT);//para el led del sensor 2

//Los tdos son para el modulo bluetooth
//Variables asociadas a los dos LEDs que se van a controlar
pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);


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
///Para el modulo Bluetooth con AppInventor
 if (Serial.available()>0  //Si el puerto serie (Bluetooth) está disponible
  {
    valor = Serial.read();  //Lee el dato entrante via Bluetooth

    if (valor == 'A')   //Si el dato que llega es una A
    {
      digitalWrite(led_1, HIGH);  //Enciende el LED 1
    }
    if (valor == 'B')   //Si el dato que llega es una B
    {
      digitalWrite(led_1, LOW);   //Apaga el LED 1
    }
    if (valor == 'C')   //Si el dato que llega es una C
    {
      digitalWrite(led_2, HIGH);  //Enciende el LED 2
    }
    if (valor == 'D')   //Si el dato que llega es una D
    {
      digitalWrite(led_2, LOW);   //Apaga el LED 2
    }
  }
//para el sensor de calor
digitalWrite(led34,digitalRead(flame)); //ya con esto se iluminara el led cuando 
//detecte fuego

}



  ///buscar como usar las codicionales en arduino
