/* 
O Instituto Nacional de Meteorologia (INMET) deseja começar a fazer o controle dos dias de chuvas de cada
mês durante um ano e comparar para ver se a média de chuva dos anos está diminuindo ou aumentando.
Desenvolva um sistema que receba como entrada os dias de chuvas de 2 anos, calcule a média de dias
chuvosos por mês dos 2 anos e retorne se a média está aumentando ou diminuindo
*/
#include <stdio.h> 
void main(){ 
	int mes = 12, ano = 2 ; 
	int soma_dias = 0 ;  
	int dias ;  
	int media[2]; 
	for(int i = 0 ; i< ano; i++){ 
		for(int j = 0; j < mes ; j++ ){ 
			scanf("%d",&dias); 
			soma_dias += dias;  
		}   
		media[i] = soma_dias/mes; 
		printf("media: %d",media[i]);   
		printf("\n"); 
		soma_dias = 0 ;  

	}   
	if(media[0] > media[1]){ 
		printf("Diminuindo\n"); 
	}
	else if(media[0]< media[1]){ 
		printf("Aumentando\n");
	} 
	else { 
		printf(" media constante\n");
	}
}
