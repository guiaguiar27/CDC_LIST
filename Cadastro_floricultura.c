#include <stdio.h>  
#include <string.h>
 
typedef struct{ 
	int codigo_id; 
	char nome[30]; 
	float preco; 
	char pais_de_origem[20]; 
	int quantidade_em_estoque; 
	char coloracao[10];  

}atributos_flores ; 

void main(){     
	int n, aux;  
	char nome_flor[30]; 
	scanf("%d",&n); 
	atributos_flores flores[n]; 
	aux = 0 ;  
	for(int i = 0 ; i < n ; i++){  

		printf("Entre com o codigo de identificao da flor %d:\n",i+1);  
		scanf("%d",&flores[i].codigo_id);   
		if(flores[i].codigo_id <0 ){ 
			break;
		}
		
		printf("Entre com o nome da flor %d:\n",i+1); 
		scanf("%s",flores[i].nome); 
		
		printf("Entre com o preco da flor %d:\n",i+1); 
		scanf("%f",&flores[i].preco); 

		printf("Entre com o nome do pais de origem da flor %d:\n",i+1); 
		scanf("%s",flores[i].pais_de_origem); 

		printf("Entre com a quantidade em estoque da flor %d:\n",i+1); 
		scanf("%d",&flores[i].quantidade_em_estoque);
		printf("Entre com a coloracao da flor %d:\n",i+1); 
		scanf("%s",flores[i].coloracao);  

		printf("\n");
	}     
	printf("---------------------\n");
	printf("        BUSCADOR    \n"); 
	printf("---------------------\n"); 
	while(aux >= 0){ 
		printf("Entre com o nome da flor:\n"); 
		scanf("%s",nome_flor);  
		for(int i = 0 ; i < n ; i++){ 
			 if(strcmp(flores[i].nome,nome_flor) == 0){  
			 	printf("codigo de identificao:%d\nNome:%s\nPreco:%.2f\nPais de origem:%s\nQuantidade em estoque:%d\nColoracao:%s\n",flores[i].codigo_id,flores[i].nome,flores[i].preco,flores[i].pais_de_origem,flores[i].quantidade_em_estoque,flores[i].coloracao); 
				printf("\n");
			 } 
		} 
		if(strcmp(nome_flor,"sair")==0){ 
			break; 
			printf("Obrigado pela utilizacao do sistema\n");
		}else{ 
			aux++;
		}
	}
	

}
