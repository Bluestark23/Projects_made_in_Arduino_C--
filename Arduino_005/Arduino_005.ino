int x=3;
int f;


void setup() {
  // put your setup code here, to run once:

 pinMode(x,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int z=0;z<255;z++){
    analogWrite(x,z);
    delay(2);
 
  }
  
    
}
