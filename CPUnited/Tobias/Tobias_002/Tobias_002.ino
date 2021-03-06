#include "config.h"
/*-------------------------------------------------------------------------------------
                                     SETUP
  -------------------------------------------------------------------------------------*/
void setup()
{
  //Serial.begin(9600);

  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);

  pinMode(Button, INPUT);

  Timer1.initialize(3000); // set a timer of length 100000 microseconds (or 0.1 sec - or 10Hz )
  Timer1.attachInterrupt( timerIsr ); // attach the service routine here

  attachInterrupt(digitalPinToInterrupt(Button),  changeState, FALLING);
}

/*-------------------------------------------------------------------------------------
                                     LOOP
  -------------------------------------------------------------------------------------*/


void loop()
{
  modeSumo();
  hunting();
  controleTempo();
}
