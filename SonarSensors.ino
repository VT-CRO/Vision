#include <NewPing.h>
const int NUM_SENSORS = 2;
const float MAX_DISTANCE = 500;
float sensorData[NUM_SENSORS] {};

NewPing sonar[NUM_SENSORS] = {     // Sensor object array.
  NewPing(2, 2, MAX_DISTANCE), // Each sensor's trigger pin, echo pin, and max distance to ping.
  NewPing(3, 3, MAX_DISTANCE), // For all of these, the trigger pin and echo pin can be the same since they do not do anything simultaneously
  //NewPing(4, 4, MAX_DISTANCE),
  //NewPing(5, 5, MAX_DISTANCE),
  // ADD MORE AS NEEDED
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < NUM_SENSORS; i++) {
    sensorData[i] = sonar[i].ping_cm();
    delay(33);
    Serial.println();
  }
}
