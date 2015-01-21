tabela = [[1,2,3,4], [5.30, 6 , 3.20 , 2.50]]
codigo = int (input())
quantidade = int (input())
desconto = 0
for i in range(4):
    if codigo == tabela[0][i]:
        valor_pago = ( quantidade * tabela[1][i] )
if quantidade >= 15 or valor_pago>=40:
    desconto = valor_pago * 0.15
       
valor_pago -= desconto
print("R$ %.2f" %valor_pago)
