#include <stdio.h> 
#define consumo 16/* km/l */; 
void main(){  
    float tempo,velocidade,distancia,consumo_medio;   
    printf("Entre com o tempo e a velocidade:\n");
    scanf("%f %f",&tempo,&velocidade); 
    distancia = velocidade/tempo;  
    consumo_medio = distancia/consumo; 
    printf("O trajeto consiste em %.1f Km e havera um consumo de %.2f Litros\n",distancia,consumo_medio);


    
}
