#include <stdio.h>

int main() {
    int numero;
    
    printf("Insira um valor inteiro diferente de 0:\n");
    scanf("%d", &numero);  
    
    while (numero > 0) {  

        (numero % 16 < 10) ? printf("%c", '0' + numero % 16) : printf("%c", 'A' + numero % 16 - 10);
        
        numero /= 16;
    }
    printf("\n");

    return 0;
}