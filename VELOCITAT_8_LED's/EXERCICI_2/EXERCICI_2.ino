/****************************************************************
**                                                             **
**                           TÍTOL:                            **
**                     VELOCITAT 8 LED's                       **
**                                                             **
** NOM: PERE CASAFONT MALÉ                    DATA: 16/04/2021 **
****************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int led1 = 6;          // donar nom al pin 6 de l’Arduino
const int led2 = 7;          // donar nom al pin 7 de l’Arduino
const int led3 = 8;          // donar nom al pin 8 de l’Arduino
const int led4 = 9;          // donar nom al pin 9 de l’Arduino
const int led5 = 10;         // donar nom al pin 10 de l’Arduino
const int led6 = 11;         // donar nom al pin 11 de l’Arduino
const int led7 = 12;         // donar nom al pin 12 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino

int TEMPS = 100;              // velocitat de l'acció en ms
int valPot0;                 // guardar valor del potenciometre

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  Serial.println(valPot0);
  TEMPS = valPot0;     // actualitzar velocitat amb el valor del potenciòmetre
  
  // POSICIO_1
  digitalWrite(led0, HIGH);   // posar a 5V el pin 5
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);   // posar a 5V el pin 12
  
  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_2
  digitalWrite(led0, HIGH);    // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 0V el pin 12
  
  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_3
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_4
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 0V el pin 8
  digitalWrite(led4, HIGH);    // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_5
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 0V el pin 8
  digitalWrite(led4, HIGH);    // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_6
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_7
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 0V el pin 8
  digitalWrite(led4, HIGH);    // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_8
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 0V el pin 8
  digitalWrite(led4, HIGH);    // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_9
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_10
  digitalWrite(led0, HIGH);    // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_11
  digitalWrite(led0, HIGH);    // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat

    // POSICIO_12
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(TEMPS);                // es queden leds velocitat ms en aquest estat
}
//********** Funcions *************************************************************
