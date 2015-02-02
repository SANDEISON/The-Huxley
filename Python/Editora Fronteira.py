nome = input()
anos = int (input())
desconto = 0
if nome.lower() == "mural":     
    total = anos * 200    
elif nome.lower() == "o coreto":
    total = anos * 235
elif nome.lower() == "meu lar":
    total = anos * 180
    desconto = total * 0.1
    
else:
    total = anos * 230
    desconto = total * 0.1
total -=desconto
print("%.2f"%total)
