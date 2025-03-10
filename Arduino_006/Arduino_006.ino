int x=3;
int y=7;
int f;
void setup() {
  // put your setup code here, to run once:
 pinMode(x,OUTPUT);
 pinMode(y,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    for(int z=0;z<255;z++){
    analogWrite(x,z);
    delay(10);
 
  analogWrite(y,z);
    delay(255-z);//se supone que debe disminuirlo

  /// for(int z=0;z>255;z++){
    
 
  ///}

    }

}
