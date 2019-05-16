#include <stdio.h> 
void main(){ 
	int n = 5 ; 
	int nums[n]; 
	int pares , impares , negativos , positivos ; 
	pares = 0  ; 
	impares = 0 ; 
	negativos = 0 ; 
	positivos = 0 ;  
	for(int i = 0 ; i < n ; i++) nums[i] = 0 ; 
	//limpando o vetor 
	for(int i = 0 ; i< n ; i++){ 
		scanf("%d",&nums[i]); 
	}  
	for(int i = 0 ; i < n ; i++){ 
		if (nums[i]%2 == 0){ 
			pares++; 
		}else{ 
			impares++; 
		} 
		if(nums[i] >= 0){ 
			positivos++;  
		} 
		else { 
			negativos++;
		}
	} 
	printf("%d valor(es) par(es)\n",pares);
	printf("%d valor(es) impar(es)\n",impares); 
	printf("%d valor(es) positivo(s)\n",positivos); 
	printf("%d valor(es) negativo(s)\n",negativos); 

}
