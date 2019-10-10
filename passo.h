typedef struct { 
    int passo; // passo 1 2 3 ... 
    int passo_executado ; // 1 passo executado com sucesso 0 passo não foi executado com sucesso 
}tipo_item; 
typedef struct celula* tipoApontadorFila ; 
typedef struct celula {
    tipo_item item_passo; 
    tipoApontadorFila prox ; 
}tipo_celula; 
typedef struct { 
    tipoApontadorFila frente , tras ; 
    
}tipo_fila; 
void faz_fila_passos_vazia(tipo_fila *ptr_fila); 
void fila_vazia(tipo_fila *ptr_fila); 
void enfilera_passo(tipo_fila *ptr_fila, tipo_celula *passo); 
int  desenfilera_passos(tipo_fila *ptr_fila, tipo_celula *passo); // fazer um if dentro dessa função , quando a o apontador frente for igual tras a fila foi esvaziada e passou de fase retorna 1 
