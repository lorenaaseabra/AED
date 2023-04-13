/*leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
Entrada
O arquivo de entrada contém dois valores inteiros.
Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão 
entre os valores fornecidos na entrada que deverá caber em um inteiro.*/

#include <stdio.h>
#include <math.h>

int main(){
        int x,y,cont,soma=0;
        scanf("%i%i", &x,&y);
        if(x<y){
                for(cont=x+1;cont<y;cont++){
                        if (cont%2!=0){ //não recebe 
                                soma+=cont; // nao ta somando 
                        }
                }
        }else{
                for(cont=y+1;cont<x;cont++){
                        if (cont%2!=0){ //não recebe 
                                soma+=cont; // nao ta somando 
                        }
                }
        }
        printf("%d\n", soma);
        return 0;
}