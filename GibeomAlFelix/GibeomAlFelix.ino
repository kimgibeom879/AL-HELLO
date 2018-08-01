#include "pitches.h"
#include "timings.h"
bool isAllowed=false;
String a;
int notes1[]={NOTE_D4,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_D4,0,NOTE_E4,NOTE_E4,NOTE_F4,NOTE_G4,0,NOTE_A4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_A4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_D4,NOTE_E4,NOTE_G4,NOTE_G4/*1Q*/,0,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_B4,0,NOTE_A4,NOTE_A4,NOTE_A4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_A4,NOTE_E4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_B4,NOTE_D5,NOTE_E5,NOTE_E5,NOTE_E5,NOTE_D5,NOTE_D5,NOTE_D5,NOTE_B4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_A4,NOTE_B4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_G4};
//int notes2[]=;
//int notes3[]=;
String lyrics1[]={"Al-","most ","hea-","","ven, ","West ","Vir-","gin-","ia\n","Blue ","Ridge ","Moun-","","tains, ","She-","nan-","do-","ah ","Ri-","","ver\n","Life ","is ","old ","there, ","","ol-","der ","than ","the ","trees\n","Youn-","ger ","than ","the ","moun-","","tains, ","blo-","wing ","like ","a ","breeze\n\n","Coun-","try ","roads, ","take ","","me ","home ","To ","the ","place ","I ","be-","long\n","","West ","Vir-","gin-","","ia, ","Moun-","","tain ","Ma-","ma ","Take ","","me ","home, ","coun-","try ","roads\n\n"};
//String lyrics2[]={};
//String lyrics3[]={};
int noteDurations1[]={et,et,etx,st,qt,0,etx,st,et,qtx,0,et,et,et,et,qt,et,et,et,et,et,et,qt/*1q*/,0,et,et,etx,st,qt,et,et,et,et,qt,0,et,et,et,et,et,et,qt,et,et,et,et,qt/*2q*/,et,et,htx,st,st,et,ht,0,et,et,ht,0,et,st,st,ht,0,et,st,st,et,qtx,0,st,st,st,st,et,qtx,0,st,st,et,ht,0,et,et,htx,0/*3q*/};
//int noteDurations2[]={};
//int noteDurations3[]={};
int spacings1[]={};
//int spacings2[]={};
//int spacings3[]={};

void setup() {
  
  Serial.begin(9600);
  pinMode(3,INPUT_PULLUP);
  pinMode(8,OUTPUT);
  Serial.println("Welcome to the karaoke.Push the button to activate the karaoke.\n");
  
}

void loop() {
  
  int buttonState=digitalRead(3);
  
  if(buttonState==HIGH && isAllowed==false){
    
    isAllowed=true;
    Serial.println("You just turned on the karaoke!Enter your song of choice.");
    
    }
  
  if(Serial.available()>0 && isAllowed==true){
    
    a=Serial.readString();

    if(isAllowed=true){
      
      if(a=="exit")check();
      else verse(8);
      
    }
  
  }
  
}

void verse(int PIN){
  
  if(a=="123"){
    
    for(int x=0;x<50;x++){
      
      tone(PIN,notes1[x],noteDurations1[x]);Serial.print(lyrics1[x]);delay(500);
      
    }
    
  }
  else if(a=="121"){
    
    Serial.println('b');
    
    }
  else if(a=="122"){
    
    Serial.println('c');
    
    }
  else{
    
    Serial.println("Invalid song!Please try again.");
    
    }

}

void check(){
  
  isAllowed=false;
  Serial.println("\nKaraoke exited.Push the button to reactivate the karaoke.");
  
  }
