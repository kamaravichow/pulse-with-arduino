/**
 * Code to get the raw analog data from the pulse sensor
 * Sensor : https://pulsesensor.com
**/
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(0));
  delay(100);
}