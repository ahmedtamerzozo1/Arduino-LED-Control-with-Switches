// C++ code
//
int red = 6, yellow = 5, green = 11, blue = 10;
int switch1 = 9, switch2 = 8;
int reading1 = 0, reading2 = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
}

void loop() {
  reading1 = digitalRead(switch1);
  reading2 = digitalRead(switch2);

  digitalWrite(red, reading1);
  digitalWrite(yellow, reading1);

  if (reading2 == 1) {
    analogWrite(green, 128);
    analogWrite(blue, 128);
    delay(250);
  } else {
    analogWrite(green, 0);
    analogWrite(blue, 0);
    delay(250);
  }
}