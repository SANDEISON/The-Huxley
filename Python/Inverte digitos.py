num = 1
while num != 0:
    num = int(input ())
    if num == 0:
        break
    invert = 0
    num2 = num
    abre = '['
    fecha = ']'
    while num2 > 0:
        invert *= 10        
        invert = num2 % 10
        num2 //= 10
        print("%c%d%c" %(abre,invert,fecha),end='')
    print()
