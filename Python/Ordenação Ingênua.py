num = int (input())
lista=[]
for i in range(num):
    x = int (input())
    lista.append(x)

lista.sort()

for i in range(num):
    print("["+str(lista[i])+"]",end='')
    
