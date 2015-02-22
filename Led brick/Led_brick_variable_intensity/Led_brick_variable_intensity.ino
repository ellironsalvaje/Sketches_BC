void setup() {
  pinMode(11, OUTPUT);// put your setup code here, to run once:

}

void loop() {
  for (int i=0; i<255; i++) {
        analogWrite (11,i);
      delay(50);  // put your main code here, to run repeatedly:
  }
}
