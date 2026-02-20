Here is the source code  if the file doesn't work or is corrupted 



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
