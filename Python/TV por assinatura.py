canais = [32, 55 , 70 , 112]
mensalidade = [80.80 , 100.40 , 130.23 , 215.50]
pacote = ["básico" , "entretenimento",  "multicultural", "completo"]
achou = 0
desconto = 0
nome_pacote = (input())
pagamento = input()



for i in range(4):
    if nome_pacote.lower() == pacote[i]:
        achou = i
if pagamento.lower() == "débito automático":
    if achou == 0 or achou == 1:
        desconto = mensalidade[achou] * 0.05
        canais[achou]+=6
    else:
        desconto = mensalidade[achou] * 0.1
        canais[achou]+=11

print("%.2f" %(mensalidade[achou]- desconto))
print("%d"%canais[achou])
