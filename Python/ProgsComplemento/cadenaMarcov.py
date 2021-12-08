import numpy as n
t = [[0.2,0.6,0.2],[0.1,0.7,0.2],[]]
matriz_P0 = n.array(Pinicial)
print (matriz_P0)
# p1 =
print (P2)
print ("p1: ")
p1 = matriz_P0.dot(matriz_t)


estadoDeseado = int (input("ingrese el numero de estados que deseas"))
print ("estado buscado"+str(estadoDeseado))

estadoActual = matriz_P0
print("P"+str(estadoActual))

for i in range (estadoDeseado):
    estadoActual=estadoActual.dot(matriz_T)
    print("P"+str(i+1)+":"+str(estadoActual))
print ("resultado: ")
print ("\nresultado (p"+str(estadoDeseado)+"):")
print (estadoActual)