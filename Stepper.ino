// Include the Arduino Stepper Library
#include <Stepper.h>

// Number of steps per output rotation
const int stepsPerRevolution = 200;

// Create Instance of Stepper library
Stepper stepper1(stepsPerRevolution, 4, 16, 17, 5);
Stepper stepper2(stepsPerRevolution, 18, 19, 21, 22);


void setup()
{
  // set the speed at 60 rpm:
  stepper1.setSpeed(60);
  stepper2.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{
  // step one revolution in one direction:
  Serial.println("clockwise");
  stepper1.step(stepsPerRevolution);
  stepper2.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  stepper1.step(-stepsPerRevolution);
  stepper2.step(-stepsPerRevolution);
  delay(500);
}
