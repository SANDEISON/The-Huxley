num1 = float (input())
num2 = float (input())
num3 = float (input())
if num1==num2==num3:
    print("equilatero")
elif num1==num2 or num1==num3 or (num2==num3):
    print("isosceles")
else:
    print("escaleno")
