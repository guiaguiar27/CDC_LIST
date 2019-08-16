#include <stdio.h> 
void linha(void){ 
    int n = 8 ; 
    for(int i = 0 ; i<n; i++){ 
        printf("==");
    } 
    printf("\n");
}
void main(){ 
    int quantidade = 0 ; 
    int idade, somatorio,maior_idade , menor_idade; 
    float media ; 
    somatorio = 0 ;    
    // ////////recebimento da primeira nota a fim de definir os parametros de notas (maior e menor )
    scanf("%d",&idade);    
    quantidade++; 
    somatorio = somatorio + idade ; 
    maior_idade =  menor_idade = idade;
    //////////////////////////////////////////////////////////////////////////// 
    while(idade > 0){ 
        scanf("%d",&idade);  
        if(idade < 0){ 
            break; 
            linha();
        }
        if(maior_idade < idade){ 
           maior_idade = idade; } 
        else if(menor_idade > idade){
            menor_idade = idade; }  
        somatorio += idade ; 
        quantidade++;
        /////////////////////////monitor///////////////////
        linha(); 
        printf("monitor \nquantidade: %d\nsoma: %d\n",quantidade,somatorio);
        linha(); 
        ///////////////////////////////////////////////////
        }  
    media = somatorio/quantidade; 
    printf("MEDIA DAS IDADES: %.2f\nMAIOR IDADE: %d\nMENOR IDADE: %d\n",media, maior_idade,menor_idade);
} 
