#include <stdio.h>

int main() {
    int m,n, soma=0;

    printf("Digite um intervalo de números: \n");
    scanf("%d %d", &m, &n);

    for (int i = m;  i <= n; i++){
        printf("%d", i);
        soma += i;
    }

    printf("Soma: %d", soma);

    return 0;
}