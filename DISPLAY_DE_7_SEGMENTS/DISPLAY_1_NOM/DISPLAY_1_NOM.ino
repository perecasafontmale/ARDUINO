/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                    NOM                                        **
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
  // P
  digitalWrite(ledA, LOW);    //  P
  digitalWrite(ledB, LOW);    //  P
  digitalWrite(ledC, HIGH);   //  P
  digitalWrite(ledD, HIGH);   //  P
  digitalWrite(ledE, LOW);    //  P
  digitalWrite(ledF, LOW);    //  P
  digitalWrite(ledG, LOW);    //  P
  
  delay(TEMPS);             // es queden leds 500ms encesos
  
  // E
  digitalWrite(ledA, LOW);    //  E
  digitalWrite(ledB, HIGH);   //  E
  digitalWrite(ledC, HIGH);   //  E
  digitalWrite(ledD, LOW);    //  E
  digitalWrite(ledE, LOW);    //  E
  digitalWrite(ledF, LOW);    //  E
  digitalWrite(ledG, LOW);    //  E
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // R
  digitalWrite(ledA, HIGH);   //  R
  digitalWrite(ledB, HIGH);   //  R
  digitalWrite(ledC, HIGH);   //  R
  digitalWrite(ledD, HIGH);   //  R
  digitalWrite(ledE, LOW);    //  R
  digitalWrite(ledF, HIGH);   //  R
  digitalWrite(ledG, LOW);    //  R
    
  delay(TEMPS);             // es queden leds 500ms encesos

  // E
  digitalWrite(ledA, LOW);    //  E
  digitalWrite(ledB, HIGH);   //  E
  digitalWrite(ledC, HIGH);   //  E
  digitalWrite(ledD, LOW);    //  E
  digitalWrite(ledE, LOW);    //  E
  digitalWrite(ledF, LOW);    //  E
  digitalWrite(ledG, LOW);    //  E
  
  delay(TEMPS);             // es queden leds 500ms encesos
}
