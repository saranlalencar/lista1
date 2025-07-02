#include <stdio.h>

int main() {
    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Triplo: %d\n", x * 3);
    printf("Quadrado: %d\n", x * x);
    printf("Metade: %.1f\n", x / 2.0);  

    return 0;
}
