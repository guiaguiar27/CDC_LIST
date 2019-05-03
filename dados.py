import math
def linha(): 
	print("================================================================================")  
q = int(input(" entre com a quantidade de dados: ")) 
linha()
dados = []
sum_dados = 0  
sum_aux = 0  
mediana = 0 
media = 0 
value = 0 
variancia = 0 
desvio_padrao = 0  
quartil = 0  
cont_aux = 0 
for i in range(q): 
	value =  int(input("")) 
	dados.append(value) 
print("dados obtidos :",dados[:])  
linha()  
for i in range(q): 
	sum_dados = sum_dados + dados[i]
print("soma dos dados:",sum_dados) 
linha() 
media = sum_dados/q  
print("media:",media) 
linha() 
if q%2 == 0 : 
	#mediana par   
	for i in range(q): 
		if i == q/2: 
			sum_aux = q/2   
			sum_aux = sum_aux + (q/2 + 1) 
	mediana = sum_aux/2 	 
elif q%2 != 0 : 
	mediana = q/2 
print("mediana:",mediana) 
linha() 
for i in range(q): 
	variancia = variancia + (dados[i] - media)*(dados[i] - media)
variancia = variancia/q
print("variancia:",variancia) 
linha()  
desvio_padrao = math.sqrt(variancia) 
print("desvio padrao:",desvio_padrao)  


