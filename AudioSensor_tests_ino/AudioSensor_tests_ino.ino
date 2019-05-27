void setup(){
  Serial.begin(9600);
}
void loop(){
 int x = analogRead(0); //0-300 
 x = x/20;
 int count;
 for(count = 0; count < x; count ++){
   Serial.print("|");
 }
 Serial.println();
 delay(100);
}
