const int frootSense = 0;
int frootResistance, high = 0, low = 1023;
int frootDetect;
#include <LiquidCrystal.h>                    //remove this if u don't have LCD, anyways it wont affect.
LiquidCrystal lcd(12,11,5,4,3,2);           //remove this if u don't have LCD, anyways it wont affect.
void setup(){
Serial.begin(9600);
lcd.begin(16, 2);                      //remove this if u don't have LCD, anyways it wont affect.
lcd.clear();                              //remove this if u don't have LCD, anyways it wont affect. 
}
void loop()
{
lcd.clear();                    //remove this if u don't have LCD, anyways it wont affect.
lcd.setCursor(0,0);       //remove this if u don't have LCD, anyways it wont affect. 
lcd.print("Food Detect:");         //remove this if u don't have LCD, anyways it wont affect.
lcd.setCursor(0,1);              //remove this if u don't have LCD, anyways it wont affect.
frootResistance = analogRead(frootSense);
Serial.print("Resistance:");
Serial.print(frootResistance);
Serial.print("\n");
if (frootResistance>500 & frootResistance<700){
Serial.print("Cucumber \n");
lcd.print("Cucumber Ntr:High");     //remove this if u don't have LCD, anyways it wont affect.
}
else if(frootResistance>1 & frootResistance<50){
Serial.print("Lemon");
lcd.print("Lemon Ntr:Mid");    //remove this if u don't have LCD, anyways it wont affect.
}
else if(frootResistance>50 & frootResistance<150){
Serial.print("Brinjal");
lcd.print("Brinjal Ntr:High");    //remove this if u don't have LCD, anyways it wont affect.
}
else if(frootResistance>250 & frootResistance<300){
Serial.print("Tomato");
lcd.print("Tomato Ntr:Low");    //remove this if u don't have LCD, anyways it wont affect.
}
else if(frootResistance>200 & frootResistance<250){
Serial.print("Carrot");
lcd.print("Carrot Ntr:High");    //remove this if u don't have LCD, anyways it wont affect.
}
else {
Serial.print("No Food \n");
lcd.print("No Food");     //remove this if u don't have LCD, anyways it wont affect.
}
delay(1000);
}