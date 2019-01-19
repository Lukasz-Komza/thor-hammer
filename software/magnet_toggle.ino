void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {

  Serial.println();
  Serial.println(digitalRead(8));
  
  if(digitalRead(8)==1){
    digitalWrite(7, LOW);
    Serial.println("Magnet: OFF");
  }
  else{
    digitalWrite(7, HIGH);
    Serial.println("Magnet: ON");
  }
  delay(200);
}
