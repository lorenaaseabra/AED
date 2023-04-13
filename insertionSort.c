#include <stdio.h>

int main(){
        int n = 6;
        int vetor[] = {2,8,5,3,9,4};
        for(int i=1;i<n;i++){
                int j = i;
                while(j>0 && vetor[j-1]>vetor[j]){
                        int aux = vetor[j];
                        vetor[j] = vetor[j-1];
                        vetor[j-1] = aux;
                        j--;
                }
        }
        for(int i=0;i<n;i++){
                printf("%d, ",vetor[i]);
        }
        return 0;
}

/* #include <stdio.h>
#define N 4 */

/* int main(){
    int vetor[N] = {4,1,2,3};
    int i;
    int j;
    int aux;

//CODIGO DE ORDENAÇÃO INSERTION SORT:   

    for (i = 1; i < N; i++ ) {
    j = i;
    while ((vetor[j] < vetor[j-1]) && j > 0) {
    aux = vetor[j-1];
    vetor[j-1] = vetor[j];
    vetor[j] = aux;
    j--;
    }
    }

//IMPRIMINDO O VETOR:

    for (i = 0; i < N; i++ ) {
    printf("%d ", vetor[i]);
    }
    
    return 0;

} */
