idade = [1, 3 , 5]
porte = ["pequeno" , "médio",  "grande"]
dados = [[5 , 6 , 8] , [21 , 19 , 23], [26 , 32 , 38]]
num = int (input())
nome = input()

for i in range(3):
    if num == idade[i]:
        for j in range(3):
            if nome.lower() == porte[j]:
                print(dados[i][j])
