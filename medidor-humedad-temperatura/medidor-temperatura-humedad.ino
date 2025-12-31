//#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal_I2C.h>      //
LiquidCrystal_I2C lcd(0x27,16,2);   //Define LCD address as 0x27. Also try 0x3f if it doesn't work. 

//#include <DHT11.h>

//#include "DHT.h" 
#define PinSensor 2   // Pin digital al que se conecta el sensor
#define Tipo DHT11    // Tipo de sensor
DHT dht(PinSensor, Tipo);

void setup() {
  Serial.begin(9600); 
  dht.begin();
  lcd.init();                     //Init the LCD
  lcd.noBacklight();
}

void loop(){
  delay(5000);   
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();
  Serial.print("Humedad: "); 
  Serial.println(humedad);
  Serial.print("Temperatura:"); 
  Serial.println(temperatura);
  lcd.clear();
  lcd.setCursor(0,0);     
  lcd.print("Temp.: ");
  lcd.print(temperatura);  
  lcd.setCursor(0,1);
  lcd.print("Humedad:");
  lcd.print(humedad);
  //delay(3000);
}