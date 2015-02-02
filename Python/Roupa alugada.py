terno = [["simples","completo","fraque"] , [120.40, 150.35, 180.70]]
acessorio = [["gravata","sapato","cinto"], [30, 80, 15]]

tipo = input()
descricao = input()

if tipo.lower() == "terno":
    for i in range(3):
        if descricao.lower() == terno[0][i]: 
            total = terno[1][i] - (terno[1][i]*0.07)
            print("%.2f"%total)
            
else:
    for i in range(3):
        if descricao.lower() == acessorio[0][i]:
            print("%.2f"%acessorio[1][i])
