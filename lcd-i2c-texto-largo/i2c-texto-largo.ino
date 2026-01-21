#include <Wire.h>

#include <LiquidCrystal_I2C.h>      //
LiquidCrystal_I2C lcd(0x27,16,2);   //Define LCD address as 0x27. Also try 0x3f if it doesn't work. 
//Los pines del I2C se conectan al A4 Y A5 del arduino

String myString="Esto es una prueba desde kits de electronica";
String cadena= "";
void setup() {
  Serial.begin(9600); 
  lcd.init();                     //Init the LCD
  lcd.home();
}

void loop(){
  delay(1000);   
  lcd.clear();
  lcd.setCursor(0,0);

  for(int i = 0; i<=myString.length() ; ++i){
    delay(500);
    lcd.clear();
    cadena = myString.substring(i,16+i);
    lcd.print(cadena);
  }
  //delay(3000);
}