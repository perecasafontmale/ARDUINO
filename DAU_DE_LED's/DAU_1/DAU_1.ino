/**********************************************************************************
**                                                                               **
**                            Dau de LEDs                                        **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int quatre = 5;
const int tres = 6;
const int dos = 7;
const int un = 8;
const int buttonPin = 2; 
int buttonState = LOW;     // variable per llegir l'estat del polsador
int buttonPushCounter = 0;
int temps = 500;

void setup() 
{
   pinMode(quatre, OUTPUT);
   pinMode(tres, OUTPUT);
   pinMode(dos, OUTPUT);
   pinMode(un, OUTPUT);
   pinMode(buttonPin, INPUT); 
   Serial.begin(9600);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) 
  
  {
    
    buttonPushCounter = buttonPushCounter + 1;
    
    if (buttonPushCounter == 1 )
    
   { 
     // 1
     
     Serial.println(buttonPushCounter);
     digitalWrite(quatre, LOW);
     digitalWrite(tres, LOW);
     digitalWrite(dos, LOW);
     digitalWrite(un, HIGH);
      
      delay(temps);
    }
    
    else if (buttonPushCounter == 2 )
    
  {
    // 2
    
     Serial.println(buttonPushCounter);
     digitalWrite(quatre, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(dos, LOW);
     digitalWrite(un, LOW);
      
      delay(temps);
   }
      
    else if (buttonPushCounter == 3 ) 
     
  {
    // 3
    
     Serial.println(buttonPushCounter);
     digitalWrite(quatre, LOW);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, LOW);
     digitalWrite(un, HIGH);
      
      delay(temps);
  } 

     else if (buttonPushCounter == 4 )

  { 
    // 4
    
     Serial.println(buttonPushCounter); 
     digitalWrite(quatre, LOW);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, HIGH);
     digitalWrite(un, LOW);
      
      delay(temps);
    
  }   
     else if (buttonPushCounter == 5 ) 

     
   {
    // 5
    
     Serial.println(buttonPushCounter);
     digitalWrite(quatre, LOW);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, HIGH);
     digitalWrite(un, HIGH);
      
      delay(temps);
    
      
  }
      
     else if (buttonPushCounter == 6 )

  {
    // 6
      Serial.println(buttonPushCounter);
     digitalWrite(quatre, HIGH);
     digitalWrite(tres, HIGH);
     digitalWrite(dos, HIGH);
     digitalWrite(un, LOW);
      
      delay(temps);
   }
      


      else 
      
   {
      
      buttonPushCounter = 0 ;

   }
   
 }

     else if (buttonPushCounter == 0)

   {
     digitalWrite(quatre, LOW);
     digitalWrite(tres, LOW);
     digitalWrite(dos, LOW);
     digitalWrite(un, LOW);
     
      delay(300); 
   }

}
