#include <stdio.h>
void main(){
    int codigo , qnt   = 0 ;
    float vl , total  = 0 ;
    scanf("%d %d",&codigo,&qnt);
    if (codigo == 1 ){
        vl = 4.0;
    } else if (codigo == 2){
        vl = 4.5;
    }else if(codigo == 3){
        vl =5.0;
    }else if(codigo == 4){
        vl = 2.0 ;
    }else if(codigo == 5 ){
        vl = 1.5;
    }
    total = (vl*qnt);
    printf("Total: R$ %.2f\n",total);

}
