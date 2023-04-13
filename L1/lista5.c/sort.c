#include <stdio.h>
#define n 3

int main(){
        
        int vetor[n], original[n];
        scanf("%i %i %i",&vetor[0],&vetor[1],&vetor[2]);
        original[0] = vetor[0];
        original[1] = vetor[1];
        original[2] = vetor[2];


        for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1;j++){
                        if(vetor[j]>vetor[j+1]){
                                int aux = vetor[j];
                                vetor[j] = vetor[j+1];
                                vetor[j+1] = aux;
                        }
                }
        } 
        for(int i=0;i<n;i++){
                printf("%d\n",vetor[i]);
        }
        //printf("\n%d\n%d\n%d\n",vetor[0],vetor[1],vetor[2]);
        printf("\n");
        printf("%i\n",original[0]);
        printf("%i\n",original[1]);
        printf("%i\n",original[2]);
        return 0;

}