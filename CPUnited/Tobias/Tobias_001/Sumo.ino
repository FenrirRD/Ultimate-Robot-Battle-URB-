/*-------------------------------------------------------------------------------------
                                       Sumô
-------------------------------------------------------------------------------------*/
void modeSumo()
{

}
/*-------------------------------------------------------------------------------------
                                Verificação dos IR
-------------------------------------------------------------------------------------*/
void checkIR()
{
  int IRValue1,IRValue2,IRValue3,IRValue4;
  // --- Leitura das entradas analogicas ---
  IRValue1 = analogRead(IR1);
  IRValue2 = analogRead(IR2);
  IRValue3 = analogRead(IR3);
  IRValue4 = analogRead(IR4);
  // --- Se IR estiver detectando o branco enão ativa seu respectivo bit ---
  if(IRValue1 <= WHITE) flags = flags | B00000001;
  if(IRValue2 <= WHITE) flags = flags | B00000010;
  if(IRValue3 <= WHITE) flags = flags | B00000100;
  if(IRValue4 <= WHITE) flags = flags | B00001000;
}
/*-------------------------------------------------------------------------------------
                          Verificação dos Ultrassonicos
-------------------------------------------------------------------------------------*/
void checkSonar()
{
  valSonar1 = sonar1.ping_cm();
  valSonar2 = sonar2.ping_cm();
  if(valSonar1 <= DISTANCE) flags = flags | B00010000;
  if(valSonar2 <= DISTANCE) flags = flags | B00100000;
}
