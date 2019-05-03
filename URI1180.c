#include <stdio.h> 
void main(){ 
    int n,i ;  
    scanf("%d",&n);  
    int x[n],menor,pos; 
    pos = 0 ;  
    for(i = 0 ; i< n ;i++ ){ 
        scanf("%d",&x[i]);
        if(i == 0 ){ 
          menor = x[i]; 
          pos = i ; 
        }
    }
    for(i = 0 ; i< n ;i++ ){ 
        if(x[i]<= menor){ 
            menor = x[i];
            pos = i ; 
         }
    } 
    printf("Menor valor: %d\n",menor);  
    printf("Posicao: %d\n",pos); 
    
    } 
