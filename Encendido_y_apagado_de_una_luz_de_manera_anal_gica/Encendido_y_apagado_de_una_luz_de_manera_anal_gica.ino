// Salida Analógica Cíclica
// by BARRAGAN <http://people.interaction-ivrea.it/h.barragan>
int value = 0; // Valor a sacar por la salida analógica PIN 9
int ledpin = 9; // Salida analógicas PIN 9
void setup()
{
// nothing for setup
}
void loop()
{
for(value = 0 ; value <= 255; value+=5) // Variación de la variable se salida ente el MIN yMAX
{
analogWrite(ledpin, value); // Enviar valor a la salida (entre 0 y 255)
delay(30); // Esperar 30 ms para ver el efecto de variación
}
for(value = 255; value >=0; value-=5) // Variación de la variable de salida entre MAX y MIN
{
analogWrite(ledpin, value);//analogWrite=es como un encendido y apagado que va en aumentandoo  la luminosidad por ejemplo de un led
 delay(30);//un espera
}
}

////verificar que siempre este conectado al puerto
