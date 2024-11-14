#include <stdio.h>

int main() {
    float nota_lab, nota_semestral, nota_final;
    float media_ponderada;

    // Solicita as três notas do aluno
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &nota_lab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &nota_semestral);
    printf("Digite a nota do exame final: ");
    scanf("%f", &nota_final);

    // Calcula a média ponderada das notas
    media_ponderada = (nota_lab * 0.2) + (nota_semestral * 0.3) + (nota_final * 0.5);

    // Determina o conceito do aluno com base na média ponderada
    printf("A média ponderada e: %.2f\n", media_ponderada);
    
    if (media_ponderada >= 8.5) {
        printf("Conceito: A\n");
    } else if (media_ponderada >= 7 && media_ponderada < 8.5) {
        printf("Conceito: B\n");
    } else if (media_ponderada >= 6 && media_ponderada < 7) {
        printf("Conceito: C\n");
    } else if (media_ponderada >= 4 && media_ponderada < 6) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }

    return 0;
}
