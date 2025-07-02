#include <stdio.h>

int main() {
    float numero;
    float quad;
    
    printf("Insira um valor:\n");
    scanf("%f", &numero); 
    
    quad = numero * numero;
    printf("O quadrado de %2.f é igual a: %2.f", numero, quad);
    
    return 0;
}