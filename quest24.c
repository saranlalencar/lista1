#include <stdio.h>

int main() {
    int tempo_segundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo_segundos);

    horas = tempo_segundos / 3600;
    minutos = (tempo_segundos % 3600) / 60;
    segundos = tempo_segundos % 60;

    printf("Tempo: %d hora(s), %d minuto(s), %d segundo(s)\n", horas, minutos, segundos);

    return 0;
}
