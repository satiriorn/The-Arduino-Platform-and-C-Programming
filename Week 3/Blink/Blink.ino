void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for(int i = 0; i<10;i++){
   digitalWrite(LED_BUILTIN, HIGH);
   delay(1000);
   if(i < 5){
    digitalWrite(LED_BUILTIN, LOW);  
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
   }
   else{
    digitalWrite(LED_BUILTIN, LOW);  
    delay(2000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
    }
  }
}
