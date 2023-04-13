#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
        char palavra[21]; 
        int cont = 0;
        scanf("%s", palavra);
        cont = strlen(palavra);
        if (cont>=10){
                printf("palavrao\n");
        }else{
                printf("palavrinha\n");
        }
        return 0;
}