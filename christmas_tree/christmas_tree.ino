// Drag Racing Christmas Tree Controller
// Aaron Huus, ahuus1@gmail. (c) 2015
//

// Sets the arduino pin number for red, yellow, and green
int pre_stage_left = 14;
int pre_stage_right = 15;
int stage_left = 2;
int stage_right = 3;
int amber_left_1 = 4;
int amber_right_1 = 5;
int amber_left_2 = 6;
int amber_right_2 = 7;
int amber_left_3 = 8;
int amber_right_3 = 9;
int green_left = 10;
int green_right = 11;
int red_left = 12;
int red_right = 13;

// the setup routine runs once when you press reset
// Sets each pin to have a pinMode of OUTPUT
// https://www.arduino.cc/en/Reference/pinMode
void setup() {
  pinMode(pre_stage_left, OUTPUT);
  pinMode(pre_stage_right, OUTPUT);
  pinMode(stage_left, OUTPUT);
  pinMode(stage_right, OUTPUT);
  pinMode(amber_left_1, OUTPUT);
  pinMode(amber_right_1, OUTPUT);
  pinMode(amber_left_2, OUTPUT);
  pinMode(amber_right_2, OUTPUT);
  pinMode(amber_left_3, OUTPUT);
  pinMode(amber_right_3, OUTPUT);
  pinMode(green_left, OUTPUT);
  pinMode(green_right, OUTPUT);
  pinMode(red_left, OUTPUT);
  pinMode(red_right, OUTPUT);
}

// Types of Drag Racing Christmas Trees:
// All three large amber lights will flash simultaneously, followed four-tenths of a second later by the green light (called a Pro Tree), 
// The three bulbs will flash consecutively five-tenths of a second apart, followed five-tenths later by the green light (called a Sportsman, or full, Tree).

// Loops over the different cycles indefinitely. One loop takes 4 minutes.
void loop() {

  // Turn the lights off
  digitalWrite(pre_stage_left, LOW);
  digitalWrite(pre_stage_right, LOW);
  digitalWrite(stage_left, LOW);
  digitalWrite(stage_right, LOW);
  digitalWrite(amber_left_1, LOW);
  digitalWrite(amber_right_1, LOW);
  digitalWrite(amber_left_2, LOW);
  digitalWrite(amber_right_2, LOW);
  digitalWrite(amber_left_3, LOW);
  digitalWrite(amber_right_3, LOW);
  digitalWrite(green_left, LOW);
  digitalWrite(green_right, LOW);
  digitalWrite(red_left, LOW);
  digitalWrite(red_right, LOW);

  //int cycle=0;
  //while (cycle < 4){
    
    // PreStage Lights
    digitalWrite(pre_stage_left, HIGH);
    digitalWrite(pre_stage_right, HIGH);
    delay(1000);

    // Stage Lights
    digitalWrite(stage_left, HIGH);
    digitalWrite(stage_right, HIGH);
    delay(1000);

    // Amber Lights
    digitalWrite(amber_left_1, HIGH);
    digitalWrite(amber_right_1, HIGH);
    digitalWrite(amber_left_2, HIGH);
    digitalWrite(amber_right_2, HIGH);
    digitalWrite(amber_left_3, HIGH);
    digitalWrite(amber_right_3, HIGH);
    delay(400);

    // Green Light
    digitalWrite(green_right, HIGH);
    
    // Red Light
    digitalWrite(red_left, HIGH);

    delay(10000);
     
  //}
  
}

void toggleLight(int light, double time_on, double time_off){
    // Turns the light on for 'time_on' seconds and then turns the light off for time_off seconds
    digitalWrite(light, HIGH);
    delay(time_on*1000);
    digitalWrite(light, LOW);
    delay(time_off*1000);  
}
