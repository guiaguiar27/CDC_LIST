par = [0 for x in range(5)]
impar = [0 for x in range(5)]
i =  0
cp = ci = 0
while (i < 15):
    a = int(input())
    if a%2 == 0 :
        par[cp] = a
        i += 1
        cp += 1

    elif a%2 != 0 :
        impar[ci] = a
        i+= 1
        ci += 1
    if ci == 5  :
        for j in range(ci):
            print("impar[{}] = {}".format(j,impar[j]))
        ci = 0
    elif cp == 5 :
        for j in range(cp):
            print("par[{}] = {}".format(j,par[j]))
        cp = 0
for j in range(ci):
    print("impar[{}] = {}".format(j,impar[j]))
for j in range(cp):
    print("par[{}] = {}".format(j, par[j]))
