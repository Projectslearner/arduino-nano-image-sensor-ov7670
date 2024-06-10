/*
    Project name : Image Sensor OV7670
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-image-sensor-ov7670
*/

#include <Wire.h>

#define OV7670_ADDRESS_WR   0x21 // OV7670 I2C Write Address
#define OV7670_ADDRESS_RD   0x21 // OV7670 I2C Read Address

void setup()
{
  Serial.begin(9600);
  
  // Initialize I2C communication
  Wire.begin();
  
  // Reset the OV7670
  OV7670_reset();
}

void loop() 
{
  // Your code here
}

void OV7670_reset() {
  Wire.beginTransmission(OV7670_ADDRESS_WR);
  Wire.write(0x12); // Register Address: Register 12 (COM7)
  Wire.write(0x80); // Software reset
  Wire.endTransmission();
  delay(100); // Wait for reset to complete
}
