//Tarea 15 (Programa): Promedio de 5 numeros

//variables
int n;
int numero;
int mayor = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("cuantos numeros desea agregar");
  while (Serial.available() == 0) {
  }
  n = Serial.parseInt();


  for (int i = 0; i < n; i++) { // interaciones asta que el usuario eliga 
    Serial.print("ingrese los numeros ");

    while (Serial.available() == 0) {// mientras sea 0 no se recorre
    }
    numero = Serial.parseInt();// escribe el numero
    Serial.println(numero);

    // compara el ultimo numero con el nuevo en cada recorrido i++
    if (numero > mayor) {
      mayor = numero;
    }
// sale del ciclo y muestra el resultado
  }
  Serial.println("\n el numero mayor es: " + String(mayor)); // concatena el numero con la cadena
  Serial.println(mayor);

  //promedio es


  delay(100);

}
