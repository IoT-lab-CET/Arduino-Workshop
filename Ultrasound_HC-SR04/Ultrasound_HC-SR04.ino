
#define echoPin 7 // Echo Pin
#define trigPin 8 // Trigger Pin



long duration, distance; // Duration used to calculate distance

void setup() {
 Serial.begin (9600);
 Serial.println("Ultrasound Sensor HC-SR04 Interfacing \n"); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);

}

void loop() {
/* The following trigPin/echoPin cycle is used to determine the
 distance of the nearest object by bouncing soundwaves off of it. */ 
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 
 //Calculate the distance (in cm) based on the speed of sound.
 distance = duration/58.2;
 
 /* Send the distance to the computer using Serial protocol, and
 turn LED OFF to indicate successful reading. */
 Serial.print(distance);
 Serial.println(" cm");
  
 //Delay 50ms before next reading.
 delay(50);
}
