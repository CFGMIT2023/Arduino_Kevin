/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                              Kevin Gomez                                      **
************************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 5;         
const byte led1 = 6;       
const byte led2 = 7;         
const byte led3 = 8;          
const byte led4 = 9;         
const byte led5 = 10;         
const byte led6 = 11;        
const byte led7 = 12; 
const byte buton1 = A0;
const byte buton2 = A1;
const byte ledA = 4;         
const byte ledB = 3;       
const byte ledC = 2;         
const byte ledD = 1;          
const byte ledE = 0;         
const byte ledF = A2;         
const byte ledG = A3;        
const byte ledH = A4;        
int temps=360;                // definir variable de temps en ms   

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT);    
  pinMode(led7, OUTPUT); 
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  pinMode(ledA, OUTPUT);     
  pinMode(ledB, OUTPUT);     
  pinMode(ledC, OUTPUT);     
  pinMode(ledD, OUTPUT);     
  pinMode(ledE, OUTPUT);     
  pinMode(ledF, OUTPUT);     
  pinMode(ledG, OUTPUT);    
  pinMode(ledH, OUTPUT);

}

//********** Loop *****************************************************************
void loop()
{
 while(digitalRead(buton1) == HIGH)
{
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, HIGH);  
  digitalWrite(led2, LOW);   
  digitalWrite(led3, HIGH);   
  digitalWrite(led4, LOW);   
  digitalWrite(led5, HIGH);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, HIGH);     
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);     
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);     
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, HIGH);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);   
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);   
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, HIGH);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);     
  digitalWrite(led1, HIGH);     
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);     
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);     
  digitalWrite(led7, HIGH);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
    
  digitalWrite(led0, LOW);    
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);  
  digitalWrite(led5, HIGH);   
  digitalWrite(led6, LOW);  
  digitalWrite(led7, HIGH);    
  
  delay(temps);

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, HIGH);  
  digitalWrite(led5, LOW);   
  digitalWrite(led6, LOW);  
  digitalWrite(led7, LOW); 

           // Els led's van a una velocitat de 200ms
  delay(temps);

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);   
  digitalWrite(led6, LOW);  
  digitalWrite(led7, LOW); 
}
 while(digitalRead(buton2) == HIGH){

{
  digitalWrite(ledA, HIGH);    
  digitalWrite(ledB, LOW);  
  digitalWrite(ledC, LOW);   
  digitalWrite(ledD, LOW);   
  digitalWrite(ledE, LOW);   
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);    
  digitalWrite(ledH, HIGH);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, LOW);     
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, LOW);     
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);     
  digitalWrite(ledF, LOW);     
  digitalWrite(ledG, HIGH);    
  digitalWrite(ledH, LOW);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, HIGH);   
  digitalWrite(ledG, LOW);    
  digitalWrite(ledH, LOW);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, LOW);     
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);     
  digitalWrite(ledH, LOW);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, HIGH);   
  digitalWrite(ledE, HIGH);   
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);    
  digitalWrite(ledH, LOW);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, LOW);     
  digitalWrite(ledF, HIGH);     
  digitalWrite(ledG, LOW);     
  digitalWrite(ledH, LOW);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, LOW);   
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);   
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, HIGH);    
  digitalWrite(ledH, LOW);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(ledA, HIGH);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);  
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);  
  digitalWrite(ledH, HIGH);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, LOW);  
  digitalWrite(ledF, LOW);   
  digitalWrite(ledG, LOW);  
  digitalWrite(ledH, LOW);    
  
  delay(240);                  // Els led's van a una velocitat de 200ms

}}}


