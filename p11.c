#include <stdio.h>

int main ()
{
    int n1, n2, soma=0;

    printf("Digite os dois numeros: \n");
    scanf("%d %d", &n1, &n2);

    for (int i = n1 + 1; i < n2; i++){

        if (i % 2 == 1){
            soma += i;
        }

    }

    printf("A soma entre os numeros: %d", soma);

    return 0;
}