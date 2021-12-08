//Tarea 18 (Programa): Potencia de un número (X a la Y)
//variables
double peso ;
double estatura ;
double m;
double imc;


void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(" ingrese su peso (kg):");
  while (Serial.available() == 0) {
  }
  peso  = Serial.parseInt();
    Serial.println(peso);



  Serial.print("Ingrese la estatura(cm)");
  while (Serial.available() == 0) {
  }
  estatura  = Serial.parseInt();
    m = (estatura /100);
      Serial.println(m);


  imc = (peso / pow(m,2));
  Serial.print("el indice de masa corporal es: ");
  Serial.println(imc);
  delay(100);

}
