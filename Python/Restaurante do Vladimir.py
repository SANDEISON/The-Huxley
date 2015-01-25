total = 0
produto = input()
sabor = input()
quantidade = int(input())

if produto.lower() == "pizza":
    if sabor.lower() == "calabresa" or sabor.lower() == "marguerita":
        total = (quantidade*2)+ (quantidade*20.60)
    else:
         total = (quantidade*2)+ (quantidade*30.90)
else:
    if sabor.lower() == "queijo":
         total = (quantidade*2)+ (quantidade*18)
    else :
         total = (quantidade*2)+ (quantidade*23)
print ("%.2f"%total)
