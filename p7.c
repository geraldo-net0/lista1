#include <stdio.h>

int main() {
    int v1, v2 ,v3, n1, n2, n3, x;

    printf("Digite tres valores: \n");
    scanf("%d %d %d", &v1, &v2, &v3);

    n1 = v1;
    n2 = v2;
    n3 = v3;

   if (n1 > n2){
    x = n1;
    n1 = n2;
    n2 = x;
   }
   if (n1 > n3){
    x = n1;
    n1 = n3;
    n3 = x;
   }
   if (n2 > n3){
    x = n2;
    n2 = n3;
    n3 = x;

   }

   printf("%d, %d, %d", n1, n2, n3);
   printf("\n");
   printf("%d, %d, %d", v1, v2, v3);

    return 0;
}