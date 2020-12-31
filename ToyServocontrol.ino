
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

void bindnotes(int num_notes_to_bind){  //binds notes played by dividing the time that they have to play the notes
  int divisor = num_notes_to_bind;
  delaytimedown = delaytimedown / divisor;
  delaytimeup = delaytimeup / divisor;
}

void endbind(){                        // sets the tempo back to the origional tempo values
    delaytimedown = 300;
    delaytimeup = 200;
}
 
void d(){                 //key hit for the note d and it's inital starting point
  delay(delaytimedown);
  myservo5.write(pos5up);
  delay(delaytimeup);
  myservo5.write(pos5);
}
void d_initial(){
  myservo5.write(pos5);
}
void c(){                //key hit for the note c and it's inital starting point
  delay(delaytimedown);
  myservo4.write(pos4up);
  delay(delaytimeup);
  myservo4.write(pos4);
}
void c_initial(){
  myservo4.write(pos4);
}
void b(){                 //key hit for the note b and it's inital starting point
  delay(delaytimedown);
  myservo3.write(pos3up);
  delay(delaytimeup);
  myservo3.write(pos3);
}
void b_initial(){
  myservo3.write(pos3);
}
void a(){                 //key hit for the note a and it's inital starting point
  delay(delaytimedown);
  myservo2.write(pos2up);
  delay(delaytimeup);
  myservo2.write(pos2);
}
void a_initial(){
  myservo2.write(pos2);
}


void g(){                 //key hit for the note g and it's inital starting point
  delay(delaytimedown);
  myservo1.write(pos1up);
  delay(delaytimeup);
  myservo1.write(pos1);
}
void g_initial(){
  myservo1.write(pos1);
}
void startingpoint(){     //The down position of all the keys
  g_initial();
  a_initial();
  b_initial();
  c_initial();
  d_initial();
}
//--------------------------------double note functions beginning----------------------- the G's
void play_d_g(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo5.write(pos5up);
  delay(delaytimeup);
  d_initial();
  g_initial();
}
void play_c_g(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo4.write(pos4up);
  delay(delaytimeup);
  c_initial();
  g_initial();
}
void play_b_g(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo3.write(pos3up);
  delay(delaytimeup);
  b_initial();
  g_initial();
}
void play_a_g(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo2.write(pos2up);
  delay(delaytimeup);
  a_initial();
  g_initial();
}
//---------------------------------------------------------------- the A's
void play_c_a(){
  delay(delaytimedown);
  myservo4.write(pos4up);
  myservo2.write(pos2up);
  delay(delaytimeup);
  c_initial();
  a_initial();
}
void play_d_a(){
  delay(delaytimedown);
  myservo5.write(pos5up);
  myservo2.write(pos2up);
  delay(delaytimeup);
  d_initial();
  a_initial();
}
void play_g_a(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo2.write(pos2up);
  delay(delaytimeup);
  g_initial();
  a_initial();
}
void play_b_a(){
  delay(delaytimedown);
  myservo3.write(pos3up);
  myservo2.write(pos2up);
  delay(delaytimeup);
  b_initial();
  a_initial();
}
//------------------------------------------------The B's
void play_g_b(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo3.write(pos3up);
  delay(delaytimeup);
  g_initial();
  b_initial();
}
void play_c_b(){
  delay(delaytimedown);
  myservo4.write(pos4up);
  myservo3.write(pos3up);
  delay(delaytimeup);
  c_initial();
  b_initial();
}
void play_a_b(){
  delay(delaytimedown);
  myservo2.write(pos2up);
  myservo3.write(pos3up);
  delay(delaytimeup);
  a_initial();
  b_initial();
}
void play_d_b(){
  delay(delaytimedown);
  myservo5.write(pos5up);
  myservo3.write(pos3up);
  delay(delaytimeup);
  d_initial();
  b_initial();
}
//----------------------------------------------The C's
void play_b_c(){
  delay(delaytimedown);
  myservo3.write(pos3up);
  myservo4.write(pos4up);
  delay(delaytimeup);
  b_initial();
  c_initial();
}
void play_g_c(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo4.write(pos4up);
  delay(delaytimeup);
  g_initial();
  c_initial();
}
void play_d_c(){
  delay(delaytimedown);
  myservo5.write(pos5up);
  myservo4.write(pos4up);
  delay(delaytimeup);
  d_initial();
  c_initial();
}
void play_a_c(){
  delay(delaytimedown);
  myservo2.write(pos2up);
  myservo4.write(pos4up);
  delay(delaytimeup);
  a_initial();
  c_initial();
}
//------------------------------------------------The D's

