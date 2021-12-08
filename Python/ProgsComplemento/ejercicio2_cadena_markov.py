import numpy as n
mA = [[2,4,1],[5,7,8], [1,7,3]]
matrizA = n.array(mA)

mA_cuadrada = matrizA.dot(matrizA)
print (mA_cuadrada)


print()
mA_cubica = mA_cuadrada.dot(matrizA)
print (mA_cubica)

print ()
mA_ala2= matrizA.dot(matrizA)
print (mA_cubica)

print ()


