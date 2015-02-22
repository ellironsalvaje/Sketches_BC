
void setup() {
pinMode(13,OUTPUT);
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  int senzorIluminare=analogRead(0);
Serial.println(senzorIluminare);
delay(500);// put your main code here, to run repeatedly:
if (senzorIluminare<5) digitalWrite (13,HIGH);
else digitalWrite(13,LOW);
  }
  //
