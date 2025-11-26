#include <stdio.h>

int main() {
    float r, v;


    printf("Digite o valor do raio da esfera: \n");
    scanf("%f", &r);

    v = (4 * 3.14159 * (r*r*r))/3.0;

    printf("Volume = %.3f", v);

    return 0;
}