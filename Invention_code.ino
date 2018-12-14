// Include the file for the ultrasonic sensor
#include <NewPing.h>


//declare the values and sensor pins
int LedPin1 = 10;
int trigger = 2;
int echo = 4;

//declare the ultrasonic sensor
NewPing sonar (trigger, echo);

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin1, OUTPUT);
  //Turn on the Serial port (Sonar)
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Program the ultrasonic sensor so that you can read the values
int distance = sonar.ping_cm();
Serial.println(distance);


//Main invention code
 if(distance < 30)
 {
  digitalWrite(LedPin1, HIGH);
  delay(3600000);
  digitalWrite(LedPin1, LOW);
 }
 
}
