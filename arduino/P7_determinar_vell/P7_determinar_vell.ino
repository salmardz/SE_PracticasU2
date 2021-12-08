//Tarea 18 (Programa): Potencia de un número (X a la Y)
//variables
int distancia ;
int tiempo;
double velocidad;


void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(" Ingrese la distancia del objeto (km):");
  while (Serial.available() == 0) {
  }
  distancia  = Serial.parseInt();
    Serial.println(distancia);



  Serial.print("Ingrese el tiempo (Hrs)");
  while (Serial.available() == 0) {
  }
  tiempo  = Serial.parseInt();
    
      Serial.println(tiempo);


 velocidad = distancia /tiempo ;
  Serial.print("la velocidad del objeto es: "+ String (velocidad)+"Km/h");
        Serial.println("");

  delay(100);

}
