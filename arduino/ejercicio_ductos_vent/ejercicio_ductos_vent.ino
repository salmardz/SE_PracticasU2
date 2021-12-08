// activar los ductos del ventilador servomotor
// cuando la temp de un cuarto se encuenre por encima de los aceptada
// los ductos seran cerrados
#include<Servo.h>
Servo V1;
Servo V2;
Servo V3;
Servo V4;
// son analogicos
int S1 = A0;
int S2 = A1;
int S3 = A2;
int S4 = A3;
void setup() {

  V1.attach(13);
  V2.attach(11);
  V3.attach(9);
  V4.attach(8);




  Serial.begin(9600);

}
float tempS1, tempS2, tempS3, tempS4;
float TempDeseadaC1 = 24,
      TempDeseadaC2 = 16,
      TempDeseadaC3 = 30,
      TempDeseadaC4 = 27;
void loop() {
  tempS1 = 5.0 * analogRead(S1) * 100.0 / 1023.0;
  tempS2 = 5.0 * analogRead(S2) * 100.0 / 1023.0;
  tempS3 = 5.0 * analogRead(S3) * 100.0 / 1023.0;
  tempS4 = 5.0 * analogRead(S4) * 100.0 / 1023.0;

  Serial.println("Temp C1:" + String(tempS1) +
                 "\n Temp C2:" + String(tempS2) +
                 "\nTemp C3:" + String(tempS3) +
                 "\n Temp C4:" + String(tempS4) );

  if (tempS1 > TempDeseadaC1) {
    V1.write(180);
  } else {
    V1.write(0);
  }
  
  if (tempS2 > TempDeseadaC2) {
    V2.write(180);
  } else {
    V2.write(0);
  }
  
  if (tempS3 > TempDeseadaC3) {
    V3.write(180);
  } else {
    V3.write(0);
  }
  
  if (tempS4 > TempDeseadaC4) {
    V4.write(180);
  } else {
    V4.write(0);
  }

  delay (500);
}
