#include <LiquidCrystal_I2C.h>

#define MOTOR_PIN 3
#define TEMP_SENSOR_PIN A0

// Initialize the I2C LCD with the address 0x35
LiquidCrystal_I2C lcd(35, 16, 2);

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  Serial.begin(9600);

  // Initialize the LCD
  lcd.init();  
  lcd.backlight();
}

void loop() {
  int sensorValue = analogRead(TEMP_SENSOR_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;

  // Display temperature on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C");
  
  
  // Motor speed control
  int motorSpeed = map(temperatureC, 15, 35, 0, 255);
  motorSpeed = constrain(motorSpeed, 0, 255);
  analogWrite(MOTOR_PIN, motorSpeed);
  
 if (temperatureC >= 15 && temperatureC <= 35) {
    // Display message on the LCD
    lcd.setCursor(0, 1);
    lcd.print("The Fan is ON       "); 
 } else {
    lcd.setCursor(0, 1);
    lcd.print("Fan is OFF      ");
 }
delay(1000);
  
} 