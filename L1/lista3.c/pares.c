/*faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.*/

#include <stdio.h>

int main (){
        for( int cont=1;cont<=100;cont++){
                if (cont%2==0){
                        printf("%d\n", cont);
                }
        }
}

