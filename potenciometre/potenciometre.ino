/*************************************************************************************
**                                                                                  **
**             Aquest programa fa una lectura analgica del canal A0                 **
**             i mostra el valor codificat el 10 bits                               **
**                                                                                  **
*************************************************************************************/
 
//******  Includes  ******************************************************************



//******  Variables  *****************************************************************



//******  Includes  ******************************************************************
void setup() {                
  Serial.begin(9600);     
}



//******  Loop  **********************************************************************
void loop() {
  Serial.println(analogRead(A0));
}
