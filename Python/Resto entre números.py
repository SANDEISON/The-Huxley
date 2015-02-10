x = int (input ())
y = int (input ())
if x>y:
    aux = x
    x= y
    y = aux


j = x +1
for j in range(j,y):
    if ((j % 5) == 2) or ((j % 5) == 3):
        print(j)
