#include <stdio.h>

int main() {
    int dist;
    float comb;
    float media;

    printf("Digite a distancia percorrida em km: \n");
    scanf("%d", &dist);

    printf("Digite a quantidade de combustivel gasto em litros: \n");
    scanf("%f", &comb);

    media = dist / comb;

    printf("A media gasta foi de %.3f km/l", media);

    return 0;
}
