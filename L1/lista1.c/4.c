#include <stdio.h>
#include <math.h>

int main(){
        
        int tempo;
        int velocidade;
        int distancia;
        float litros;
        scanf("%d", &tempo);
        scanf("%d", &velocidade);
        distancia = tempo*velocidade;
        litros = (distancia/12.0);
        printf("%.3f\n", litros);

        return 0;

}