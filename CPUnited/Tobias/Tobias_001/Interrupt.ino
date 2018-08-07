/*-------------------------------------------------------------------------------------
                                     LOOP
-------------------------------------------------------------------------------------*/
void timerIsr()
{
  //Serial.println(digitalRead(Button));
  //Serial.println(analogRead(IR1));
  //Serial.println(digitalRead(2));
  Serial.print("Ping [1] : ");
  Serial.print(sonar1.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(50);
  Serial.print("Ping [2] : ");
  Serial.print(sonar2.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
}
void changeState()
{
  //flags = flags | B10000000;
}
