/* Práctica 3 Voltajes analogicos y PWM
 Ajustar el brillo de un led dependiendo 
 del voltaje de un potenciometro.*/

const int led =3;  // led conectado al pin 3
const int pot =0; // el pot esta conectado al pin A0

int brillo;  //variable para el brillo

void setup ()  {
  pinMode (led, OUTPUT);  // declaramos el led como salida 
  /* los pin analogicos se declaran como entrada automaticamente */
}

void loop (){
  /*leemos el valor del potenciometro divididos entre 4 ya que
   solo se pueden usar valores entre 0 y 255 en analog Write  */
  brillo = analogRead (pot) / 4; 
  /*analogWrite recibe dos valores,el pin a usar y la intensidad del voltaje
   los valores de voltaje van de 0 a 255*/
  analogWrite(led, brillo);
}
