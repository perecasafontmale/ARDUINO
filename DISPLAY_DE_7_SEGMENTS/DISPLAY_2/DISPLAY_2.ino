/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                   CONTADOR                                    **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 5;      // donar nom al pin 5 de l’Arduino
const int ledB = 6;      // donar nom al pin 6 de l’Arduino
const int ledC = 7;      // donar nom al pin 8 de l’Arduino
const int ledD = 8;      // donar nom al pin 9 de l’Arduino
const int ledE = 9;      // donar nom al pin 10 de l’Arduino
const int ledF = 10;     // donar nom al pin 11 de l’Arduino
const int ledG = 11;     // donar nom al pin 12 de l’Arduino
unsigned long TEMPS = 500;   // es queden leds 500ms encesos

//********** Setup ****************************************************************
void setup()
{
  
   pinMode(ledA, OUTPUT);
   pinMode(ledB, OUTPUT);
   pinMode(ledC, OUTPUT);
   pinMode(ledD, OUTPUT);
   pinMode(ledE, OUTPUT);
   pinMode(ledF, OUTPUT);
   pinMode(ledG, OUTPUT);
 
}

void loop()
{
  // RES
  digitalWrite(ledA, HIGH);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);  
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);    
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 0
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);  
  digitalWrite(ledD, LOW);   
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, HIGH); 
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 1

  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 2

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 3

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 4
  
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(500);  delay(TEMPS);             // es queden leds 500ms encesos
  
  // 5
  
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 6
  
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 7
  
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 8
  
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // 9
  
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  
  delay(TEMPS);             // es queden leds 500ms encesos
  
}
