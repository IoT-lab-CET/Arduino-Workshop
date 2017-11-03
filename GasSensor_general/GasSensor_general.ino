//MQ-6 Combustible Gas Propane / Butane / LPG / LNG
//MQ-5 LPG Natural gas Methane Butane Propane
//MQ-9 Carbon Monoxide Gas Sensor 

int sensorpin=A0;
int cv=610; // critical value
int sensorread=0;

void setup() {
  // put your setup code here, to run once:
String sensorid="MQ-9";  //replace sensor name
Serial.begin(9600);
Serial.println(sensorid + " Gas Sensor Interfacing");
pinMode(sensorpin,INPUT);

}

String gas="CO";

void loop() {
  // put your main code here, to run repeatedly:
  sensorread=analogRead(sensorpin);
  Serial.print("The " + gas + " sensor reading is : ");
  Serial.println(sensorread);
  

  if(sensorread>cv)
  Serial.println(gas + " detected!!!");
  

}
