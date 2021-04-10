/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {5, 6, 7, 8};   // donar nom en un array als pins 5, 6, 7 i 8
const int buttonPin = 2;             // donar nom al pin 2 de l’Arduino
boolean buttonEstat = LOW;           // definir variable d'estat pel polsador

int ledNum = 4;                   // definir variable de número de leds
int num = 0;                      // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir els pins 5, 6, 7 i 8 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);      // definir el pin 2 com una entrada
  for(int j = 0; j < ledNum ; j++)     // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//********** Loop *****************************************************************
void loop()
{
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == HIGH)
  { 
    num = num + 1;                 // incrementar el número a mostrar
    if (num == 16)       // quan ja ha ensenyat el 15 tornar al 0  
           {
              num = 0;
           }    
for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
}

//********** Funcions *************************************************************
