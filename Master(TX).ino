const int tpin = 12; 
const int epin = 13; 
long dura; 
int dist;

void setup() {
  Serial.begin(9600);
  pinMode(tpin, OUTPUT); 
  pinMode(epin, INPUT);
}

void loop() {
  digitalWrite(tpin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(tpin, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(tpin, LOW); 
  dura = pulseIn(epin, HIGH); 
  dist = dura * 0.034 / 2; 
  Serial.print("Distance : "); 
  Serial.println(dist); 
  delay(100); 
}
