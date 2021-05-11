/* Star Wars - Marxa Imperial*/
 
int BrunzidorPin = 11; // definim el pin al qual connectarem el brunzidor.
 
/*definim cadascuna de les freqüències de les notes musicals.
c, d, e ... són les notes en notació anglesa.
Quan van acompanyades de la lletra S significa que aquesta nota és sostingut.
Quan van acompanyades de la lletra H significa que aquesta nota està en una
octava superior (High).
*/
 
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;
 
 
void setup()    
{    
 
  pinMode(BrunzidorPin, OUTPUT); // definim la variable BrunzidorPin com una sortida.
 
}    
     
void loop()   
{   
/* Comença la melodia, per a això utilitzem la funció tone amb els
paràmetres:
- el pin de sortida, en el nostre cas l'11.
- la nota que ja hem definit les seves freqüències.
- la durada de la nota en ms.
Després de la funció tone utilitzem la funció delay per a crear
un silenci de la valor igual a la nota i així separar les notes unes
d'altres (si no, no es marca bé la nota).
Afegim els 50 ms simplement perquè ens sembla que aquest petit
augment del silenci fa que s'escolti millor la melodia però es
pot treure sense problemes. 
 */
    tone(BrunzidorPin, a, 500);
    delay(500+50);
    tone(BrunzidorPin, a, 500);
    delay(500+50);     
    tone(BrunzidorPin, a, 500); 
    delay(500+50);
    tone(BrunzidorPin, f, 350);  
    delay(350+50);
    tone(BrunzidorPin, cH, 150);
    delay(150+50); 
    
    tone(BrunzidorPin, a, 500);
    delay(500+50);
    tone(BrunzidorPin, f, 350);
    delay(350+50);
    tone(BrunzidorPin, cH, 150);
    delay(150+50);
    tone(BrunzidorPin, a, 1000);   
    delay(1000+50);
   
    tone(BrunzidorPin, eH, 500);
    delay(500+50);
    tone(BrunzidorPin, eH, 500);
    delay(500+50);
    tone(BrunzidorPin, eH, 500); 
    delay(500+50);   
    tone(BrunzidorPin, fH, 350);
    delay(350+50); 
    tone(BrunzidorPin, cH, 150);
    delay(150+50);
    
    tone(BrunzidorPin, gS, 500);
    delay(500+50);
    tone(BrunzidorPin, f, 350);
    delay(350+50);
    tone(BrunzidorPin, cH, 150);
    delay(150+50);
    tone(BrunzidorPin, a, 1000);
    delay(1000+50);
    
    tone(BrunzidorPin, aH, 500);
    delay(500+50);
    tone(BrunzidorPin, a, 350);
    delay(350+50); 
    tone(BrunzidorPin, a, 150);
    delay(150+50);
    tone(BrunzidorPin, aH, 500);
    delay(500+50);
    tone(BrunzidorPin, gSH, 250); 
    delay(250+50);
    tone(BrunzidorPin, gH, 250);
    delay(250+50);
    
    tone(BrunzidorPin, fSH, 125);
    delay(125+50);
    tone(BrunzidorPin, fH, 125);
    delay(125+50);    
    tone(BrunzidorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(BrunzidorPin, aS, 250);
    delay(250+50);    
    tone(BrunzidorPin, dSH, 500); 
    delay(500+50); 
    tone(BrunzidorPin, dH, 250); 
    delay(250+50); 
    tone(BrunzidorPin, cSH, 250);
    delay(250+50);  
    
    // virtuosisme :)))
    
    tone(BrunzidorPin, cH, 125);
    delay(125+50);  
    tone(BrunzidorPin, b, 125); 
    delay(125+50); 
    tone(BrunzidorPin, cH, 250); 
    delay(250+50);     
    delay(250);
    tone(BrunzidorPin, f, 125); 
    delay(125+50); 
    tone(BrunzidorPin, gS, 500); 
    delay(500+50); 
    tone(BrunzidorPin, f, 375); 
    delay(375+50); 
    tone(BrunzidorPin, a, 125);
    delay(125+50); 
    
    tone(BrunzidorPin, cH, 500); 
    delay(500+50);
    tone(BrunzidorPin, a, 375);  
    delay(375+50);
    tone(BrunzidorPin, cH, 125); 
    delay(125+50);
    tone(BrunzidorPin, eH, 1000); 
    delay(1000+50);
 
    
    tone(BrunzidorPin, aH, 500);
    delay(500+50);
    tone(BrunzidorPin, a, 350); 
    delay(350+50);
    tone(BrunzidorPin, a, 150);
    delay(150+50);
    tone(BrunzidorPin, aH, 500);
    delay(500+50);
    tone(BrunzidorPin, gSH, 250);
    delay(250+50); 
    tone(BrunzidorPin, gH, 250);
    delay(250+50);
    
    tone(BrunzidorPin, fSH, 125);
    delay(125+50);
    tone(BrunzidorPin, fH, 125);  
    delay(125+50);  
    tone(BrunzidorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(BrunzidorPin, aS, 250);  
    delay(250+50);  
    tone(BrunzidorPin, dSH, 500);  
    delay(500+50);
    tone(BrunzidorPin, dH, 250);  
    delay(250+50);
    tone(BrunzidorPin, cSH, 250);
    delay(250+50);  
 
    
    tone(BrunzidorPin, cH, 125);  
    delay(125+50);
    tone(BrunzidorPin, b, 125);  
    delay(125+50);
    tone(BrunzidorPin, cH, 250);
    delay(250+50);      
    delay(250);
    tone(BrunzidorPin, f, 250); 
    delay(250+50); 
    tone(BrunzidorPin, gS, 500); 
    delay(500+50); 
    tone(BrunzidorPin, f, 375);  
    delay(375+50);
    tone(BrunzidorPin, cH, 125); 
    delay(125+50);
           
    tone(BrunzidorPin, a, 500); 
    delay(500+50);           
    tone(BrunzidorPin, f, 375);  
    delay(375+50);          
    tone(BrunzidorPin, c, 125); 
    delay(125+50);  
    tone(BrunzidorPin, a, 1000);
    delay(1000+50);       
 
    delay(2000);  // dos segons per tornar a començar.
}
