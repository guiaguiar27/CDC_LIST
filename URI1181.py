n = 12
ln = int(input())
t = input()
#s = soma / m = media
matriz = []
soma = 0
for i in range(0, n ):
    linha = []
    for j in range( 0, n):
        a = float(input())
        linha.append(a)
    matriz.append(linha)
if t == "S":
    print("%.1f"%sum(matriz[ln ]))
elif t == "M":
    print("%.1f"%float(sum(matriz[ln])/n))
