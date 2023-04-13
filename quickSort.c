#include <stdio.h> 
// para muitos elementos, para minimizar o tempo 
int partition(int A[],int l, int r){ // encontra a melhor posição p vetor 
        // l é mais a esquerda e r mais a direita
        int pivot = A[l];
        int i = l;
        for(int j=l+1;j<=r;j++){
                //mudar o sinal pra > p fazer decrescente 
                if (A[j]<= pivot){
                        i++;
                        int aux = A[i];
                        A[i] = A[j];
                        A[j] = aux;
                }
        }
        // p selecionar o elemento que ficou no lugar do pivot e fazerr a troca 
        int aux = A[i];
        A[i] = A[l];
        A[l] = aux;
        return i;
}
//quicksort, retorna nada 
void quicksort(int A[], int l, int r){
        // caso base é qn fica um vetor com um único elemento 
        if(l<r){
                // partition retorna o valor i q é a posição ideal 
                int pivot_index = partition(A, l, r);
                quicksort(A,l,pivot_index-1);
                quicksort(A,pivot_index+1,r); 
        }
}
int main(){
        int vetor[] = {2,1,4,3,0};
        quicksort(vetor,0,4);
        for(int i=0;i<5;i++){
                printf("%d ", vetor[i]);
        }
        return 0;
}

// func sizeof p definir o tamanho de um vetor 