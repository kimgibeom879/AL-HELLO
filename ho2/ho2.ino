#include <LiquidCrystal.h>
#include <IRremote.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int RECV_PIN = 10; 
IRrecv irrecv(RECV_PIN); 
decode_results results; 
void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  if (irrecv.decode(&results)) { 
  unsigned int value = results.value;
  Serial.println(value);
  
  switch(value){
    case 26775:
      lcd.clear();/*
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");*/
      lcd.setCursor(0,1);
      lcd.write("0");
    case 12495:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.write("1");
    case 6375:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.write("2");
    default:
      lcd.setCursor(8,2);
      lcd.print(value);
  }
  delay(100);
  irrecv.resume();
  
  }
}
