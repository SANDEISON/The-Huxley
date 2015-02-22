codigo1 = input()
codigo2 = input()

codigo1 = codigo1.split()
codigo2 = codigo2.split()


calculo = (int(codigo1[1]) * float (codigo1[2])) + ( int (codigo2[1] ) * float (codigo2[2]))

print ("VALOR A PAGAR: R$ %.2f" %calculo)
