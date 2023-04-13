/*Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em 
ordem crescente ou decrescente.
Entrada
A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. 
A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.
Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, 
caso contrário imprima a mensagem “Decrescente”.*/

#include <stdio.h>

int main(){ // pega mas ta dando wrong answer 
    int x,y;                                           
    do {
        scanf("%d%d", &x,&y);
        if (x>y){
                printf("Decrescente\n");
        }else if(x<y){  
                printf("ecrescente\n");
        }else{// coloquei pq n tava funcionando o while
                break;
        }                
    } while(x!=y); // pq n funcionou pra parar caso x==y?            
 
    getchar();
    return 0;
}

