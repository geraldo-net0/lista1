#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,d, x1, x2;

    printf("Digite A, B e C respectivamente: \n");
    scanf("%f %f %f", &a,&b,&c);

    d = (b*b) - (4*a*c);

    if (a == 0 || d < 0){
        printf("Impossivel calcular");;
    }
    else{
        x1 = (-b + sqrt(d)) / 2*a;
        x2 = (-b - sqrt(d)) / 2*a;
        printf("X1 = %.2f e X2 = %.2f", x1, x2);
    }

    

    return 0;
}