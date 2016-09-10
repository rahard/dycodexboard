int LED1 = 15; 
int LED2 = 16; 
int LED3 = 14; 
int LED4 = 13; 
int LED5 = 12; 
int WAIT = 1000;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
}


void display(int d1, int d2, int d3, int d4, int d5) {
   digitalWrite(LED1, d1);
   digitalWrite(LED2, d2); 
   digitalWrite(LED3, d3); 
   digitalWrite(LED4, d4); 
   digitalWrite(LED5, d5); 
}

void loop() {
   display(HIGH, LOW, LOW, LOW, LOW);
   delay(WAIT);
   display(LOW, HIGH, LOW, LOW, LOW);
   delay(WAIT);
   display(LOW, LOW, HIGH, LOW, LOW);
   delay(WAIT);
   display(LOW, LOW, LOW, HIGH, LOW);
   delay(WAIT);
   display(LOW, LOW, LOW, LOW, HIGH);
   delay(WAIT);
}

