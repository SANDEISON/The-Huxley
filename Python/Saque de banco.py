verifica = int (input ())
notas = [0,0,0,0,0]

while verifica > 0:

    if verifica >= 50:
        verifica -= 50
        notas [4]+= 1
    elif verifica >= 20:
        verifica -= 20
        notas [3]+= 1
    elif verifica >= 10:
        verifica -= 10
        notas [2]+= 1
    elif verifica >= 5:
        verifica -= 5
        notas [1]+= 1
    else:
        verifica -= 1
        notas [0]+= 1

print ("Notas de 50:", notas[4])
print ("Notas de 20:", notas[3])
print ("Notas de 10:", notas[2])
print ("Notas de 5:", notas[1])
print ("Notas de 1:", notas[0])
