//troca em vetor 

#include <stdio.h>

int main(){

        int i,j;
        int x[20],n,n1,n2;

        for(i=0;i<20;i++){
               scanf("%d", &n);
                x[i] = n; 
        }
        for (i=0,j=19;i<=10&&j>=10;i++,j--){ // vai dividir em duas partes progredir em i e regredir em j
                n1=x[i]; // vai substituir
                n2=x[j];
                x[i]=n2;
                x[j]=n1;
        }
        for(i=0;i<20;i++){
                printf("N[%d] = %d\n",i,x[i]);
        }
                
}