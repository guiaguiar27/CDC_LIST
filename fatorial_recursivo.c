#include <stdio.h> 
int fact(int n ){ 
	int aux ;
	aux = n -1 ;   
	if(n ==1 || n== 0 ){ 
		return 1 ; 
	 } 
	else{ 
		return n*fact(aux);
	}
}  

void main(){   
	int value, fatorial ; 
	scanf("%d",&value);  
	fatorial = fact(value);
	printf("%d\n",fatorial);

}
