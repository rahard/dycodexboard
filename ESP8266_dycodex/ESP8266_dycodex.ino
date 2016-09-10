int D1 = 15;
int D2 = 16;
int D3 = 14;
int D4 = 13;
int D5 = 12;


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(15, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(16, LOW);
  digitalWrite(14, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  //digitalWrite(11, LOW);
  delay(1000);              // wait for a second
  digitalWrite(15, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(16, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  //digitalWrite(11, LOW);
  delay(1000);              // wait for a second
}
