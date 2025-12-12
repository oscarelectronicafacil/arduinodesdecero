#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

int numero = 0;
float firstN;
float secondN;
float result;
String operando;
float dato=0;
bool error = false;
float minDato = -99;
float maxDato = 99;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
  Serial.setTimeout(50000);

}

void loop() {
  // put your main code here, to run repeatedly:
  firstN = leer_primer_num();
  Serial.print("El primer numero es:");
  Serial.println(firstN);
  //imprime_dato(firstN);
  secondN = leer_segundo_num();
  Serial.print("El segundo numero es:");
  Serial.println(secondN);
  //imprime_dato(secondN);
  leer_operador();
  calcular();
  delay(5000);
}

void leer_operador(){
    int error = 1;
    int operador;
    Serial.println("Introduce el operando: + - * /");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" +, -, *, /");
    lcd.setCursor(0,1);
    lcd.print(" 1, 2, 3, 4");
    while(error){
      while (Serial.available() == 0);
        operador = Serial.parseInt();
        if(operador == 1){
          //Serial.print("El operador es +");
          operando = "+";
          error = 0;
        }
        if(operador == 2){
          //Serial.print("El operador es -");
          operando = "-";
          error = 0;
        }
        if(operador == 3){
          //Serial.print("El operador es *");
          operando = "*";
          error = 0;
        }
        if(operador == 4){
          //Serial.print("El operador es /");
          operando = "/";
          error = 0;
        }
      
      
    }
    
}

// Lee un número desde el puerto serie
float leer_primer_num() {

    int error = 1;

   Serial.println("Introduce primer numero:");
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Introduce 1 numero");

   while(error){
    while (Serial.available() == 0);
    
   
    dato = Serial.parseFloat();
    
    //Serial.println(dato);
    if(dato >= minDato && dato <= maxDato)
      {
        Serial.println(dato);
        //lcd.setCursor(0,1);
        //lcd.clear();
        //lcd.print(dato);
        error = 0;
      }
    else {
      Serial.println("El dato es erroneo.");
      lcd.setCursor(0,1);
      lcd.print("Dato erroneo");
      delay(200);
      lcd.setCursor(0,1);
      lcd.print("Num de -99 a 99");
      error =1;
    }   
   }

   return dato;

   // En caso contrario, devuelve el dato
}
// Lee un número desde el puerto serie
float leer_segundo_num() {

    int error = 1;

   Serial.println("Introduce segundo numero:");
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Introduce 2 numero");

   while(error){
    while (Serial.available() == 0);
    
   
    dato = Serial.parseFloat();
    
    //Serial.println(dato);
    if(dato >= minDato && dato <= maxDato)
      {
        Serial.println(dato);
        //lcd.setCursor(0,1);
        //lcd.clear();
        //lcd.print(dato);
        error = 0;
      }
    else {
      Serial.println("El dato es erroneo.");
      lcd.setCursor(0,1);
      lcd.print("Dato erroneo");
      delay(200);
      lcd.setCursor(0,1);
      lcd.print("Num de -99 a 99");
      error =1;
    }   
   }

   return dato;

   // En caso contrario, devuelve el dato
}

void imprime_dato(float dato){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("El numero es");
  lcd.setCursor(0,1);
  lcd.print(dato);
  delay(2000);
}

void calcular(){
  if(operando == "+"){
    Serial.print("Vamos a sumar los numeros ");
    Serial.print(firstN);
    Serial.print(" + ");
    Serial.print(secondN);
    Serial.print("=");
    result = firstN + secondN;
    Serial.println(result);

    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print(firstN);
    lcd.print("+");
    lcd.print(secondN);
    lcd.print("=");
    lcd.print(result);
  }
  if(operando == "-"){
    Serial.print("Vamos a restar los numeros ");
    Serial.print(firstN);
    Serial.print(" - ");
    Serial.print(secondN);
    Serial.print("=");
    result = firstN - secondN;
    Serial.println(result);

    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print(firstN);
    lcd.print("-");
    lcd.print(secondN);
    lcd.print("=");
    lcd.print(result);
  }
  if(operando == "*"){
    Serial.print("Vamos a sumar los numeros ");
    Serial.print(firstN);
    Serial.print(" * ");
    Serial.print(secondN);
    Serial.print("=");
    result = firstN * secondN;
    Serial.println(result);
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print(firstN);
    lcd.print("*");
    lcd.print(secondN);
    lcd.print("=");
    lcd.print(result);
  }
  if(operando == "/"){
    Serial.print("Vamos a sumar los numeros ");
    Serial.print(firstN);
    Serial.print(" / ");
    Serial.print(secondN);
    Serial.print("=");
    result = firstN / secondN;
    Serial.println(result);
    lcd.setCursor(0,0);
    lcd.clear();
    lcd.print(firstN);
    lcd.print("/");
    lcd.print(secondN);
    lcd.print("=");
    lcd.print(result);
  }
}
