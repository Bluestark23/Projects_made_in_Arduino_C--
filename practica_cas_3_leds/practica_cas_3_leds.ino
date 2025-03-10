int ledPin = 13; 
int ledPin2= 14;
int ledPin3=15;              // LED en el pin digital 13

void setup()     // configura el pin de salida
{
   pinMode(ledPin, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   pinMode(ledPin3, OUTPUT);// configura el pin 13 como salida
}

void loop()     // inicia el bucle del programa
{
   digitalWrite(ledPin, HIGH); // activa el LED
   delay(1000); // espera 1 segundo
   digitalWrite(ledPin, LOW); // desactiva el LED
   delay(1000); // espera 1 segundo
   digitalWrite(ledPin2, HIGH); // activa el LED
   delay(1000); // espera 1 segundo
   digitalWrite(ledPin2, LOW); // desactiva el LED
   delay(1000); // espera 1 segundo
   digitalWrite(ledPin3, HIGH); // activa el LED
   delay(1000); // espera 1 segundo
   digitalWrite(ledPin3, LOW); // desactiva el LED
   delay(1000); // espera 1 segundo
   
}
