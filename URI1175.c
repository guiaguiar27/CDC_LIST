#include <stdio.h>
void main(){
    int const n = 20;
    int i,vec[n],aux ,inv,vec2[n];
    for(i = 0 ; i< n; i++){
        scanf("%d",&vec[i]);
    }
    for( i = 0; i< n; i++){
        inv = (n-1) - i ;
        aux = vec[i];
        vec2[i] = vec[inv];
        vec2[inv] = aux;


    }
    for(i = 0 ;i<n;i++){
        printf("N[%d] = %d\n",i,vec2[i]);
    }
}
