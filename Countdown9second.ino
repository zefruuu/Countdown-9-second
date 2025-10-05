byte pin[] = {2, 3, 4, 5, 6, 7, 8, 9};

int button = 11; 

int number[9][8] = {
  {0, 0, 1, 1, 1, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 1, 0, 1}, // 2
  {0, 1, 1, 1, 1, 1, 0, 1}, // 3
  {0, 0, 1, 1, 1, 0, 1, 1}, // 4
  {0, 1, 1, 1, 0, 1, 1, 1}, // 5
  {1, 1, 1, 1, 0, 1, 1, 1}, // 6
  {0, 0, 1, 1, 1, 1, 1, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1, 1}, // 8
  {0, 0, 1, 1, 1, 1, 1, 1}  // 9
};

void setup() {
  pinMode(button, INPUT_PULLUP); 
  pinMode(10, OUTPUT); 
  pinMode(12, OUTPUT); 
  for (byte a = 0; a < 8; a++) pinMode(pin[a], OUTPUT);
}

void showDigit(int n) {
  for (byte b = 0; b < 8; b++) {
    digitalWrite(pin[b], number[n][b]);
  }
}

void loop() {
  
  if (digitalRead(button) == LOW) {
    for (int a = 8; a >= 0; a--) {
      showDigit(a);
      delay(1000);


      if (digitalRead(button) == LOW) return;
    }
  }


  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  delay(500);
}
