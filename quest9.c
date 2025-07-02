#include <stdio.h>

int main() {
    int volume, comp, larg, alt;
    
    printf("Insira o comprimento do da caixa retangular: \n");
    scanf("%d",&comp);
    printf("Insira a largura da caixa retangular: \n");
    scanf("%d",&larg);
    printf("Insira a altura da caixa retangular: \n");
    scanf("%d",&alt);
    
    volume = comp * larg * alt;
    
    printf("O volume da caixa retangular é de: %d \n",volume);
    
    return 0;
}