void play_c_d(){
  delay(delaytimedown);
  myservo4.write(pos4up);
  myservo5.write(pos5up);
  delay(delaytimeup);
  c_initial();
  d_initial();
}
void play_g_d(){
  delay(delaytimedown);
  myservo1.write(pos1up);
  myservo5.write(pos5up);
  delay(delaytimeup);
  g_initial();
  d_initial();
}
void play_b_d(){
  delay(delaytimedown);
  myservo3.write(pos3up);
  myservo5.write(pos5up);
  delay(delaytimeup);
  b_initial();
  d_initial();
}
void play_a_d(){
  delay(delaytimedown);
  myservo2.write(pos2up);
  myservo5.write(pos5up);
  delay(delaytimeup);
  a_initial();
  d_initial();
}
//---------------------------------------------------------The Songs-------------------------------------------------------------


void ode_to_joy(){       //The fourth – and final – movement of Ludwig van Beethoven’s Symphony No. 9, first performed in Vienna in 1824. 
  b();
  b();
  c();
  d();
  d();
  c();
  b();
  a();
  g();
  g();
  a();
  b();
  b();
  delay(500);
  bindnotes(2);
  a();
  a();
  endbind();
  delay(500);
  b();
  b();
  c();
  d();
  d();
  c();
  b();
  a();
  g();
  g();
  a();
  b();
  a();
  delay(500);
  bindnotes(2);
  g();
  g();
  endbind();
  delay(500);
  a();
  a();
  b();
  g();
  a();
  bindnotes(2);
  b();
  c();
  endbind();
  b();
  g();
  a();
  bindnotes(2);
  b();
  c();
  endbind();
  b();
  a();
  g();
  bindnotes(2);
  a();
  d();
  endbind();
  delay(500);
  b();
  b();
  c();
  d();
  d();
  c();
  b();
  a();
  g();
  g();
  a();
  b();
  a();
  delay(500);
  bindnotes(2);
  g();
  g();
  endbind();
  delay(5000);
}
//-----------------------"Für Elise" (German for For Elise) is the common name of the "Bagatelle in A minor", written by Ludwig van Beethoven in 1810.
void fur_elise(){
  bindnotes(2);
  d();
  c();
  d();
  c();
  d();
  b();
  c();
  b();
  a();
  delay(500);
  g();
  a();
  b();
  c();
  delay(500);
  a();
  b();
  c();
  d();
  delay(500);
  // block 6
  g();
  d();
  c();
  d();
  c();
  d();
  b();
  c();
  b();
  g();
  delay(500);
  g();
  a();
  b();
  c();
  delay(500);
  g();
  c();
  b();
  a();
  delay(500);
  // block 11
  d();
  c();
  d();
  c();
  d();
  b();
  c();
  b();
  a();
  delay(500);
  g();
  g();
  a();
  b();
  delay(500);
  g();
  g();
  b();
  c();
  g();
  delay(500);
  d();
  d();
  c();
  d();
  c();
  d();
  b();
  c();
  b();
  g();
  delay(500);
  g();
  a();
  b();
  c();
  delay(500);
  g();
  c();
  b();
  a();
  delay(500);
  a();
  b();
  c();
  d();
  delay(500);
  a();
  d();
  c();
  b();
  delay(500);
  g();
  d();
  c();
  b();
  delay(500);
  g();
  c();
  b();
  a();
  delay(500);
  g();
  c();
  delay(500);
  b();
  b();
  d();
  a();
  //16
  d();
  c();
  d();
  c();
  d();
  c();
  d();
  c();
  d();
  b();
  c();
  b();
  a();
  delay(500);
  g();
  a();
  b();
  g();
  a();
  b();
  g();
  a();
  b();
  c();
  delay(500);
  g();
  d();
  c();
  // block 21
  d();
  c();
  d();
  b();
  c();
  b();
  a();
  delay(500);
  g();
  a();
  b();
  c();
  delay(500);
  b();
  c();
  d();
  a();
  endbind();
}
//-------------The title comes from the main character's name, Axel Foley (played by Eddie Murphy in Beverly Hills Cop)
void axel_f(){    
  g();
  bindnotes(2);
  b();
  a();
  endbind();
  bindnotes(2.7);
  a();
  b();
  endbind();
  bindnotes(2);
  a();
  g();
  endbind();
  a();
  bindnotes(2);
  b();
  g();
  endbind();
  bindnotes(2.7);
  g();
  c();
  endbind();
  bindnotes(2);
  b();
  a();
  g();
  c();
  d();
  endbind();

  bindnotes(2.7);
  b();
  a();
  
  a();
  g();
  endbind();
  bindnotes(2);
  b();
  a();
  endbind();
  delay(1000);
  
  g();
  b();
  bindnotes(2.7);
  a();
  a();
  b();
  a();
  g();

  endbind();
  a();
  b();
  endbind();
  bindnotes(2.7);
  g();
  g();
  c();
  b();
  a();
  endbind();
  bindnotes(2);
  g();
  c();
  d();
  endbind();

  bindnotes(2.7);
  b();
  a();
  
  a();
  g();
  endbind();
  bindnotes(2);
  b();
  a();
  endbind();
  delay(1000);
}
//--------------------------It is the fifth of his nine symphonies. It was written between 1804 and 1808.(this is just the intro)
void symphony_num5(){
  bindnotes(2);
  play_a_b();
  play_a_b();
  play_a_b();
  g();
  delay(1000);
  play_a_b();
  play_a_b();
  play_a_b();
  g();
  endbind();
  delay(1000);

  bindnotes(2);
  a();
  a();
  a();
  g();
  b();
  b();
  b();
  a();
  c();
  c();
  c();
  b();
  delay(500);

  g();
  b();
  b();
  b();
  play_g_a();
  c();
  c();
  c();
  play_g_b();
  delay(250);
  b();
  d();
  d();
  c();
  b();

  b();
  d();
  d();
  c();
  b();
  delay(250);
  b();
  play_g_a();
  play_g_a();
  play_g_c();
  delay(250);
  play_g_b();
  delay(500);

  play_g_a();
  delay(550);
  play_b_d();
  play_b_d();
  play_b_d();
  play_g_c();
  delay(500);
  d();
  d();
  d();
  c();
  b();
  b();
  b();
  a();
  g();
  g();
  g();

  d();
  d();
  d();
  c();
  b();
  b();
  b();
  a();
  g();
  g();
  g();
  play_c_d();
  play_c_d();
  play_c_d();
  play_c_b();
  play_g_a();
  play_b_g();
  play_b_g();

  play_g_a();
  play_g_b();
  play_g_c();
  play_g_d();
  play_g_d();
  delay(250);
  play_g_c();
  play_g_c();
  play_g_c();
  d();

  play_g_a();
  g();
  g();
  b();
  play_a_b();
  a();
  a();
  c();
  play_a_c();
  b();
  b();
  d();

  c();
  d();
  d();
  d();
  c();
  a();
  a();
  a();

  d();
  c();
  b();
  b();
  a();
  g();
  g();
  g();

  d();
  d();
  d();
  c();
  b();
  a();
  a();
  g();
  endbind();  
}

void loop() {
  startingpoint();
  delay(5000);
  ode_to_joy();
  delay(2000);
  fur_elise();
  delay(2000);
  axel_f();
  delay(2000);
  symphony_num5();
}
