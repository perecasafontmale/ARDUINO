/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {5, 6, 7, 8};   // donar nom en un array als pins 5, 6, 7 i 8
int ledNum = 4;                      // definir variable de número de leds
int pausa = 1000;                    // definir variable de temps en ms

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir els pins 5, 6, 7 i 8 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

//********** Loop *****************************************************************
void loop()
{
  for(int i = 0; i < 16; i++)     // mostrar del 0 al 15
  {
    for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(i, j));
    }
    delay(pausa);                 // es queden leds pausa ms en aquest estat
  }
}

//********** Funcions ************************************************************
