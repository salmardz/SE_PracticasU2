// activar los ductos del ventilador servomotor
// cuando la temp de un cuarto se encuenre por encima de los aceptada
// los ductos seran cerrados
#include<Servo.h>
Servo V1;

// son analogicos
int S1 = A0;

void setup() {

  V1.attach(13);
  Serial.begin(9600);

}
float tempS1;
float TempDeseadaC1 = 24;
   
void loop() {
  tempS1 = 5.0 * analogRead(S1) * 100.0 / 1023.0;

  Serial.println("Temp C1:" + String(tempS1) );

             
  if (tempS1 > TempDeseadaC1) {
    V1.write(180);
  } else {
    V1.write(0);
  }
  
  delay (500);
}
