/*
       ________hs-02________
      | IR3            IR4 |
  M2  |        u2          |  M3
      |                    |
      |                    |
      |                    |
      |                    |
  M1  |         u1         |  M4
      |_IR2____________IR1_|

      flags - | |Button|U2|U1|IR4|IR3|IR2|IR1|
*/
/*-------------------------------------------------------------------------------------
                                     BIBLIOTECAS
-------------------------------------------------------------------------------------*/
#include <AFMotor.h>
#include <NewPing.h>
#include <TimerOne.h>
/*---------------------1----------------------------------------------------------------
                                     DEFINE
-------------------------------------------------------------------------------------*/
// --- define de controle ---
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define WHITE 500
#define DISTANCE 40

// --- Seleção dos Motores ---
AF_DCMotor motor1(1); //Seleção do Motor 1
AF_DCMotor motor2(2); //Seleção do Motor 1
AF_DCMotor motor3(3); //Seleção do Motor 1
AF_DCMotor motor4(4); //Seleção do Motor 1

// --- Seleção dos Ultrassonicos ---
#define SONAR1  9  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
#define SONAR2  10  // Arduino pin tied to both trigger and echo pins on the ultrasonic sensor.
// --- Inicialização dos Ultrassonicos ---
NewPing sonar1(SONAR1, SONAR1, MAX_DISTANCE); // NewPing setup of pin and maximum distance.
NewPing sonar2(SONAR2, SONAR2, MAX_DISTANCE); // NewPing setup of pin and maximum distance.
// --- Seleção dos Infra Vermelhos
#define IR1 A0
#define IR2 A1
#define IR3 A2
#define IR4 A3

// Seleção do Botão
#define Button 2

/*-------------------------------------------------------------------------------------
                                     FLAGS
-------------------------------------------------------------------------------------*/
// --- Controle ---
static byte flags = 0;

// --- Variaveis de armazenamento da distancia dos sonares ---
unsigned char valSonar1 = 0;
unsigned char valSonar2 = 0;

// --- Seleção das velocidade ---
unsigned char velocidade1 = 0x00; //Armazena a velocidade do motor1 (8 bits)
unsigned char velocidade2 = 0x00; //Armazena a velocidade do motor1 (8 bits)
unsigned char velocidade3 = 0x00; //Armazena a velocidade do motor1 (8 bits)
unsigned char velocidade4 = 0x00; //Armazena a velocidade do motor1 (8 bits)
