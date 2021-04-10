/**********************************************************************************
**                                                                               **
**                                                                               **                                                                             
**                                    30 LEDS                                    **
**                                                                               **
**                                                                               **                                                                           
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int led0=5;            // donar nom al pin 5 de l’Arduino
unsigned long TEMPS = 500;   // es queden leds 500ms encesos
int comptar = 30;

void setup() 
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  for (int i=1; i <= comptar; i++)
{
  digitalWrite(led0, LOW);  // posar a 5V el pin 5 
  delay(TEMPS);             // es queden leds 500ms encesos
  digitalWrite(led0, HIGH); // posar a 5V el pin 5
  delay(TEMPS);             // es queden leds 500ms encesos
}

}
void loop() 
{
 
}
//********** FUNCIONS *************************************************************
