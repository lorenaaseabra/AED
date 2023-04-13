//MergeSort é estável
//MergeSort não é in place
//Em resumo a função mergeSort do código serve para dividir os vetores recursivamente e o merge vai realizar todo o processo de trocas e reagrupamento

#include <stdio.h> 

void merge(int arr[],int l,int m, int r){
    int n1 = m - l + 1; //tamanho do vetor a esquerda (l+1 pq o vetor começa com indice 0)
    int n2 = r - m; //tamanho do vetor a direita
    
    int L[n1]; //criação do primeiro vetor para comparação (left)
    int R[n2]; //criação do segundo vetor para comparação (right)
    
    //passagem dos valores para o vetor left
    for (int i = 0; i < n1; i++){
    	L[i] = arr[i + l]; //soma-se o l para garantir que o vetor vai ser percorrido corretamente caso a posição inicial não seja 0
    }
    
    //passagem dos valores para o vetor right
    for(int i = 0; i < n2; i++){
    	R[i] = arr[i + m + 1]; //soma 1 pra pegar a partir da segunda metade sem considerar o valor do meio
    }
    
    //variaveis auxiliares
    int i = 0;
    int j = 0;
    int k = l; //k = l é usado para garantir que o índice do valor no vetor é o do vetor inicial e não dos vetores auxiliares left e right
    
    while(i < n1 && j < n2){ // enquanto  i for menor que o tamanho do vetor a esquerda AND j for menor que o tamanho do vetor a direita compara
    
    	//PARA FAZER O PROCESSO EM ORDEM DECRESCENTE SÓ MUDAR O <= PARA > NA PRÓXIMA LINHA !!!!!!
    	if(L[i] <= R[j]){ //caso o elemento do vetor a esquerda for menor que o da direita
    		arr[k] = L[i]; //o vetor final recebe o elemento da esquerda
    		i++; //passa para a análise do proximo valor do vetor da esquerda
    	}
    	else{ //caso o elemento do vetor a direita for menor que o da esquerda
    		arr[k] = R[j]; //o vetor final recebe o elemento da direita
    		j++; //passa para análise do próximo valor a direita
    	}
    	k++; //passa para a proxima iteração onde vai ocorrer a adição do valor na próxima posição do vetor final
    }
    
    //captação dos elementos que sobraram no vetor da esquerda
    while(i < n1){
    	arr[k] = L[i];
    	i++;
    	k++;
    }
    
    //captação dos elementos que sobraram no vetor da direita
    while(j < n2){
    	arr[k] = R[j];
    	j++;
    	k++;
    }

}

void mergeSort(int vetor[], int l, int r){ //l é o menor indice e r o maior

        if(l < r){
            int m = l + (r-l)/2; //divisao na metade do vetor, não é utilizado o (l - r) / 2 para conseguir ordenar os valores caso o indice inicial não seja 0;
            mergeSort(vetor, l, m); //chamada do vetor do inicio aso meio (aqui ocorre recursão);
            mergeSort(vetor, m+1, r); //chamada do vetor do meio ao fim (aqui ocorre recursão);
            merge(vetor, l, m, r); //reune as posições novamente;
        }
}

//teste   

int main(){

    int vetor[] = {4,1,-3,2,8};

    printf("Antes: ");
    for (int i = 0; i < 5; i++){
    	printf("%i, ",vetor[i]);
    }
    
    mergeSort(vetor,0,4);
    printf("\n");
    
    printf("Depois: ");
    for (int i = 0; i < 5; i++){
    	printf("%i, ",vetor[i]);
    }
    
    return 0;

}
