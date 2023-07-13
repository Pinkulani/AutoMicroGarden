void Test(void) {
  for (x = 0; x < 10; x++) {
    RDM = rand() % 100;
    TempStorage[x] = rand() % 100;
    Serial.println(TempStorage[x]);
  }
}