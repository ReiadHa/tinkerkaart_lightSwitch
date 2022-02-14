// load LCD library
#include <LiquidCrystal.h>
int knopStatus_9 = 0;
int teller = 0;
  
// set crystal pins
LiquidCrystal lcd(12, 11, 5, 4 ,3 ,2);

const int BTN = 9;
const int LED = 8;
                  
void setup( ) 
{       
 Serial.begin(9600);
 pinMode(BTN, INPUT);
 pinMode(LED, OUTPUT) ;
  
 // set LCD size
 lcd.begin(16,2);
  
 // set start
 lcd.setCursor(0,0);
 lcd.print("Press button to: ");
}
void loop()
{
  // schijf hier tussen je code
  knopStatus_9 = digitalRead(9);
  if (knopStatus_9 && teller == 0)
  {
  	teller = teller + 1;
    Serial.print("light in off ");
  }
  
  else if (knopStatus_9 && teller == 1)
  {
   teller = teller - 1;
   Serial.print("light in on ");
  }
  
  if (teller == 0)
  {
     digitalWrite(8, HIGH);
     lcd.setCursor(0,1);
     lcd.print("ligh switch on ");
    
  }
  
  else if (teller == 1)
  {
    
     digitalWrite(8, LOW);
     lcd.setCursor(0,1);
     lcd.print("ligh switch off");
  }

 // schijf hier tussen je code

}
// schijf hier tussen je eventuele function(s)
// schijf hier tussen je eventuele function(s)