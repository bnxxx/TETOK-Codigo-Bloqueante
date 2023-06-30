void setup() {
  pinMode(4,OUTPUT);//p0 a125 p250 a375 p500 a625 p750 a875
  pinMode(3,OUTPUT);//p0 a166.5 p333 a500 p666 a833,5
}

void loop() {
  //0
  digitalWrite(4, 1);
  digitalWrite(3, 1);
  delay(125);//125
  digitalWrite(4, 0);
  delay(41.5);//166.5
  digitalWrite(3, 0);
  delay(83.5);//250
  digitalWrite(4, 1);
  delay(83);//333
  digitalWrite(3, 1);
  delay(42);//375
  digitalWrite(4, 0);
  delay(125);//500
  digitalWrite(4, 1);
  digitalWrite(3, 0);
  delay(125);//625
  digitalWrite(4, 0);
  delay(42);//666.5
  digitalWrite(3, 1);
  delay(83.5);//750
  digitalWrite(4, 1);
  delay(83.5);//833,5
  digitalWrite(3, 0);
  delay(41.5);//875
  digitalWrite(4, 0);
  delay(125);//1000
}