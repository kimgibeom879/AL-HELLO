#include <IRremote.h>


#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int RECV_PIN = 8;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  irrecv.enableIRIn();
  
}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value);
    switch (results.value){
      case 16738455:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("0");
      irrecv.resume();
      break;
      case 16724175:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("1");
      irrecv.resume();
      break;
      case 16718055:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("2");
      irrecv.resume();
      break;
      case 16743045:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("3");
      irrecv.resume();
      break;
      case 16716015:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("4");
      irrecv.resume();
      break;
      case 16726215:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("5");
      irrecv.resume();
      break;
      case 16734885:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("6");
      irrecv.resume();
      break;
      case 16728765:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("7");
      irrecv.resume();
      break;
      case 16730805:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("8");
      irrecv.resume();
      break;
      case 16732845:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("9");
      irrecv.resume();
      break;
      case 16750695:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("100+");
      irrecv.resume();
      break;
      case 16756815:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("200+");
      irrecv.resume();
      break;
      case 16769055:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("-");
      irrecv.resume();
      break;
      case 16754775:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("+");
      irrecv.resume();
      break;
      case 16748655:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("EQ");
      irrecv.resume();
      break;
      case 16720605:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("PREV");
      irrecv.resume();
      break;
      case 16712445:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("NEXT");
      irrecv.resume();
      break;
      case 16761405:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("PAUSE/PLAY");
      irrecv.resume();
      break;
      case 16753245:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("CHANNEL-");
      irrecv.resume();
      break;
      case 16736925:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("CHANNEL");
      irrecv.resume();
      break;
      case 16769565:
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("thou has pressed");
      lcd.setCursor(0,1);
      lcd.print("CHANNEL+");
      irrecv.resume();
      break;
      default:
      Serial.println(results.value);
      irrecv.resume();
      break;
    
    
    }
    
    }
    

}
