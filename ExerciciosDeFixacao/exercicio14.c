#include <stdio.h>

int main() {
    float peso_terra, peso_planeta;
    int num_planeta;

    // Solicita o peso do usuário na Terra
    printf("Digite o seu peso na Terra (em kg): ");
    scanf("%f", &peso_terra);

    // Solicita o número do planeta
    printf("Digite o número do planeta (1 - Mercurio, 2 - Venus, 3 - Marte, 4 - Jupiter, 5 - Saturno, 6 - Urano): ");
    scanf("%d", &num_planeta);

    // Realiza o cálculo do peso no planeta selecionado
    switch (num_planeta) {
        case 1:
            peso_planeta = peso_terra * 0.37; // Mercúrio
            printf("Seu peso em Mercurio e: %.2f kg\n", peso_planeta);
            break;
        case 2:
            peso_planeta = peso_terra * 0.88; // Vênus
            printf("Seu peso em Venus e: %.2f kg\n", peso_planeta);
            break;
        case 3:
            peso_planeta = peso_terra * 0.38; // Marte
            printf("Seu peso em Marte e: %.2f kg\n", peso_planeta);
            break;
        case 4:
            peso_planeta = peso_terra * 2.64; // Júpiter
            printf("Seu peso em Jupiter e: %.2f kg\n", peso_planeta);
            break;
        case 5:
            peso_planeta = peso_terra * 1.15; // Saturno
            printf("Seu peso em Saturno e: %.2f kg\n", peso_planeta);
            break;
        case 6:
            peso_planeta = peso_terra * 1.17; // Urano
            printf("Seu peso em Urano e: %.2f kg\n", peso_planeta);
            break;
        default:
            printf("Numero de planeta invalido. Por favor, digite um numero de 1 a 6.\n");
    }

    return 0;
}
