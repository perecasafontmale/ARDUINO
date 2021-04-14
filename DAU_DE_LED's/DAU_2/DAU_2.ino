/**********************************************************************************
**                                                                               **
**                            Dau de LEDs                                        **
**                             ALEATORI                                          **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int N4=5;              // donar nom al pin 5 de l’Arduino
const int N3=6;              // donar nom al pin 6 de l’Arduino
const int N2=7;              // donar nom al pin 7 de l’Arduino
const int N1=8;              // donar nom al pin 8 de l’Arduino
const int buttonPin = 2; 
int buttonState = LOW;       // variable per llegir l'estat del polsador
long randNumber = 0;
unsigned long TEMPS = 500;   // es queden leds 500ms encesos

//********** Setup ****************************************************************
void setup() 
{
   pinMode(N4, OUTPUT);
   pinMode(N3, OUTPUT);
   pinMode(N2, OUTPUT);
   pinMode(N1, OUTPUT);
   pinMode(buttonPin, INPUT); 
   Serial.begin(9600);
}

//********** loop *****************************************************************
void loop() {
  
buttonState = digitalRead(buttonPin);
    if (buttonState == LOW) 
{    
  randNumber = random(1, 7);
  Serial.println(randNumber);
  delay(TEMPS);             // es queden leds 500ms encesos  
    if (randNumber == 1 )
{ 
// 1     
  digitalWrite(N4, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N1, HIGH);
      
  delay(TEMPS);             // es queden leds 500ms encesos
}    
    else if (randNumber == 2 )
{
// 2    
  digitalWrite(N4, HIGH);
  digitalWrite(N3, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N1, LOW);
      
  delay(TEMPS);             // es queden leds 500ms encesos
}      
    else if (randNumber == 3 ) 
{
// 3
  digitalWrite(N4, LOW);
  digitalWrite(N3, HIGH);
  digitalWrite(N2, LOW);
  digitalWrite(N1, HIGH);
      
  delay(TEMPS);             // es queden leds 500ms encesos  
}   
     else if (randNumber == 4 )
{ 
// 4
  digitalWrite(N4, LOW);
  digitalWrite(N3, HIGH);
  digitalWrite(N2, HIGH);
  digitalWrite(N1, LOW);
      
  delay(TEMPS);             // es queden leds 500ms encesos  
}      
     else if (randNumber == 5 ) 
{
// 5
  digitalWrite(N4, LOW);
  digitalWrite(N3, HIGH);
  digitalWrite(N2, HIGH);
  digitalWrite(N1, HIGH);
      
  delay(TEMPS);             // es queden leds 500ms encesos  
}         
     else if (randNumber == 6 )
{
// 6
  digitalWrite(N4, HIGH);
  digitalWrite(N3, HIGH);
  digitalWrite(N2, HIGH);
  digitalWrite(N1, LOW);
      
  delay(TEMPS);             // es queden leds 500ms encesos  
}    
}
     else if (randNumber == 0)
{
  digitalWrite(N4, LOW);
  digitalWrite(N3, LOW);
  digitalWrite(N2, LOW);
  digitalWrite(N1, LOW);
     
  delay(TEMPS);             // es queden leds 500ms encesos  
}

}
