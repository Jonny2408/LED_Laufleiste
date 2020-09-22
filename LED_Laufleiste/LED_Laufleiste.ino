/* Programm: LED_Laufleiste
    Version 1.0 17.9.2020
    Programmierer J.Schmidt

    Hardware: Arduion; LED Laufleiste an, LEDs von Pin 2-9
*/

byte led[9]={2,3,4,5,6,7,8,9};

void setup()
{
  for(byte i=0;i<8;i++)
  {
    pinMode(led[i],OUTPUT);
  }
}

void loop()
{
  for(byte i=0;i<8
  ;i++)
  {
    digitalWrite(led[i],HIGH);
    delay(500);
    digitalWrite(led[i],LOW);
  }
  
}
