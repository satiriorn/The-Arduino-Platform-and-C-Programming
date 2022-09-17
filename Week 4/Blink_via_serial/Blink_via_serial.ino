int state;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}
void loop() 
{  
  if(Serial.available() > 0){ state = Serial.read();}  
  if (state == '0'){  digitalWrite(LED_BUILTIN, LOW);} 
  if (state == '1')  {  digitalWrite(LED_BUILTIN, HIGH);}
}
