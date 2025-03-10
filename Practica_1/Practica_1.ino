
int ledPin = 3;                   // LED conectado al pin 13
void setup() {
  pinMode(ledPin, OUTPUT);      // asigna el pin digital pin como output (salida)
}
void loop() {
  digitalWrite(ledPin, HIGH);   // enciende el LED (on)
  delay(1000);                            // espera por un segundo
  digitalWrite(ledPin, LOW);    // apaga el LED (off)
  delay(1000);                           // espera por un segundo
}

