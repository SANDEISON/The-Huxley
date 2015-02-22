num = input()
num = num.split()

n = int(num[0])
m = int(num[1])

cont = 0
for i in range(n,m+1):
    
    if i%5==0:
        if cont == 0:
            print("%d"%i,end='')
            cont = 1
        else:
            print("|%d"%i,end='')
