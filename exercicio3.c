#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1;
    
    // Solicitar o número ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    // Verificar se o número é negativo
    if (num < 0) {
        printf("Erro! Fatorial de números negativos não existe.\n");
    } else {
        // Calcular o fatorial
        for (i = 1; i <= num; ++i) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %llu\n", num, fatorial);
    }
    
    return 0;
}