n = 51
value = 0
soma = 0
k = 0
lista = []
for i in range(102):
    if i%2 != 0 :
        lista.append(i)
        k = k +1
for i in range(k):
    if i%2 == 0:
        soma += 1/(lista[i]*lista[i]*lista[i])
    elif i%2 != 0:
        soma -= 1 /(lista[i]*lista[i]*lista[i])
aux_var = soma*32
pi = pow(aux_var,1/3)
print(pi)
