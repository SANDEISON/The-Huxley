quantidade = int (input())
cidade = input()
qt_quartos = int (input())

if cidade.lower() == "pipa":
    if qt_quartos == 2:
        valor_total = (quantidade * 75)+ 600
        valor_unitario = valor_total / quantidade
    else:
        valor_total = (quantidade * 75)+ 900
        valor_unitario = valor_total / quantidade
else:
    if qt_quartos == 3:
        valor_total = (quantidade * 60)+ 950
        valor_unitario = valor_total / quantidade
    else:
        valor_total = (quantidade * 60)+ 1120
        valor_unitario = valor_total / quantidade


print("%.2f" %valor_total)
print("%.2f" %valor_unitario)
