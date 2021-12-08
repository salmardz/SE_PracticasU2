enum ESTADOS {
  IMPRIMIR_OP,
  LEER_OP,
  CALCULAR,
  REINICIAR
};
int op = 0;
int val = 0;
int score [2] = {0, 0};
int estado = 0;
String temporal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(250);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch (estado) {
    case IMPRIMIR_OP:
      Serial.println("Piedra papel o tigera");
      Serial.println("0.-Piedra");
      Serial.println("1.-Papel");
      Serial.println("2.-Tigera");
      estado++;
      break;

    case LEER_OP:
      if (Serial.available() > 0) {
        temporal = Serial.readString();
        op = temporal.toInt();
        val = random(0, 3);
        estado++;
        Serial.println();
      }
      break;

    case CALCULAR:
      Serial.println("\nElecciones:");
      Serial.println("Yo:" + String(val) + "  " +"Tu: " + temporal);
      if (op == val) {
        Serial.println("Empate!!! ;D\n");
      } else if (val == 0 and op == 1) {
        Serial.println("Ganaste!!! ;D\n");
        score[0]++;
      }
      else if  (val == 1 and op == 2) {
        Serial.println("Ganaste!!! ;D\n");
        score[0]++;
      }
      else if (val == 2 and op == 0) {
        Serial.println("Ganaste!!!\n");
        score[0]++;
      }
      else {
        Serial.println("Gane!!! :D\n");
        score[1]++;
      }
      estado++;
      Serial.println("Score: ");
      Serial.println("Yo:" + String(score[1]) + "  " + "Tu: " + String(score[0]));
      break;

    case REINICIAR:
      op = 0;
      temporal = "";
      estado = 0;
      val = 0;
      Serial.println("\n \n");
      break;

  }
}
