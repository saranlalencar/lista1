#include <stdio.h>
#define IMPOSTO 0.10
#define DIARIA 50.25

int main() {
    float valor_liq, valor_bruto, grat, valor_com_grat;
    int dias_trab;
    

    printf("Insira o numero de dias trabalhados: \n");
    scanf("%d", &dias_trab);

    
    grat = (dias_trab <= 10) ? 0.0 : (dias_trab <= 20) ? 0.20 : 0.30;
    
    valor_bruto = DIARIA * dias_trab;
    valor_com_grat = valor_bruto * (1 + grat);
    valor_liq = valor_com_grat * (1 - IMPOSTO);

    printf("\n--- Resultado ---\n");
    printf("Dias trabalhados: %d\n", dias_trab);
    printf("Valor bruto: R$%.2f\n", valor_bruto);
    printf("Gratificação: %.0f%%\n", grat * 100);
    printf("Valor com gratificação: R$%.2f\n", valor_com_grat);
    printf("Valor líquido (com imposto de 10%%): R$%.2f\n", valor_liq);

    return 0;
}