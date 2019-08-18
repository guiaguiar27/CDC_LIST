#include <stdio.h> 
/*Faça um algoritmo que seja capaz de identificar se uma matriz é uma matriz identidade ou não. */
void main(){ 
	int dimensao, dg_termos , fora_dg_termos,aux; /*dg = diagonal principal*/
	printf("Entre com a dimensao :\n "); 
	scanf("%d",&dimensao);  
	int matriz[dimensao][dimensao];      
	dg_termos = 0 ; 
	fora_dg_termos = 0 ;  
	aux = dimensao*dimensao - dimensao; /*quantidade de termos que não pertencem a diagonal principal */

	//preenchimento da matriz  
	for(int i = 0 ; i< dimensao ;i++){ 
		for(int j = 0 ; j< dimensao ; j++){  
			printf("termo[%d][%d]:",i,j);
			scanf("%d",&matriz[i][j]); 		 
		} 
		printf("\n");
	} 
	//reconhecimento da matriz identidade  
	for(int i = 0 ; i< dimensao; i++){ 
		for(int j = 0 ; j< dimensao;j++){ 
			if(i == j){ 
				if(matriz[i][j] == 1 ){ dg_termos++;  }
			 }  
			 else { 
			 	if(matriz[i][j] == 0){ fora_dg_termos++;}
			 }
		}
	} 
	if(dg_termos == dimensao && fora_dg_termos == aux ) { printf("A matriz é identidade \n ");}

}
