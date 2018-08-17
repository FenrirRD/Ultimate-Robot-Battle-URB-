/*-------------------------------------------------------------------------------------
                                       Sumô
-------------------------------------------------------------------------------------*/
void modeSumo()
{
  switch (mode)
  {
    case -1:
      parado();
      break;
    case 0:
      frente(250, 250, 250, 250);
      mode = 4;
      break;
    case 1:
      tras(150, 150, 150, 150);
      mode = 5;
      break;
    case 2:
      direita(150, 150, 150, 150);
      mode = 6;
      break;
    case 3:
      esquerda(150, 150, 150, 150);
      mode = 6;
      break;
    default:
      if(enableIR == 1)
      {
        checkIR();
        enableIR = 0;
      }
      if (temporizador >= 25)
      {
        checkSonar();
        temporizador = 0;
        difSonor = valSonar1 -  valSonar2;
      }
      break;
  }
}
/*-------------------------------------------------------------------------------------
                                Verificação dos IR
-------------------------------------------------------------------------------------*/
void hunting()
{
  if ( (flags & B00000001) && (flags & B00000010)) { // se os dois IR  da frente ativaram
    diresq = -1;
    mode = 1;
    flags = flags & B11111100;
    tempo = 0;
  }
  else if (flags & B00000001) { // se somente o IR1
    diresq = 0;
    mode = 1;
    flags = flags & B11111110;
    tempo = 0;
  }
  else if (flags & B00000010) { //se somente o IR2
    diresq = 0;
    mode = 1;
    flags = flags & B11111101;
    tempo = 0;
  }
  /*if (flags & B0000100) {
    flags = flags & B11111011;
  }
  if (flags & B00001000) {
    flags = flags & B11110111;
  }*/
  if(flags & B00001111)
  {
    mode = -1;
  }

  /*while (valSonar1 >= DISTANCE && valSonar2 >= DISTANCE) {
    checkSonar();
    direita(150, 150, 150, 150);
  }
  if (difSonor <= 5) {
    frente(250, 250, 250, 250);
  }*/
}
/*-------------------------------------------------------------------------------------
                                Verificação dos IR
-------------------------------------------------------------------------------------*/
void controleTempo()
{
  switch (mode)
  {
    case 0:
      break;
    case 1:
    case 5:
      if(tempo >= 83)
      {
        if (diresq == -1)
        {
          if(random(999)%2 == 0)
          {
            mode = 2;
          }
          else
          {
            mode = 3;
          }
        }
        else if (diresq == 0)
        {
          mode = 2;
        }
        else
        {
          mode = 3;
        }
        tempo = 0;
      }
      break;
    case 2:
    case 3:
    case 6:
      if(tempo >= 166)
      {
        mode = 0;
        tempo = 0;
      }
      break;
    default :
      break;
  }
}
/*-------------------------------------------------------------------------------------
                                Verificação dos IR
-------------------------------------------------------------------------------------*/
void checkIR()
{
  int IRValue1,IRValue2,IRValue3,IRValue4;
  // --- Leitura das entradas analogicas ---
  IRValue1 = digitalRead(IR1);
  IRValue2 = digitalRead(IR2);
  IRValue3 = digitalRead(IR3);
  IRValue4 = digitalRead(IR4);
  // --- Se IR estiver detectando o branco enão ativa seu respectivo bit ---
  if(IRValue1 == 0) flags = flags | B00000001;
  if(IRValue2 == 0) flags = flags | B00000010;
  if(IRValue3 == 0) flags = flags | B00000100;
  if(IRValue4 == 0) flags = flags | B00001000;
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
