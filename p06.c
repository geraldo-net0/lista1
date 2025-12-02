#include <stdio.h>

int main() {
    int x;
    int y;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    if (x == 0) {
        if (y == 0){
            printf("O ponto esta na origem.");
        }
        else{
            printf("O ponto esta no eixo Y");
        }
    }
    else if (y == 0){
        printf("O ponto esta no eixo X");
    }

    else if (x > 0){
        if (y > 0){
            printf("O ponto esta no primeiro quadrante");
        }
        else{
            printf("O ponto esta no quarto quadrante");
        }
    }
    else if (x < 0){
        if (y > 0){
            printf("O ponto esta no segundo quadrante");
        }
        else{
            printf("O ponto esta no terceiro quadrante");
        }
    }
    

    return 0;
}