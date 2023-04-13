/*Uma aliteração ocorre quando duas ou mais palavras consecutivas de um texto possuem a mesma letra inicial 
(ignorando maiúsculas e minúsculas). Sua tarefa é desenvolver um programa que identifique, 
a partir de uma sequência de palavras, o número de aliterações que essa sequência possui.
Entrada
A entrada contém diversos casos de testes. Cada caso é expresso como um texto em uma única linha,
 contendo de 1 a 100 palavras separadas por um único espaço, cada palavra tendo de 1 a 50 letras 
 minúsculas ou maiúsculas ('A'-'Z','a'-'z'). A entrada termina em EOF.
Saída
Para cada caso de teste imprima o número de aliterações existentes no texto informado, 
conforme exemplos abaixo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        char frase[10000];
        scanf("%[^\n]", &frase); // pegar palavras compostas
        char*pt;

        pt = strtok(frase," ");
        while(pt){ // pra quebrar em espaços 
                //printf("token: %s\n", pt);
                pt = strtok(NULL, " ");
        }
        return 0;

}