#include <stdio.h>

int main () {
    int dist, tempo;

    printf("Digite a distancia (em km) entre os dois carros: \n");
    scanf("%d", &dist);

    tempo = (dist/150) * 60;

    printf("A distancia de %.3d km foi percorrida em %d minutos", dist, tempo);

    return 0;
}