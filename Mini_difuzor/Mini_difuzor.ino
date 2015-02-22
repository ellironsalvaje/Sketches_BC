void setup() {
  pinMode(11,OUTPUT);// put your setup code here, to run once:

}

void loop() {
  for (int i=1500; i<2000; i++){
    tone(11,i);
    delay(10);
  }
  for (int i=2000; i>1500; i--){
    tone (11,i);
    delay (10);
  }
  noTone(11);
  delay(5000);// put your main code here, to run repeatedly:

}
