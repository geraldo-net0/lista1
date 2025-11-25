#include <stdio.h>

int main() {
    float A;
    float B;
    float media;

    printf("Digite o valor de peso 3.5: \n");
    scanf("%f", &A);

    printf("Digite o valor de peso 7.5: \n");
    scanf("%f", &B);

    media = ((A * 3.5) + (B * 7.5)) / 11;

    printf("MEDIA = %.5f\n", media);

    return 0;
}