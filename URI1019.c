#include <stdio.h> 
void main(){ 
    int tempo_segundos , tempo_horas , tempo_minutos , const_tempo ; 
    tempo_horas = tempo_minutos = tempo_segundos =  0 ; 
    const_tempo = 60 ; 
    scanf("%d",&tempo_segundos);  
    if (tempo_segundos >= 60){ 
        tempo_minutos= tempo_segundos/const_tempo ; 
        tempo_segundos = tempo_segundos%const_tempo ; 
        if (tempo_minutos >= 60){ 
            tempo_horas = tempo_minutos/const_tempo; 
            tempo_minutos = tempo_minutos%const_tempo;    
        }     
    }
    printf("%d:%d:%d\n",tempo_horas,tempo_minutos,tempo_segundos);
     
}

