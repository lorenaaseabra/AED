#include <stdio.h>


int main(){
        int numero;
        int horas;
        float salario;
        scanf("%d%d%f", &numero, &horas, &salario);
        printf("NUMBER = %d\n", numero);
        //float total = horas*salario;
        printf("SALARY = U$ %1.2f", (horas*salario));
        return 0;
}

#include <stdio.h>

int main(){
        int num, qnthoras;
        float horas, salario;
        scanf("%d%d%f", &num, &qnthoras, &horas);
        salario = qnthoras*horas;
        printf("NUMBER = %d\n", num);
        printf("SALARY = U$ %1.2f\n", salario);

        return 0;
}