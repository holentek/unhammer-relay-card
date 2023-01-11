void setup() {
  // Set each pin as an input or an output
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  
}

void loop() {
  // Read the input
  int input0 = digitalRead(0);
  int input1 = digitalRead(1);
  int input2 = digitalRead(2);
  int input3 = digitalRead(3);
  int input4 = digitalRead(4);
  int input5 = digitalRead(5);
  int input6 = digitalRead(6);
  int input7 = digitalRead(7);
  
  // Write the output
  if (input0 == HIGH) {
    digitalWrite(8, HIGH);
  } else if (input1 == HIGH) {
    digitalWrite(8, LOW);
  }
  if (input2 == HIGH) {
    digitalWrite(9, HIGH);
  } else if (input3 == HIGH) {
    digitalWrite(9, LOW);
  }
  if (input4 == HIGH) {
    digitalWrite(10, HIGH);
  } else if (input5 == HIGH) {
    digitalWrite(10, LOW);
  }
  if (input6 == HIGH) {
    digitalWrite(11, HIGH);
  } else if (input7 == HIGH) {
    digitalWrite(11, LOW);
  }
  if (input0 == HIGH) {
    digitalWrite(12, HIGH);
  } else if (input1 == HIGH) {
    digitalWrite(12, LOW);
  }
  if (input2 == HIGH) {
    digitalWrite(13, HIGH);
  } else if (input3 == HIGH) {
    digitalWrite(13, LOW);
  }
  if (input4 == HIGH) {
    digitalWrite(14, HIGH);
  } else if (input5 == HIGH) {
    digitalWrite(14, LOW);
  }
  if (input6 == HIGH) {
    digitalWrite(15, HIGH);
  } else if (input7 == HIGH) {
    digitalWrite(15, LOW);
  }
}
