peso = float(input())
if peso > 30:
    print("PESO LIMITE EXCEDIDO")
elif peso >= 26:
    print("%.2f"% ((peso-20)*32.75))
elif peso >=21:
    print("%.2f"%((peso-20)*12.50))
else:
    print("%.2f" %0)
