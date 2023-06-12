//int TempSensor  ;
int LED = 2;
int Timer;
int Temp[10];
int TempVar;
int x;
int RDM;


void setup() 
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  StartUp(); // Built-in LED turns on during setup

}

void loop() 
{
  for(x = 0; x <10; x++) { 
     RDM = rand() % 100; // give dummy value
     Temp[x] = RDM;   
     Serial.println(Temp[x]);
  } 
  
  Indicator();
  
}
