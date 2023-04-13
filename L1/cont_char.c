#include <stdio.h>
#include <string.h>


int main(int agrc, char const *argv[]){
        char nome[40];
        int cont=0;
        printf("");
        fgets(nome,40,stdin);
        cont = strlen(nome);
        printf("o nome tem %d", cont);
        return 0;


}

        