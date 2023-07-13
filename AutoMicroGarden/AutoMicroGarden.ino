// int TempSensor 2;
int LED = 2;

// StartUp()
int Timer;

int TempStorage[10];
int Temp;
int x;

int RDM;
int SensorType;


void setup() 
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  StartUp(); // Built-in LED turns on during setup
  SensorType = 1;
  
}

void loop() 
{
  Test();
  
  Indicator();
  
}
