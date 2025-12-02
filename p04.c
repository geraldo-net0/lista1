#include <stdio.h>

int main() {
    int sec, min, hora, resto;

    printf("Digite o total de segundos: \n");
    scanf("%d", &sec);

    hora = sec / 3600;
    resto = sec % 3600;
    min = resto / 60;
    sec = resto % 60;

    printf("%d:%d:%d", hora, min, sec);

    return 0;
}