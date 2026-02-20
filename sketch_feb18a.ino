// Mittwoch,18.02.26 Kosan Kurschid
// AD Wandler 
int analogPin = A3;
 int val = 0;
void setup() {
 
 Serial.begin(9600);
 
}

void loop() {
  val = analogRead (analogPin);
  Serial.println(val);
  delay(100);

}
