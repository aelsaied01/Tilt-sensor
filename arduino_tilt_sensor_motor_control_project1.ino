// C++ code
//
int tilt=14;
int motor=3;
int reading=0;
void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(tilt, INPUT);
}

void loop()
{
 reading=analogRead(tilt);
  analogWrite(motor,map(reading,0,1028,0,255));
}