#include <stdio.h>
int main()
{
    int vetor[3], i, aux;
    
    printf("Digite 3 valores: \n");
    for (i=0;i<3;i++){
        scanf("%d ",&vetor[i]);
        i++;
    }
    
    for (int j=0;j<2;j++){
        for (int k=0;k<2;k++){
            if (vetor[i]>vetor[i+1]){
                aux=vetor[i];
                vetor [i] = vetor[i+1];
                vetor[i+1] = aux; 
            }
        }
    }
    for (int i=0;i<3;i++){
        printf("%d ", &vetor[i]);
    }
    
    return 0;
}
