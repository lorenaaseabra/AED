#include <stdio.h>
#define N 4

int main(){
    int vetor[N] = {4,1,2,3};
    int i;
    int aux;

//CODIGO DE ORDENAÇÃO BUBBLE SORT:   

    for (i = 0; i<N-1 ; i++){
        for(int j = 0; j<N-1; j++){
                if(vetor[j] > vetor[j+1]){
                        aux = vetor[j];
                        vetor[j] = vetor[j+1];
                        vetor[j+1] = aux;
                }
        }
    }

//IMPRIMINDO O VETOR:

    for (i = 0; i<N ; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;

}
