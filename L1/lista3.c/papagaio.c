/*Humberto tem um papagaio muito esperto. Quando está com as duas pernas no chão, 
o papagaio fala em português. Quando levanta a perna esquerda, fala em inglês. 
Por fim, quando levanta a direita fala em francês. Nico, amigo de Humberto, ficou fascinado com o animal. 
Em sua emoção perguntou: “E quando ele levanta as duas?”. Antes que Humberto pudesse responder, 
o papagaio gritou: “Ai eu caio, idiota!”.
Entrada
A entrada consiste de diversos casos de teste. 
Cada caso de teste consiste uma string informando qual a situação de levantamento de pernas do papagaio.
Saída
Para cada condição de levantamento de pernas do papagaio, imprima a linguagem que ele utilizará. 
Caso ele levante as duas pernas, imprima “caiu”. Quebre uma linha a cada caso de teste.*/
// OND PARADA while (scanf("%[^\n]%*c) != EOF) faz o \n ser a parada

/*#include <stdio.h>
#include <string.h>

// pega mas deu wrong answer 
void main(){
        char word[99];
        int i;
        scanf("%c",&word);
        while (scanf(" %[^\n]", word) != EOF){ // sem o while tava funcionando mas n com parada
              for(i=0;word[i]!=0;){
                        if(word[0]=='e'){
                                printf("ingles\n");
                                break;
                        } else if(word[0]=='d'){
                                printf("frances\n");
                                break;
                        } else if(word[0]=='n'){
                                printf("portugues\n");
                                break;
                        } else if(word[0]=='a');
                                printf("caiu\n");
                                break;
                }
        }
} */

#include <stdio.h>
#include <string.h>

int main (){
        char word[10];
	while (scanf(" %[^\n]", word) != EOF){
		if (strcmp(word, "esquerda") == 0){
			printf("ingles\n");
                }else if (strcmp(word, "direita") == 0){
			printf("frances\n");
                }else if (strcmp(word, "nenhuma") == 0){
			printf("portugues\n");
                }else if (strcmp(word, "as duas") == 0){
			printf("caiu\n");
                }
	}
} 