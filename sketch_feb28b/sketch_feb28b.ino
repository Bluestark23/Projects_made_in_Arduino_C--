int foco=1;
int foco2=2;
int foco3=3;
int foco4=4;
int foco5=5;
long tiempo;
long velocidad;

void setup() {
  // put your setup code here, to run once:
  for(int t=0; t<5; t++)
  {
   pinMode(t,OUTPUT);
   digitalWrite(t,LOW);
  }
}

void loop() 
{
  // put your main code here, to run repeatedly:  
   prender(foco);
   prender(foco2);
   prender(foco3);                                                        
   prender(foco4);
   prender(foco5);
}


void prender(int foco)
{
  digitalWrite(foco,HIGH);
}
void apagar(int foco){analogWrite(foco,LOW);
}


void semadoro(int foco,int foco2,int foco3,int foco4,int foco5){
  int po; 

  apagar(foco);
  prender(foco2);
  delay(10000);                
  apagar(foco2);
  prender(foco3);
  delay(8000);                                                                             
  apagar(foco3);
  prender(foco4);
  delay(6000);
  apagar(foco4);
  prender(foco5);
  delay(4000); 
}
