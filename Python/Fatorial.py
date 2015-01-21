n = 1

while n >=0:
    i=1
    fat = 1
    n = int (input ())
    if n == -1:
        break
    while i <= n:
        fat = fat * i
        i = i + 1
    print (fat)
