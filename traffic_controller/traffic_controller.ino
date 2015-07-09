// Traffic Light and Pedestrian Crossing Controller
// Aaron Huus, ahuus1@gmail. (c) 2015
//
// Cycles through a standard stop light cycle.
// Adapted from: http://www.instructables.com/id/Traffic-Signal-Stop-Light-Wiring-with-Arduino-Co/

// Sets the arduino pin number for red, yellow, and green
int red = 12;
int yellow = 11;
int green = 10;

// the setup routine runs once when you press reset
// Sets each pin to have a pinMode of OUTPUT
// https://www.arduino.cc/en/Reference/pinMode
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

// Loops over the different cycles indefinitely. One loop takes 4 minutes.
void loop() {

  // Turn the lights off
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);

  // Repeats the standard cycle 4 times. One cycle takes 30 seconds for a total of 2 minutes
  int cycle = 0;
  while (cycle < 1) {
    // Turns the green light on for 13 seconds, then the yellow light for 4 seconds, and then the red light for 13 seconds.
    toggleLight(green,13,0);
    toggleLight(yellow,4,0);
    toggleLight(red,13,0);
    cycle++;
  }

  // Power outage mode where the red light flashes 60 times for 1 minute
  cycle = 0;
  while (cycle < 60) {
    toggleLight(red,0.5,0.5);
    cycle++;
  }
  
  // Late night cycle where the yellow light flashes 60 times for 1 minute
  cycle = 0;
  while (cycle < 60) {
    toggleLight(yellow,0.5,0.5);
    cycle++;
  }
  
}

void toggleLight(int light, double time_on, double time_off){
    // Turns the light on for 'time_on' seconds and then turns the light off for time_off seconds
    digitalWrite(light, HIGH);
    delay(time_on*1000);
    digitalWrite(light, LOW);
    delay(time_off*1000);  
}
