#define IR1 A0
#define IR2 A1
#define IR3 A2
#define IR4 A3

#define Button 2
int IRValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  pinMode(IR4,INPUT);

  pinMode(Button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  IRValue = analogRead(IR1);
  Serial.print("Analog [1] = ");
  Serial.println(IRValue);
  Serial.print("Button = ");
  Serial.println(digitalRead(Button));
  //delay(500);

  IRValue = analogRead(IR2);
  Serial.print("Analog [2] = ");
  Serial.println(IRValue);
  Serial.print("Button = ");
  Serial.println(digitalRead(Button));
  //delay(500);

  IRValue = analogRead(IR3);
  Serial.print("Analog [3] = ");
  Serial.println(IRValue);
  Serial.print("Button = ");
  Serial.println(digitalRead(Button));
  //delay(500);

  IRValue = analogRead(IR4);
  Serial.print("Analog [4] = ");
  Serial.println(IRValue);
  Serial.print("Button = ");
  Serial.println(digitalRead(Button));
  delay(1000);
}
