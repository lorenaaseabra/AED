#include <stdio.h>
#include <math.h>


int main(){
        int acesso;
        float n1,n2,n3,n4,media;
        int matricula[5];
        float mediatotal[5];

        for(int i=0;i<5;i++){
                scanf("%i %f %f %f %f",&acesso, &n1,&n2,&n3,&n4);
                matricula[i] = acesso;

                media = (n1+n2+n3+n4)/4;

                mediatotal[i] = media;
        }
        for(int i=0;i<5-1;i++){
                int maior = i;
                for(int j=i+1;j<5;j++){
                        if(mediatotal[j]>mediatotal[maior]){
                                maior = j;
                        }
                }
                int aux = mediatotal[maior];
                mediatotal[maior] = mediatotal[i];
                mediatotal[i] = aux;

        }
        for(int i=0;i<5-1;i++){
                int maior = i;
                for(int j=i+1;j<5;j++){
                        if(matricula[j]>matricula[maior]){
                                maior = j;
                        }
                }
                int aux = matricula[maior];
                matricula[maior] = matricula[i];
                matricula[i] = aux;

        }

        for(int i=0;i<5;i++){
                printf("%i %.2f\n",matricula[i], mediatotal[i]);
        }
        return 0;
}

