#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int analoginput=0;
float vout=0.0;
float vin=0.0;
int value=0;

void setup()
{
  pinMode(analoginput,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("MILIOHM METER");
  lcd.setCursor(1,1);
  lcd.print("Range:0.01 to 1" );
  delay(2000);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Resistance(ohm):");

}
void loop(){
 value = analogRead(analoginput);
 vout= (value*4.9)/1023;
 vin= (vout/4.1);
 lcd.setCursor(3,1);
 lcd.print(vin,3);
 lcd.print("Ohms");
 delay(500);
}
