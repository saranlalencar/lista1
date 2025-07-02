#include <stdio.h>

int main() {
    float real, dolar, conversao;
    
    printf("Insira o valor em real que deseja converter:\n");
    scanf("%f", &real);  
    
    printf("Insira o valor da cotação do dólar:\n");
    scanf("%f", &dolar); 
    
    conversao = real * dolar;
    
    printf("O valor convertido é: %.2f\n", conversao);  
    
    return 0;
}