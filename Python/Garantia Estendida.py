valor = float (input())
anos = int(input())
taxa = 0
if anos == 1:
    taxa = valor* 0.03
elif anos == 2:
    taxa = valor* 0.05
total =valor + taxa

print ("%.2f" %total)
