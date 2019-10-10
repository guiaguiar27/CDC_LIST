#include "passos.h" 
typedef struct { 
    char nome_da_fase[20];
    tipo_fila passos_d0_desafio;  
    int fase_feita ; // 1 fase executada com sucesso 0 fase não foi executada com sucesso
}tipo_item ;
typedef struct celula* tipoApontadorPilha ; 
typedef struct celula{ 
    tipo_item item_desafio; 
    tipoApontadorPilha prox; 
}tipo_celula; 
typedef struct { 
    tipoApontadorPilha apontador_topo ;  
}tipo_pilha;
void faz_pilha_passos_vazia(tipo_pilha *ptr_pilha); 
void pilha_vazia(tipo_pilha *ptr_pilha); 
void empilha_desafios(tipo_fila *ptr_pilha, tipo_celula *desafio); 
void desempilha_desafios(tipo_pilha *ptr_pilha , tipo_celula *desafio);
