#include <AFMotor.h>

// --- Seleção dos Motores ---
AF_DCMotor motor1(1); //Seleção do Motor 1
AF_DCMotor motor2(2); //Seleção do Motor 1
AF_DCMotor motor3(3); //Seleção do Motor 1
AF_DCMotor motor4(4); //Seleção do Motor 1

// --- Variáveis Globais ---
unsigned char velocidade1 = 0x00; //Armazena a velocidade do motor1 (8 bits)
 
// --- Configurações Iniciais ---
void setup()
{
   //A biblioteca se encarrega de setar entradas e saídas!

} //end setup
 
// --- Loop Infinito ---
void loop()
{
      velocidade1 = 0xFF;           //Velocidade recebe o valor máximo
      //motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor1.run(FORWARD);          //Movimenta motor no sentido horário
      //motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor2.run(FORWARD);          //Movimenta motor no sentido horário
      //motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      //motor3.run(FORWARD);          //Movimenta motor no sentido horário
      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(FORWARD);          //Movimenta motor no sentido horário
      delay(2000);                  //Mantém por 2 segundos
      
    /*  velocidade1 = 0x00;           //Velocidade recebe o valor mínimo
      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(RELEASE);          //Motor parado
      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(RELEASE);          //Motor parado
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(RELEASE);          //Motor parado
      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(RELEASE);          //Motor parado
      delay(2000);                  //Mantém por 2 segundos
      
      
      velocidade1 = 0xFF;           //Velocidade recebe o valor máximo
      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(BACKWARD);         //Movimenta motor no sentido anti-horário
      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(BACKWARD);         //Movimenta motor no sentido anti-horário
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(BACKWARD);         //Movimenta motor no sentido anti-horário
      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(BACKWARD);         //Movimenta motor no sentido anti-horário
      delay(2000);                  //Mantém por 2 segundos
      
      velocidade1 = 0x00;           //Velocidade recebe o valor mínimo
      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(RELEASE);          //Motor parado
      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(RELEASE);          //Motor parado
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(RELEASE);          //Motor parado
      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(RELEASE);          //Motor parado
      delay(2000);                  //Mantém por 2 segundos
      
      // -- Controle Gradativo de Aceleração --
      for(velocidade1 = 0x00; velocidade1<255; velocidade1++)
      {
         motor1.setSpeed(velocidade1); //Atualiza velocidade
         motor1.run(FORWARD);          //Motor gira em sentido horário
         motor2.setSpeed(velocidade1); //Atualiza velocidade
         motor2.run(FORWARD);          //Motor gira em sentido horário
         motor3.setSpeed(velocidade1); //Atualiza velocidade
         motor3.run(FORWARD);          //Motor gira em sentido horário
         motor4.setSpeed(velocidade1); //Atualiza velocidade
         motor4.run(FORWARD);          //Motor gira em sentido horário
         delay(10);                    //Taxa de atualização de 10 ms
      
      } //end for
      
      velocidade1 = 0x00;           //Velocidade recebe o valor mínimo
      motor1.setSpeed(velocidade1); //Seleciona velocidade atual
      motor1.run(RELEASE);          //Motor parado
      motor2.setSpeed(velocidade1); //Seleciona velocidade atual
      motor2.run(RELEASE);          //Motor parado
      motor3.setSpeed(velocidade1); //Seleciona velocidade atual
      motor3.run(RELEASE);          //Motor parado
      motor4.setSpeed(velocidade1); //Seleciona velocidade atual
      motor4.run(RELEASE);          //Motor parado
      delay(2000);  */                //Mantém por 2 segundos
      
      

} //end loop
