#include <stdio.h>

int main() {
    int n,x,y;

    printf("Digite o numero de pares: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Digite o dividendo e o divisor: \n");
        scanf("%d %d", &x,&y);

        printf("A divisao de %d por %d = %d\n", x, y, x/y);
    }

    return 0;
}