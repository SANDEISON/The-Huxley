sabor = input()
quantidade = int(input())

if sabor.lower() == "morango" or sabor.lower() == "cereja":
    total = quantidade*4.50
elif sabor.lower() == "damasco" or sabor.lower() == "siriguela":
    total = quantidade*3.80
else:
    total = quantidade*2.75

print("%.2f"%total)
if quantidade > 2:
    print ("COM CALDA")
else:
    print("SEM CALDA")
