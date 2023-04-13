#include <stdio.h>
#include <string.h>

// pega mas deu wrong answer 
void main(){
        char word[99];
        int i;
        scanf("%c",&word);
        while (scanf(" %[^\n]", word) != 0){ // sem o while tava funcionando mas n com parada
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
}  