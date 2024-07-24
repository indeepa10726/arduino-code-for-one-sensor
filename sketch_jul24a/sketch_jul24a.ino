#include <Wire.h>                                  //include the Wire library
#include <BH1750.h>                                //include the BH1750 library


BH1750 lightMeter;                                 //Create a example using BH1750 sensor

void setup() {
  Serial . begin(9600);                            //use baud rate as 9600
  Wire .begin();                                   //initialize the I2C communication
  lightMeter . begin();                            //Initialize the BH1750 sensor        
  Serial . println(F("BH1750 Test"));              //print the massage

}

void loop() {                                      
  uint16_t lux = lightMeter.readLightLevel();      //read the light level
  Serial.print("Light:");                          //print hte label as "Light: "
  Serial.print(lux);                               //print the light level
  Serial.println("lx");                            //print thr unit as "lx"
  delay(1000);                                     //delay for 1 second

}
