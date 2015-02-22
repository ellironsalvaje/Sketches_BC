void setup() {
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  for (int i=0; i<20; i++) {
int senzorIluminare=analogRead(0);
Serial.println(senzorIluminare);
delay(500);// put your main code here, to run repeatedly:
  }
  if i=20 stop;
}
