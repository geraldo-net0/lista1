#include <stdio.h>

int main() {
    float sal, novo, reaj;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &sal);

    if (sal < 1500){
        novo = sal * 1.2;
        reaj  = novo - sal;
        printf("Novo salario: %.2f, Reajuste de: %.2f, aumento percentual de 20%%", novo, reaj); 
    }
    else if (sal < 5000){
        novo = sal * 1.15;
        reaj  = novo - sal;
        printf("Novo salario: %.2f, Reajuste de: %.2f, aumento percentual de 15%%", novo, reaj); 
    }
    else if (sal >= 5000){
        novo = sal * 1.1;
        reaj = novo - sal;
        printf("Novo salario: %.2f, Reajuste de: %.2f, aumento percentual de 10%%", novo, reaj);
    }

    return 0;
}