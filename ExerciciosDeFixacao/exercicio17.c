#include <stdio.h>

int main() {
    int A, B, C, D;

    // Solicita os valores de A, B, C e D
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    // Inicializa as variáveis de maior e menor valor
    int maior = A, menor = A;

    // Verifica se B é maior ou menor
    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }

    // Verifica se C é maior ou menor
    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }

    // Verifica se D é maior ou menor
    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }

    // Imprime o maior e o menor valor
    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);

    return 0;
}
