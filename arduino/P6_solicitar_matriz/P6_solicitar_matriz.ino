//Tarea 18 (Programa): Potencia de un número (X a la Y)
//variables
int a, b ;
int c, d;


void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(" ingrese a de la fila 1:");
  while (Serial.available() == 0) {
  }
  a  = Serial.parseInt();
  Serial.println(a);


  Serial.print("Ingrese b de la fila 2)");
  while (Serial.available() == 0) {
  }
  b  = Serial.parseInt();
  Serial.println(b);
  Serial.print ("F1 =[ " + String(a) + " , " + String(b) + "]" );

  Serial.println(" ingrese c de la fila 2:");
  while (Serial.available() == 0) {
  }
  c  = Serial.parseInt();
  Serial.println(c);


  Serial.print("Ingrese d de la fila 2)");
  while (Serial.available() == 0) {
  }
  d  = Serial.parseInt();
  Serial.println(d);
  Serial.print ("F2 =[ " + String(c) + " , " + String(d) + "]" );
  Serial.println();

  // operacion
  Serial.print ("F1 =[ " + String(a) + " , " + String(b) + "]" );
  Serial.println();
  Serial.print ("F2 =[ " + String(c) + " , " + String(d) + "]" );

  int m = a * d;
  int m2 = c * b;
  int det = m - m2;
  Serial.println();
  Serial.print("el determinante es: ");
  Serial.println(det);
  delay(100);

}
