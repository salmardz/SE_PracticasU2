// conpuerta and 
// A B S
// 0 0 0
// 0 1 0
// 1 0 0
// 1 1 1

const byte A =6; // pin digital 
const byte B =7;
const byte S =8;

void setup() {

pinMode (A, INPUT); //entrada 
pinMode (B, INPUT );//entrada 
pinMode (S, OUTPUT);//salida
}
void loop() {
  boolean EntA, EntB; // declaracion de forma booleana en 0 y 1
  EntA= digitalRead(A);// entrada A
  EntB = digitalRead(B); //entrada B

if (EntA and EntB){// si ambas estan en bajo se pone low(bajo
  digitalWrite(S,HIGH);// alto
}  else{
    digitalWrite(S,LOW); // bajo
  }
}
