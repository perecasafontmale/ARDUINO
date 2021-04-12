/**********************************************************************************
**                                                                               **
**                            Display de 7 segments                              **
**                                    NOM                                        **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int A = 5;      // donar nom al pin 5 de l’Arduino
const int B = 6;      // donar nom al pin 6 de l’Arduino
const int C = 7;      // donar nom al pin 8 de l’Arduino
const int D = 8;      // donar nom al pin 9 de l’Arduino
const int E = 9;      // donar nom al pin 10 de l’Arduino
const int F = 10;     // donar nom al pin 11 de l’Arduino
const int G = 11;     // donar nom al pin 12 de l’Arduino
unsigned long TEMPS = 500;   // es queden leds 500ms encesos

//********** Setup ****************************************************************
void setup()
{
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
   pinMode(G, OUTPUT);
 
}

void loop()
{
  // P
  digitalWrite(A, HIGH);  //  P
  digitalWrite(B, HIGH);  //  P
  digitalWrite(C, LOW);   //  P
  digitalWrite(D, LOW);   //  P
  digitalWrite(E, HIGH);  //  P
  digitalWrite(F, HIGH);  //  P
  digitalWrite(G, HIGH);  //  P
  
  delay(TEMPS);             // es queden leds 500ms encesos
  
  // E
  digitalWrite(A, HIGH);  //  E
  digitalWrite(B, LOW);   //  E
  digitalWrite(C, LOW);   //  E
  digitalWrite(D, HIGH);  //  E
  digitalWrite(E, HIGH);  //  E
  digitalWrite(F, HIGH);  //  E
  digitalWrite(G, HIGH);  //  E
  
  delay(TEMPS);             // es queden leds 500ms encesos

  // R
  digitalWrite(A, LOW);   //  R
  digitalWrite(B, LOW);   //  R
  digitalWrite(C, LOW);   //  R
  digitalWrite(D, LOW);   //  R
  digitalWrite(E, HIGH);  //  R
  digitalWrite(F, LOW);   //  R
  digitalWrite(G, HIGH);  //  R
    
  delay(TEMPS);             // es queden leds 500ms encesos

  // E
  digitalWrite(A, HIGH);  //  E
  digitalWrite(B, LOW);   //  E
  digitalWrite(C, LOW);   //  E
  digitalWrite(D, HIGH);  //  E
  digitalWrite(E, HIGH);  //  E
  digitalWrite(F, HIGH);  //  E
  digitalWrite(G, HIGH);  //  E
  
  delay(TEMPS);             // es queden leds 500ms encesos
}
