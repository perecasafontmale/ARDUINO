/******************************************************************************
**                                                                           **
**                              Music player                                 **
**                                                                           **
**           c=DO, d=RE, e=MI, f=FA, g=SOL, a=LA, b=SI, C=DO' D=RE'          **
**                                                                           **
*******************************************************************************/
//******* Includes ************************************************************

//******* Variables ***********************************************************
const int speakerPin = 9;   // pin for speaker
int tempo = 150;

//Melody 1
//int length = 15; // the number of notes
//char notes[] = "ccggaagffeeddc "; // a space represents a rest
//int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 }; // time notes

//PATUM ----------------------------------------------------------------------
int length = 29; 
char notes[] = "ggCCCEEEGECEDEFGDFGCEDCBCD gg";
int beats[]={1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

 

//****** Setup ****************************************************************
void setup() {
  // make the pin output
  pinMode(speakerPin, OUTPUT);
}

//***** Loop *****************************************************************
void loop() {
    for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo);
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    // pause between notes
    delay(tempo / 2); 
  }
}
//****** Funcions *************************************************************
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' , 'D'};
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 840};

  // play the tone corresponding to the note name
  for (int i = 0; i < 9; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}
