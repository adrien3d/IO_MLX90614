/***************************************************************************
  This is a library for the MLX90614 InfraRed temperature sensor

  Designed to work with all kinds of MLX90614 Breakout Boards

  These sensors use I2C, 2 pins are required to interface.

  Written by Adrien Chapelet for Iotech
 ***************************************************************************/

#include <Wire.h>
#include "IO_MLX90614.h"

IO_MLX90614 mlx = IO_MLX90614();

void setup() {
  Serial.begin(9600);

  Serial.println("IoTech MLX90614 test");  

  mlx.begin();  
}

void loop() {
  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempC()); 
  Serial.print("*C\tObject = "); Serial.print(mlx.readObjectTempC()); Serial.println("*C");
  Serial.print("Ambient = "); Serial.print(mlx.readAmbientTempF()); 
  Serial.print("*F\tObject = "); Serial.print(mlx.readObjectTempF()); Serial.println("*F");

  Serial.println();
  delay(500);
}