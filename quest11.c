int main() {
    double num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    
    double soma = num1 + num2;
    double produto = num1 * num2;
    double diferenca = num1 - num2;
    printf("\nResultados:\n");
    printf("Soma: %.2lf\n", soma);
    printf("Produto: %.2lf\n", produto);
    printf("Diferenca: %.2lf\n", diferenca);


    if (num2 != 0) {
        double quociente = num1 / num2;
        double resto = (int)num1 % (int)num2;
        printf("Quociente: %.2lf\n", quociente);
        printf("Resto da divisao: %.0lf\n", resto);
    } else {
        printf("Quociente: Indefinido (divisao por zero)\n");
        printf("Resto da divisao: Indefinido (divisao por zero)\n");
    }

    return 0;
}