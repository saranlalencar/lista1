#include <stdio.h>
#include <stdlib.h> 

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int modulo = abs(numero);

    printf("O valor absoluto é: %d\n", modulo);

    return 0;
}
