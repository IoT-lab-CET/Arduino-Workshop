#include "DHT.h"

#define DHTPIN 2     // what digital pin we're connected to


#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321


DHT dht(DHTPIN, DHTTYPE);
float h,t;

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 Interfacing!\n");

  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);


 h = dht.readHumidity();
 t = dht.readTemperature();
  

  // Check if any reads failed and exit early (to try again).//isnan-> IS Not An Number
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C \n");
  
}
