#define LED 9
void setup() {
  //pinMode(LED,OUTPUT); 
  Serial.begin(9600);
  Serial.println("Start");
}
void loop() {
  for(int i=0; i<=255; i++){
    analogWrite(LED,i);
    Serial.print("LED : ");
    Serial.println(i);
    delay(10);
  }
  /*for(int i=255; i>=0; i--){
    analogWrite(LED,i);
    Serial.print("LED : ");
    Serial.println(i);
    delay(10);
  }*/
}
