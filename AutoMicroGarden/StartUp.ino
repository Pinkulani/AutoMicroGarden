void StartUp(void) 
{
  Timer = 100; // LED will Blink for 10 Seconds when loading the program
  while (Timer > 1) 
  {
    digitalWrite(LED, HIGH);
    delay(100);
    Timer --;
  }
  digitalWrite(LED, LOW);
}