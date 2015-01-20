num2 = int(input ())
invert = 0
while num2 > 0:
    invert *= 10
    invert += num2 % 10
    num2 //= 10
print (invert)
