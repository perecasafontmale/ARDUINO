/**********************************************************************************
**                                                                               **
**                              CRUÏLLA_DE_SEMÀFORS                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led2 = 7;          // donar nom al pin 7 de l’Arduino  (VERMELL)
const int led3 = 8;          // donar nom al pin 8 de l’Arduino  (TARONJA)
const int led4 = 9;          // donar nom al pin 9 de l’Arduino  (VERD)
const int led5 = 10;         // donar nom al pin 10 de l’Arduino (VERMELL)
const int led6 = 11;         // donar nom al pin 11 de l’Arduino (TARONJA)
const int led7 = 12;         // donar nom al pin 12 de l’Arduino (VERD)
unsigned long TEMPS = 1000;   // Delay de la variable (TEMPS)

//********** Setup ****************************************************************
void setup()
{
  //SEMÀFOR_A_PINS --> 7-8-9
  
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida

  //SEMÀFOR_B_PINS --> 10-11-12
  
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  //SEQÜENCIA_1_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)
       
  //SEQÜENCIA_1_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_2_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_2_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, HIGH);   // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_3_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_3_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, HIGH);   // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_4_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_4_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, HIGH);   // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_5_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_5_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, HIGH);   // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************
  
  //SEQÜENCIA_6_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_6_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, HIGH);   // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_7_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_7_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_8_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_8_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, HIGH);   // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_9_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_9_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_10_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_10_SEMÀFOR_B
  
  digitalWrite(led5, LOW);    // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, HIGH);   // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_11_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);    // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);    // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_11_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10         (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11         (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12         (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************
  
  //SEQÜENCIA_12_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, HIGH);  // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_12_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_13_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, HIGH);  // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_13_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_14_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, HIGH);  // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_14_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_15_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, HIGH);  // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_15_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_16_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, HIGH);  // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);   // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_16_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_17_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);   // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_17_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_18_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, HIGH);  // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);   // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_18_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_19_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);   // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_19_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_20_SEMÀFOR_A
  
  digitalWrite(led2, LOW);   // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, HIGH);  // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);   // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_20_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************

  //SEQÜENCIA_21_SEMÀFOR_A
  
  digitalWrite(led2, HIGH);  // posar a 5V el pin 7          (VERMELL)
  digitalWrite(led3, LOW);   // posar a 5V el pin 8          (TARONJA)
  digitalWrite(led4, LOW);   // posar a 5V el pin 9          (VERD)

  //SEQÜENCIA_21_SEMÀFOR_B
  
  digitalWrite(led5, HIGH);   // posar a 5V el pin 10        (VERMELL)
  digitalWrite(led6, LOW);    // posar a 5V el pin 11        (TARONJA)
  digitalWrite(led7, LOW);    // posar a 5V el pin 12        (VERD)
  
  
  delay(TEMPS);                  // es queden leds 1000ms encesos ****************
}

//********** Funcions *************************************************************
//PCM
