#include <stdio.h>

int main() {
    float C, fahrenheit;
    
    printf("Informe a temperatura em graus celsius:\n");
    scanf("%f", &C);

    fahrenheit = (9 * C + 160) / 5;

    printf("Temperatura em fahrenheit: %.2f\n", fahrenheit);

    return 0;
}