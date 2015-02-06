num = int (input())
verifica = num
notas = [0,0,0,0,0,0,0]

while verifica > 0:

    if verifica >= 100:
        verifica -= 100
        notas [6]+= 1
    elif verifica >= 50:
        verifica -= 50
        notas [5]+= 1    
    elif verifica >= 20:
        verifica -= 20
        notas [4]+= 1
    elif verifica >= 10:
        verifica -= 10
        notas [3]+= 1
    elif verifica >= 5:
        verifica -= 5
        notas [2]+= 1
    elif verifica >= 2:
        verifica -= 2
        notas [1]+= 1    
    else:
        verifica -= 1
        notas [0]+= 1

print ("%d"%num)
print (notas[6],"nota(s) de R$ 100,00")
print (notas[5],"nota(s) de R$ 50,00")
print (notas[4],"nota(s) de R$ 20,00")
print (notas[3],"nota(s) de R$ 10,00")
print (notas[2],"nota(s) de R$ 5,00")
print (notas[1],"nota(s) de R$ 2,00")
print (notas[0],"nota(s) de R$ 1,00")
