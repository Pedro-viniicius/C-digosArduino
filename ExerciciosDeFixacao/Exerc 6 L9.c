#include <stdio.h>
#include <limits.h> // para usar INT_MAX e INT_MIN

int main() {
    int num, soma = 0, quantidade = 0, maior, menor;
    int somaPares = 0, quantidadePares = 0;
    float mediaPares;

    // Inicializa maior e menor com valores extremos para garantir a comparação inicial
    maior = INT_MIN;
    menor = INT_MAX;

    printf("Digite um numero (0 para terminar): ");
    scanf("%d", &num);

    while (num != 0) {
        soma += num;
        quantidade++;

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }

        if (num % 2 == 0) {
            somaPares += num;
            quantidadePares++;
        }

        printf("Digite outro numero (0 para terminar): ");
        scanf("%d", &num);
    }

    if (quantidadePares > 0) {
        mediaPares = (float)somaPares / quantidadePares;
    } else {
        mediaPares = 0;
    }

    printf("\nSoma dos numeros digitados: %d\n", soma);
    printf("Quantidade de numeros digitados: %d\n", quantidade);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Media dos numeros pares: %.2f\n", mediaPares);

    return 0;
}

