int foco = A0;
int foco2 = A1;
int foco3 = A2;
int foco4 = A3;
int foco5 = A4;
int eco;
int tri;
long tiempo= vel/tri;
long velocidad = sonido;

void setup() 
{
  // put your setup code here, to run once:
   pinMode(foco,OUTPUT);
   pinMode(foco2,OUTPUT);
   pinMode(foco3,OUTPUT);
   pinMode(foco4,OUTPUT);
   pinMode(foco5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  prender(0,0,0,0,0);
  delay(potenciometro);
  prender(255,0,0,0,0);
  delay(potenciometro);
  prender(120,255,0,0,0);
  delay(potenciometro);
  prender(50,120,255,0,0);
  delay(potenciometro);
  prender(0,50,120,255,0);
  delay(potenciometro);
  prender(0,0,50,120,255);
  delay(potenciometro);
  prender(0,0,0,50,120);
  delay(potenciometro);
  prender(0,0,0,0,50);
  delay(potenciometro);
}

void prender(int a,int b,int c, int d,int e)
{
  analogWrite(foco,a);
  analogWrite(foco2,b);
  analogWrite(foco3,c);
  analogWrite(foco4,d);
  analogWrite(foco5,e);
}

