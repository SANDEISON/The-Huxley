n = int (input())
codigo =[]
descricao = []
preco = []
total = 0

for i in range(n):
    
    entrada_codigo = int (input())
    codigo.append(entrada_codigo)    
    entrada_descricao = input()
    descricao.append(entrada_descricao)    
    entrada_preco = float(input())
    preco.append(entrada_preco)
    
cod_pedido = 1

while 1:
    cod_pedido = int(input())
    if cod_pedido == 0:
        break
    quant_produto = float(input())
    for i in range(n):
        if cod_pedido == codigo[i] and quant_produto > 0:
            total += (quant_produto * preco[i])
   
print("%.2f"%total)
