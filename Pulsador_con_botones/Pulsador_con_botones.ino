int ledpin = 5;
int buttonApin=9;
int buttonBpin=8;


byte leds=0;
////el led inicia apagado o esta apagado

void setup() {//configuracion
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);///
pinMode(buttonApin,INPUT_PULLUP);//ENTRADAS
pinMode(buttonBpin,INPUT_PULLUP);///ENTRADAS 

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(buttonApin)==LOW)// presionas ensendido
{
digitalWrite(ledpin,HIGH);

}

if(digitalRead(buttonBpin)==LOW);//no presionado se apaga
{
digitalWrite(ledpin,LOW);
}
}
