#include <stdio.h>

int main() {
    int n;
    int suc;
    int ant;
    
    printf("Insira um numero inteiro:\n");
    scanf("%d",&n); 
    
    suc = n + 1;
    ant = n -1;
    
    printf("O sucessor de %d é %d e o antecessor é %d", n, suc, ant);
    
    return 0;
}