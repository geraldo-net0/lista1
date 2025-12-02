#include <stdio.h>

int main() {
    int hi, mi, ti, hf, mf, tf, x;

    printf("Digite as horas e minutos inicias, e seguida as horas e minutos finais, nessa ordem: \n");
    scanf("%d %d %d %d", &hi,&mi,&hf,&mf);

    ti = hi*60 + mi;
    tf = hf*60 + mf;

    if (ti > tf){
        tf = tf + 1440;
    }

    x = tf - ti;

    hf = x / 60;
    mf = x % 60;

    printf("O jogo durou %d hora(s) e %d minuto(s)", hf, mf);

    return 0;
}