int mpin1a = 9;
int mpin1b = 10;
int mpin2a = 11;
int mpin2b = 12;
int dist;

void setup() {
  pinMode(mpin1a, OUTPUT);
  pinMode(mpin1b, OUTPUT);
  pinMode(mpin2a, OUTPUT);
  pinMode(mpin2b, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    dist = Serial.parseInt();
    if (dist >= 300) { // moves forward cw
      digitalWrite(mpin1a, HIGH);
      digitalWrite(mpin1b, LOW);
      digitalWrite(mpin2a, HIGH);
      digitalWrite(mpin2b, LOW);
    }
    else { // moves backward acw
      digitalWrite(mpin1a, LOW); 
      digitalWrite(mpin1b, HIGH); 
      digitalWrite(mpin2a, LOW); 
      digitalWrite(mpin2b, HIGH); 
    }
  }
}
