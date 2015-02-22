void setup() {
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
int lumina=analogRead(0);
Serial.println(lumina);
delay(10);// put your main code here, to run repeatedly:

}
