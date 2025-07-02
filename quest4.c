#include <stdio.h>

int main() {
    float conta, taxa, total;

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &conta);

    taxa = conta * 0.10;       
    total = conta + taxa;      

    printf("Taxa do garçom (10%%): R$ %.2f\n", taxa);
    printf("Valor total a pagar: R$ %.2f\n", total);

    return 0;
}
