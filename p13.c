#include <stdio.h>

int main() {
    int x= -999*999, maior=0, pos=0;

    for (int i = 1; i <= 10; i++){

        printf("Digite um valor: \n");
        scanf("%d", &x);

        if (x > maior){
            maior = x;
            pos = i;
        }


    }

    printf("O maior numero foi %d na posicao %d", maior, pos);

    return 0;
}