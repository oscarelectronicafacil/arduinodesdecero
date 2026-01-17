#include <IRremote.hpp>

#define Tecla_0 0xE916FF00
#define Tecla_1 0XF30CFF00
#define Tecla_2 0xE718FF00
#define Tecla_3 0xA15EFF00
#define Tecla_4 0xF708FF00
#define Tecla_5 0xE31CFF00
#define Tecla_6 0xA55AFF00
#define Tecla_7 0xBD42FF00
#define Tecla_8 0xAD52FF00
#define Tecla_9 0xB54AFF00
#define Tecla_Vol1 0xB946FF00
#define Tecla_Vol2 0xEA15FF00
#define Tecla_Off 0xBA45FF00
#define Tecla_ST 0xF20DFF00
#define Tecla_STOP 0xB847FF00
#define Tecla_Play 0xBF40FF00
#define Tecla_Adelante 0xBC43FF00
#define Tecla_Atras 0xBB44FF00

int IR = 13;

int led_0 = 2;
int led_1 = 3;
int led_2 = 4;
int led_3 = 5;
int led_4 = 6;
int led_5 = 7;
int led_6 = 8;
int led_7 = 9;
int led_8 =10;
int led_9 =11;
int led_10 = 12;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IR, DISABLE_LED_FEEDBACK);
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
  pinMode(led_9, OUTPUT);
  pinMode(led_10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(IrReceiver.decode()){
    
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_0){
      Serial.println("Se ha presionado la tecla 0");
      digitalWrite(led_0, HIGH);
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_1){
      Serial.println("Se ha presionado la tecla 1");
      digitalWrite(led_1, HIGH);
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_2){
      Serial.println("Se ha presionado la tecla 2");
      digitalWrite(led_2, HIGH);
    } 
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_3){
      Serial.println("Se ha presionado la tecla 3");
      digitalWrite(led_3, HIGH);
    }   
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_4){
      Serial.println("Se ha presionado la tecla 4");
      digitalWrite(led_4, HIGH);
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_5){
      Serial.println("Se ha presionado la tecla 5");
      digitalWrite(led_5, HIGH);
    
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_6){
      Serial.println("Se ha presionado la tecla 6");
      digitalWrite(led_6, HIGH);

    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_7){
      Serial.println("Se ha presionado la tecla 7");
      digitalWrite(led_7, HIGH);

    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_8){
      Serial.println("Se ha presionado la tecla 8");
      digitalWrite(led_8, HIGH);

    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_9){
      Serial.println("Se ha presionado la tecla 9");
      digitalWrite(led_9, HIGH);

    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_Vol1){
      Serial.println("Se ha presionado la tecla Vol +");
      digitalWrite(led_10, HIGH);

    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_Vol2){
      Serial.println("Se ha presionado la tecla Vol -");
     

    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_ST){
      Serial.println("Se ha presionado la tecla ST/REPT");
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_STOP){
      Serial.println("Se ha presionado la tecla STOP");
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_Off){
      Serial.println("Se ha presionado la tecla OFF");
      digitalWrite(led_0, LOW);
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);


    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_Play){
      Serial.println("Se ha presionado la tecla Play");
      digitalWrite(led_0, LOW);
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      digitalWrite(led_4, LOW);
      digitalWrite(led_5, LOW);
      digitalWrite(led_6, LOW);
      digitalWrite(led_7, LOW);
      digitalWrite(led_8, LOW);
      digitalWrite(led_9, LOW);
      digitalWrite(led_10, LOW);
      digitalWrite(led_0, HIGH);
      delay(500);
      digitalWrite(led_1, HIGH);
        delay(500);
      digitalWrite(led_2, HIGH);
        delay(500);
      digitalWrite(led_3, HIGH);
        delay(500);
      digitalWrite(led_4, HIGH);
        delay(500);
      digitalWrite(led_5, HIGH);
        delay(500);
      digitalWrite(led_6, HIGH);
      delay(500);
      digitalWrite(led_7, HIGH);
        delay(500);
      digitalWrite(led_8, HIGH);
        delay(500);
      digitalWrite(led_9, HIGH);
        delay(500);
      digitalWrite(led_10, HIGH);
        delay(500);
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_Adelante){
      Serial.println("Se ha presionado la tecla Adelante");
    }
    if(IrReceiver.decodedIRData.decodedRawData == Tecla_Atras){
      Serial.println("Se ha presionado la tecla Atras");
      digitalWrite(led_0, HIGH);
      digitalWrite(led_1, HIGH);
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, HIGH);
      digitalWrite(led_4, HIGH);
      digitalWrite(led_5, HIGH);
      digitalWrite(led_6, HIGH);
      digitalWrite(led_7, HIGH);
      digitalWrite(led_8, HIGH);
      digitalWrite(led_9, HIGH);
      digitalWrite(led_10, HIGH);
      digitalWrite(led_0, LOW);
      delay(500);
      digitalWrite(led_1, LOW);
        delay(500);
      digitalWrite(led_2, LOW);
        delay(500);
      digitalWrite(led_3, LOW);
        delay(500);
      digitalWrite(led_4, LOW);
        delay(500);
      digitalWrite(led_5, LOW);
        delay(500);
      digitalWrite(led_6, LOW);
      delay(500);
      digitalWrite(led_7, LOW);
        delay(500);
      digitalWrite(led_8, LOW);
        delay(500);
      digitalWrite(led_9, LOW);
        delay(500);
      digitalWrite(led_10, LOW);
        delay(500);
    }
    IrReceiver.resume();
  }
  delay(100);
}
