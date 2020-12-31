
const int serv1 = 8;
const int serv2 = 9;
const int serv3 = 10;
const int serv4 = 11;
const int serv5 = 12;
#include <Servo.h>

Servo myservo1; // create servo object to control a servo
Servo myservo2;  
Servo myservo3;  
Servo myservo4;  
Servo myservo5;  
// twelve servo objects can be created on most boards

const int pos1 = 177;    // variable to store the servo position
const int pos2 = 40;
const int pos3 = 30;
const int pos4 = 115;
const int pos5 = 130;
const int pos1up = 160;
const int pos2up = 15;
const int pos3up = 90;
const int pos4up = 130;
const int pos5up = 160;
int delaytimedown = 300;
int delaytimeup = 200;


void setup() {
  myservo1.attach(serv1);  // attaches the servo on pin 8 to the servo object
  myservo2.attach(serv2);  // attaches the servo on pin 9 to the servo object
  myservo3.attach(serv3);  // attaches the servo on pin 10 to the servo object
  myservo4.attach(serv4);  // attaches the servo on pin 11 to the servo object
  myservo5.attach(serv5);  // attaches the servo on pin 12 to the servo object
}



void loop() {
  delay(3000);
  myservo1.write(pos1);  // puts the pins in the down position
  myservo2.write(pos2);  
  myservo3.write(pos3); 
  myservo4.write(pos4);  
  myservo5.write(pos5);

  delay(3000);
  myservo1.write(pos1up);  // puts the servos in the up position
  myservo2.write(pos2up); 
  myservo3.write(pos3up);  
  myservo4.write(pos4up); 
  myservo5.write(pos5up);
}
