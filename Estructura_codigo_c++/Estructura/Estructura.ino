// Inclusión de bibliotecas (si es necesario)
#include <Wire.h> 

// Declaración de variables (si es necesario)
int ledPin = 13;  // Pin del LED

// Función setup() para inicializaciones
void setup() {
  pinMode(ledPin, OUTPUT);    // Configura el pin 13 como salida
  Serial.begin(9600);         // Inicializa la comunicación serial a 9600 baudios
}

// Función loop() para ejecutar el código repetidamente
void loop() {
  digitalWrite(ledPin, HIGH); // Enciende el LED
  delay(1000);                // Espera 1 segundo
  digitalWrite(ledPin, LOW);  // Apaga el LED
  delay(1000);                // Espera 1 segundo
}
