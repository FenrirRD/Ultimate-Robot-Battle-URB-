/*-------------------------------------------------------------------------------------
                          Aceleração para frente
-------------------------------------------------------------------------------------*/
void frente(char vel1,char vel2,char vel3,char vel4)
{
  motor1.setSpeed(vel1); //Seleciona velocidade atual
  motor1.run(FORWARD);
  motor2.setSpeed(vel2); //Seleciona velocidade atual
  motor2.run(FORWARD);
  motor3.setSpeed(vel3); //Seleciona velocidade atual
  motor3.run(FORWARD);
  motor4.setSpeed(vel4); //Seleciona velocidade atual
  motor4.run(FORWARD);
}
void tras(char vel1,char vel2,char vel3,char vel4)
{
  motor1.setSpeed(vel1); //Seleciona velocidade atual
  motor1.run(BACKWARD);
  motor2.setSpeed(vel2); //Seleciona velocidade atual
  motor2.run(BACKWARD);
  motor3.setSpeed(vel3); //Seleciona velocidade atual
  motor3.run(BACKWARD);
  motor4.setSpeed(vel4); //Seleciona velocidade atual
  motor4.run(BACKWARD);
}
void direita(char vel1, char vel2, char vel3, char vel4)
{
  motor1.run(FORWARD);
  motor1.setSpeed(vel1);
  motor2.run(FORWARD);
  motor2.setSpeed(vel2);
  motor3.run(BACKWARD);
  motor3.setSpeed(vel3);
  motor4.run(BACKWARD);
  motor4.setSpeed(vel4);
}
void esquerda(char vel1, char vel2, char vel3, char vel4)
{
  motor1.run(BACKWARD);
  motor1.setSpeed(vel1);
  motor2.run(BACKWARD);
  motor2.setSpeed(vel2);
  motor3.run(FORWARD);
  motor3.setSpeed(vel3);
  motor4.run(FORWARD);
  motor4.setSpeed(vel4);
}

void parado()
{
   motor1.run(RELEASE);
   motor2.run(RELEASE);
   motor3.run(RELEASE);
   motor4.run(RELEASE);
}
  


