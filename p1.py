g = 9.80665
#n = 3.141159
import math
altura = float(input(""))
entrada = split().input(" ")
p1 = float(entrada[0])
p2 = float(entrada[1])
n_tentatvas = int(input(""))
i = 0

while(i <= n_tentativas):
    coordenadas = split().input(" ")
    angulo = float(coordenadas[0])
    velocidade = float(coordenadas[1])
    seno = math.sin(angulo)
    aux_velFinal = velocidade*seno
    velocidade_y_final = math.sqrt(pow(aux_velFinal,2) + 2g*altura)
    tempo = -1*(velocidade_y_final - velocidade)/g
    cosseno = math.cos(angulo)
    alcance = velocidade*cosseno*tempo
    if alcance >= p1 and alcance <= p2 :
        print(alcance," -> NUCK")
    else :
        print(alcance," -> DUCK")
