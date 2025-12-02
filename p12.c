#include <stdio.h>

int main() {
    int x;

    printf("Digite o numero: \n");
    scanf("%d", &x);

    for (int i = 1; i <= 20; i++) {
        
        printf("%d X %d = %d \n", x, i, x*i);

    }


    return 0;
}