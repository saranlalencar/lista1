#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, inss, salarioBruto, descontoINSS, salarioLiquido;

    printf("Digite o valor da hora-aula: R$ ");
    scanf("%f", &valorHora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o percentual de desconto do INSS (ex: 11 para 11%%): ");
    scanf("%f", &inss);

    salarioBruto = valorHora * horasTrabalhadas;

    descontoINSS = salarioBruto * (inss / 100);

    salarioLiquido = salarioBruto - descontoINSS;

    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto INSS (%.2f%%): R$ %.2f\n", inss, descontoINSS);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}