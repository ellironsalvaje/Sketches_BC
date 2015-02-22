void setup() {
pinMode(7,INPUT);
Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
int stareButon=digitalRead(7);
Serial.println(stareButon);
delay(1000);// put your main code here, to run repeatedly:

}
