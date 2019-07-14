#include <stdio.h>
void main(){ 
	int i , j ;   
	int dim ;   
	printf("Entre com a dimensao da matriz :\n"); 
	scanf("%d",&dim); 
	int value[dim][dim];
	for( i = 0 ; i< dim; i++){ 
		for(j = 0 ; j < dim ; j++){ 
			printf("Entre com o valor a ser posto na posição %dx%d:\n",i,j); 
			scanf("%d",&value[i][j]);
		}
	} 
	for(i = 0 ; i< dim; i++){ 
		for(j = 0 ; j < dim ; j++){ 
			printf("%d\t",value[i][j]);
		} 
		printf("\n");
	}  


}
/*27*\
