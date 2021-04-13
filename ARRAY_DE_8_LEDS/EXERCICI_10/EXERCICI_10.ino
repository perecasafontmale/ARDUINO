/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};   // donar nom en un array als pins 
const int button1Pin = 2;             // donar nom al pin 2 de l’Arduino
boolean button1Estat = LOW;           // definir variable d'estat pel polsador
const int button2Pin = 3;             // donar nom al pin 3 de l’Arduino
boolean button2Estat = LOW;           // definir variable d'estat pel polsador

int ledNum = 8;                   // definir variable de número de leds
int num =0;                      // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir els pins 5 fins al 12 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(button1Pin, INPUT);      // definir el pin 2 com una entrada
  pinMode(button2Pin, INPUT);      // definir el pin 3 com una entrada
  for(int j = 0; j < ledNum ; j++)     // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//********** Loop *****************************************************************
void loop()
{
  button1Estat = digitalRead(button1Pin);
  button2Estat = digitalRead(button2Pin);
  if (button1Estat == LOW)
  { 
    num = num + 1;                 // incrementar el número a mostrar
    if (num > 255 )               // quan ja ha ensenyat el 255 tornar al 0  
           {
              num = 0;
           }    
for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
}
    else if(button2Estat == LOW)
  { 
    num = num - 1;                 // decrementar el número a mostrar
    if (num < 0)                   // quan ja ha ensenyat el 0 tornar al 255  
           {
              num = 255;
           }    
for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j));
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
}
}

//********** Funcions *************************************************************
