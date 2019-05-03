#include <stdio.h>
void main(){
    int const n = 10 ;
    int i,x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]<=0){
            x[i] = 1 ;
        }
    }
    for(i=0;i<n;i++){
        printf("X[%d] = %d\n",i,x[i]);
    }
}
