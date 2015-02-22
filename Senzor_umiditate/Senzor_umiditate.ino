void setup() {
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
  float umiditate=analogRead(0);
  Serial.println(umiditate);
  delay(2000);
  // put your main code here, to run repeatedly:

}
