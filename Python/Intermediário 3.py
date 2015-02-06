n1 = int ( input ())
n2 = int ( input ())
n3 = int ( input ())

if n1 > n2:
    Aux = n1
    n1 = n2
    n2 = Aux
if n1 > n3:
    Aux = n1
    n1 = n3
    n3 = Aux
if n2 > n3:
    Aux = n2
    n2 = n3
    n3 = Aux
    
print("%d"%n2)
