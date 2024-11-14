#include <stdio.h>

int main() {
    // Altura inicial de Chico e Zé em centímetros
    float alturaChico = 150;
    float alturaZe = 110;

    // Taxa de crescimento anual em centímetros
    float crescimentoChico = 2;
    float crescimentoZe = 3;

    // Variável para contar os anos
    int anos = 0;

    // Loop até que Zé seja maior que Chico
    while (alturaZe <= alturaChico) {
        alturaChico += crescimentoChico;
        alturaZe += crescimentoZe;
        anos++;
    }

    // Imprime o resultado
    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);

    return 0;
}
