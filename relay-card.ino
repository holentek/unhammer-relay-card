int state0 = 0;
int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;
int state5 = 0;
int state6 = 0;
int state7 = 0;
void setup() {
// Set each pin as an input or an output
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);
pinMode(5, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(A0, OUTPUT);
pinMode(A1, OUTPUT);
pinMode(A2, OUTPUT);
pinMode(A3, OUTPUT);
pinMode(A4, OUTPUT);
}
 
void loop() {
// Read the input
int input0 = digitalRead(2);
int input1 = digitalRead(3);
int input2 = digitalRead(4);
int input3 = digitalRead(5);
int input4 = digitalRead(6);
// Write the output
 
if (input0 == 0) {
if (state0 == 0){
analogWrite(A0, 255);
state0 = 1;
} else if (state0 == 1){
analogWrite(A0, 0);
state0 = 0;
}
}
 
if (input1 == 0) {
if (state1 == 0){
analogWrite(A1, 255);
state1 = 1;
} else if (state1 == 1){
analogWrite(A1, 0);
state1 = 0;
}
}
 
if (input2 == 0) {
if (state2 == 0){
analogWrite(A2, 255);
state2 = 1;
} else if (state2 == 1){
analogWrite(A2, 0);
state2 = 0;
}
}
 
if (input3 == 0) {
if (state3 == 0){
analogWrite(A3, 255);
state3 = 1;
} else if (state3 == 1){
analogWrite(A3, 0);
state3 = 0;
}
}
 
if (input4 == 0) {
if (state4 == 0){
analogWrite(A4, 255);
state4 = 1;
} else if (state4 == 1){
analogWrite(A4, 0);
state4 = 0;
}
}
 
delay(300);
 
}