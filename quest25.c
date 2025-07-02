#include <stdio.h>
#include <math.h>  

int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do ponto 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos é: %.2lf\n", distancia);

    return 0;
}
