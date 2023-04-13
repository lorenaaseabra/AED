#include <stdio.h>
#include <math.h>

int main (){
        double a, b, c;
        scanf("%lf%lf%lf", &a,&b,&c);
        double triangulo = (a*c)/2;
        double circulo = 3.14159*c*c;
        double trapezio = (a+b)/2*c;
        double quadrado = b*b;
        double retangulo = a*b;
        printf("TRIANGULO : %.3lf\n", triangulo);
        printf("CIRCULO : %.3lf\n", circulo);
        printf("TRAPEZIO : %.3lf\n", trapezio);
        printf("QUADRADO : %.3lf\n", quadrado);
        printf("RETANGULO : %.3lf", retangulo);
        return 0;
        
}

        /*float A,B,C;
        scanf("%f %f %f",&A,&B,&C);
        printf("TRIANGULO: %.3f\n",A*C/2);
        printf("CIRCULO: %.3f\n",3.14159*C*C);
        printf("TRAPEZIO: %.3f\n",(A+B)*C/2);
        printf("QUADRADO: %.3f\n",B*B);
        printf("RETANGULO: %.3f\n",A*B);
        return 0;*/