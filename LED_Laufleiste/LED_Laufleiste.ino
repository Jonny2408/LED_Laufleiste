/* Programm: LED_Laufleiste
    Version 1.0 17.9.2020
    Programmierer J.Schmidt

    Hardware: Arduion; LED Laufleiste an, LEDs von Pin 8-11
*/

#define LED1 8   // LED 1
#define LED2 9   // LED 2
#define LED3 10  // LED 3
#define LED4 11  // LED 4
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);  // LED 1 blinkt auf
  delay(200);
  digitalWrite(LED1, LOW); 

  digitalWrite(LED2, HIGH); // LED 2 blinkt auf
  delay(200);
  digitalWrite(LED2, LOW);

  digitalWrite(LED3, HIGH); // LED 3 blinkt auf
  delay(200);
  digitalWrite(LED3, LOW);

  digitalWrite(LED4, HIGH); // LED 4 blinkt auf
  delay(200);
  digitalWrite(LED4, LOW);
}
