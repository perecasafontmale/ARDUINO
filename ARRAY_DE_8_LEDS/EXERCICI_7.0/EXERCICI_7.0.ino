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
int a = 0, b = 30;

void setup() 
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
}

void loop() 
{
  Serial.begin(9600);       
  Serial.println(a=a+1);
  
  if (a<=b)  
{
  digitalWrite(led0, LOW);  // posar a 5V el pin 5
  delay(TEMPS);             // es queden leds 500ms encesos
  digitalWrite(led0, HIGH); // posar a 5V el pin 5
  delay(TEMPS);             // es queden leds 500ms encesos
}
    else   
{
  digitalWrite(led0, LOW);  // posar a 5V el pin 5
  delay(TEMPS);             // es queden leds 500ms encesos
 }
}
//********** FUNCIONS *************************************************************
