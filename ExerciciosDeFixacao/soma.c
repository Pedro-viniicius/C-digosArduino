#include <stdio.h>

int somaVetor(int vet[], int tamanho) {
    if (tamanho == 1) {
        return vet[0];
    }
    // Corrigindo a chamada recursiva e o índice
    return somaVetor(vet, tamanho - 1) + vet[tamanho - 1];
}

int main() {
    int vet[] = {0, 10, 20, 30}; // Corrigindo a forma de declarar o vetor
    int tamanho = sizeof(vet) / sizeof(vet[0]); // Calculando o tamanho do vetor

    int soma = somaVetor(vet, tamanho);
    printf("A soma dos elementos do vetor é: %d\n", soma);

    return 0;
}
