// ---------------------------------------------------------------------------
// NewPing library sketch that interfaces with all but the SRF06 sensor using
// only one Arduino pin. You can also interface with the SRF06 using one pin
// if you install a 0.1uf capacitor on the trigger and echo pins of the sensor
// then tie the trigger pin to the Arduino pin (doesn't work with Teensy).
// ---------------------------------------------------------------------------

#include <NewPing.h>

#define trigger_1  2  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define echo_1  3  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define trigger_2  4  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define echo_2  5  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar1(trigger_1, echo_1, MAX_DISTANCE); // NewPing setup of pin and maximum distance.
NewPing sonar2(trigger_2, echo_2, MAX_DISTANCE); // NewPing setup of pin and maximum distance.

int valSonar1, valSonar2;
void setup() {
  Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {

  delay(100);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  valSonar1 = sonar1.ping_cm();
  delay(100);
  valSonar2 = sonar2.ping_cm();
  Serial.print("Ping [1] : ");
  Serial.print(valSonar1); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.print("cm        |         ");                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping [2] : ");
  Serial.print(valSonar2); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
}
