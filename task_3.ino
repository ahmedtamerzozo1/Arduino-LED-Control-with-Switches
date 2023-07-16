// C++ code
//
int led1    = 12;
int led2    = 11;
int led4    = 8 ;
int led5    = 9 ;
int switch1 = 2 ;
int switch2 = 3 ;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(2 , INPUT );
  pinMode(3 , INPUT );
}

void loop() {

  if (digitalRead (2)) {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
  } 
  else {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  
  if (digitalRead (3)) {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
  } 
  else {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  }
}