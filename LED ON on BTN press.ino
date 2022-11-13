#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#define P1 3
#define P2 4
#define P3 A2
#define P4 A1

#define LED1 7
#define LED2 8
String LED1status = "OFF";
String LED2status = "OFF";

LiquidCrystal_PCF8574 lcd(0x27);

void setup()
{
  	lcd.begin(16, 2); 
	  pinMode(P1, INPUT);
  	pinMode(P2, INPUT);
  	pinMode(P3, INPUT);
  	pinMode(P4, INPUT);
  
  	pinMode(LED1, OUTPUT);
  	pinMode(LED2, OUTPUT);
    lcd.setBacklight(10);
    lcd.home();
    lcd.clear();
}	

void loop()
{
  if(digitalRead(P1) == LOW){
    digitalWrite(LED1, 1);
    LED1status = "ON ";
  }
  if(digitalRead(P2) == LOW){
    digitalWrite(LED1, 0);
    LED1status = "OFF";
  }
  
  if(digitalRead(P3) == LOW){
    digitalWrite(LED2, 1);
    LED2status = "ON ";
  }
  if(digitalRead(P4) == LOW){
    digitalWrite(LED2, 0);
    LED2status = "OFF";
  }
  
  lcd.setCursor(0,0);
  lcd.print("LED1:" + LED1status);
  lcd.setCursor(0,1);
  lcd.print("LED2:" + LED2status);
}
