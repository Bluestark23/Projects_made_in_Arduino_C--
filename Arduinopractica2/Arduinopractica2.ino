int boton=4;
void setup() {
  // put your setup code here, to run once:
pinMode(boton,INPUT);
Serial.begin(9600);///comunicacionSerial.Inicializar(#baudios)
///begin inicailizar serial=comunicacion con la computadora
///es una comunicacion serial inicializada
}

void loop() {
  // put your main code here, to run repeatedly:

if(boton=HIGH){
  Serial.println("Prendido"); 
}else{
  Serial.println("Apagado");
}
delay(250);
}                                                                                                                
