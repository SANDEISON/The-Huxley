aux = 0
n1 = int( input())
n2 = int( input())
n3 = int( input())

if n1 > n2:
    print("entrou 1 ")
    aux = n2
    n2 = n1
    n1 = aux
elif n1 > n3:
    print("entrou 2 ")
    aux = n3
    n3 = n1
    n1 = aux
elif n2 > n3:
    print("entrou 3 ")
    aux = n3
    n3 = n2
    n2 = aux

print (n1)
print (n2)
print (n3)
