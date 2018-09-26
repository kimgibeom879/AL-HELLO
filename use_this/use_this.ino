#include <IRremote.h>
byte a[8]={
  B00100,
  B01110,
  B11111,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100
  } ;
  byte b[8]={
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B11111,
  B01110,
  B00100
  } ;
  byte c[8]={
  B00000,
  B01110,
  B10001,
  B10001,
  B11101,
  B11001,
  B10010,
  B00000,
  } ;
  byte d[8]={
  B00000,
  B01110,
  B10001,
  B10001,
  B10111,
  B10011,
  B01001,
  B00000,
  } ;

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int RECV_PIN = 8;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup() {
  lcd.createChar(1,a);
  lcd.createChar(2,b);
  lcd.createChar(3,c);
  lcd.createChar(4,d);
  lcd.begin(16, 2);
  Serial.begin(9600);
  irrecv.enableIRIn();
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(4);


}

void loop() {
  if (irrecv.decode(&results)) {
    unsigned int value = results.value;
    
    
  }

}
