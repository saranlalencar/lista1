#include <stdio.h>

int main() {
    float altura;
    char sexo;
    float peso_ideal;
    
    printf("Insira sua altura:\n");
    scanf("%f", &altura);  
    
    printf("Digite F para Feminino e M para masculino \n");
    scanf(" %c", &sexo);
    
    if (sexo == 'F' || sexo == 'f') {
        peso_ideal = 62.1 * altura - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
    } else if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
        printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
        }else {
            printf("Insira um valor válido!");
        }
  

    
    return 0;
}