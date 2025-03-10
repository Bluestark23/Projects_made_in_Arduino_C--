int x=3;
float f;
void setup() {
  // put your setup code here, to run once:

   pinMode(x,OUTPUT);
 Serial.begin(9600);
 
              
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
   f=float ( Serial.read());
  
   Serial.println(f);
    analogWrite(x,f);
 
  
  }
}
