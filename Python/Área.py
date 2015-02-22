entrada = input()
entrada = entrada.split()
A = float ( entrada[0])
B = float ( entrada [1])
C = float ( entrada [2])

TRIANGULO = (A * C) / 2 
CIRCULO = (C**2)  * 3.14159 
TRAPEZIO = (A+B)*C / 2
QUADRADO = B * B
RETANGULO = A * B


print("TRIANGULO: %.3f"%TRIANGULO)
print("CIRCULO: %.3f"%CIRCULO)
print("TRAPEZIO: %.3f"%TRAPEZIO)
print("QUADRADO: %.3f"%QUADRADO)
print("RETANGULO: %.3f"%RETANGULO)
