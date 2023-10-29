#include <Arduino.h>

// LED Pin definition (GPIO2 on ESP8266 NodeMCU board)
const int ledPin = 2;

// put function declarations here:
int myFunction(int, int);

void setup()
{
  // put your setup code here, to run once:

  // Initialize the LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);

  int result = myFunction(2, 3);
}

void loop()
{
  // put your main code here, to run repeatedly:

  // Turn the LED on (active-low, so we write LOW to turn on)
  digitalWrite(ledPin, LOW);
  delay(1000); // wait for a second

  // Turn the LED off
  digitalWrite(ledPin, HIGH);
  delay(1000); // wait for a second
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}
