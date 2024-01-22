int buzzPin = 12;
double c3 = 130.8;
double d3 = 146.8;
double e3 = 164.8;
double f3 = 174.6;
double fSharp = 185;
double g3 = 196;
double a3 = 220;
double b3 = 246.9;
double c4 = 261.6;
double d4 = 293.7;
double e4 = 329.6;
double f4 = 349.2;
double g4 = 392.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}
void sound(double hertz, int delayTime)
{
  tone(buzzPin, hertz);
  delay(delayTime);
  noTone(buzzPin);
  delay(100);
}
void rest(int delayTime)
{
  delay(delayTime);
}
void loop() {

  // put your main code here, to run repeatedly:
  //National Anthem of the United States of America

  for(int i = 0; i < 2; i++)
  {
    rest(75);
    sound(g3, 500);
    sound(e3, 500);
    sound(c3, 1000);
    sound(e3, 1000);
    sound(g3, 1000);
    sound(c4, 1500);
    rest(500);

    sound(e4, 500);
    sound(d4, 500);
    sound(c4, 1000);
    sound(e3, 1000);
    sound(fSharp, 1000);
    sound(g3, 1500);
    rest(500);

    sound(g3, 500);
    sound(g3, 500);
    sound(e4, 1500);
    sound(d4, 500);
    sound(c4, 1000);
    sound(b3, 1500);
    rest(500);

    sound(a3, 500);
    sound(b3, 500);
    sound(c4, 1000);
    sound(c4, 1000);
    sound(g3, 1000);
    sound(e3, 1000);
    sound(c3, 1000);
  }

  sound(e4, 500);
  sound(e4, 500);
  sound(e4, 1000);
  sound(f4, 1000);
  sound(g4, 1000);
  sound(g4, 1500);
  rest(500);

  sound(f4, 500);
  sound(e4, 500);
  sound(d4, 1000);
  sound(e4, 1000);
  sound(f4, 1000);
  sound(f4, 1500);
  rest(500);

  sound(f4, 1000);
  sound(e4, 1500);
  sound(d4, 500);
  sound(c4, 1000);
  sound(b3, 1500);
  rest(500);

  sound(a3, 500);
  sound(b3, 500);
  sound(c4, 1000);
  sound(e3, 1000);
  sound(fSharp, 1000);
  sound(g3, 1500);
  rest(500);

  sound(g3, 1000);
  sound(c4, 1000);
  sound(c4, 1000);
  sound(c4, 500);
  sound(b3, 500);
  sound(a3, 1000);
  sound(a3, 1000);
  sound(a3, 1000);

  sound(d4, 1000);
  sound(f4, 500);
  sound(e4, 500);
  sound(d4, 500);
  sound(c4, 500);
  sound(c4, 1000);
  sound(b3, 1500);
  rest(500);

  sound(g3, 500);
  sound(g3, 500);
  sound(c4, 1500);
  sound(d4, 500);
  sound(e4, 500);
  sound(f4, 500);
  sound(g4, 2000);
  rest(100);

  sound(c4, 500);
  sound(d4, 500);
  sound(e4, 1500);
  sound(f4, 500);
  sound(d4, 1250);
  sound(c4, 3000);

  while(Serial.available() == 0){}

}