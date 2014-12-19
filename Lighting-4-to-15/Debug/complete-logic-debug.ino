/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(0, OUTPUT);
  digitalWrite(0, LOW);
  pinMode(1, OUTPUT);
  digitalWrite(1, LOW);
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(6, OUTPUT);
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(6, HIGH);
}
void loop() {
  // read the state of the pushbutton value:
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  buttonState = digitalRead(12);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(13, HIGH);
  }
  else {
    // turn LED off:
    digitalWrite(13, LOW);
  }


}
