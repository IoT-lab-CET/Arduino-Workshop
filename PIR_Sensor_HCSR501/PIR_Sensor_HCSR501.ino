#define ledPin 11
#define pirPin 2
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("PIR Sensor HCSR501 Interfacing \n");
  pinMode(ledPin,OUTPUT);
  pinMode(pirPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pirPin))
 { 
  digitalWrite(ledPin,HIGH);
  Serial.println("Motion Detected");
  while(digitalRead(pirPin)); 
 }
else 
   digitalWrite(ledPin,LOW);

}
