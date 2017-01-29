#include "elapsedMillis.h"

elapsedMillis timeElapsed; //declare global if you don't want it reset every time loop runs

// Pin 13 has an LED connected on most Arduino boards.
int led = D7;

// delay in milliseconds between blinks of the LED
unsigned int interval = 1000;

// state of the LED = LOW is off, HIGH is on
boolean ledState = LOW;

void setup() 
{                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

void loop()
{
  if (timeElapsed > interval) 
  {				
      ledState = !ledState;         // toggle the state from HIGH to LOW to HIGH to LOW ... 
      digitalWrite(led, ledState);
      timeElapsed = 0;              // reset the counter to 0 so the counting starts over...
  }
}
