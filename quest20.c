#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &a, &b);

    printf("%d é %smúltiplo de %d\n", a, (a % b) ? "não " : "", b);

    return 0;
}
