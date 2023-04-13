#include <stdio.h>
#define N 7

int main(){
        int vetor[N] = {7,4,5,9,8,2,1};
        for(int i=0;i<N-1;i++){
                int menor = i;
                for(int j=i+1;j<N;j++){
                        //pra ser decrescente muda aqui 
                        if(vetor[j]<vetor[menor]){
                                menor = j;
                        }
                }
                int aux = vetor[menor];
                vetor[menor] = vetor[i];
                vetor[i] = aux;
        }
        for(int i=0;i<N;i++){
                printf("%d ", vetor[i]);
        }
        return 0;
}
 

/* 
int main(){
        int vetor[N] = {7,4,5,9,8,2,1};
        for(int i=0;i<N-1;i++){
                int maior = i;
                for(int j=i+1;j<N;j++){
                        //pra ser decrescente muda aqui 
                        if(vetor[j]>vetor[maior]){
                                maior = j;
                        }
                }
                int aux = vetor[maior];
                vetor[maior] = vetor[i];
                vetor[i] = aux;
        }
        for(int i=0;i<N;i++){
                printf("%d ", vetor[i]);
        }
        return 0;
} */