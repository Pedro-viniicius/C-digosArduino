#include <stdio.h>

int main() {
    float altura, peso;

    // Solicita a altura e o peso da pessoa
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    printf("Digite o peso da pessoa (em quilogramas): ");
    scanf("%f", &peso);

    // Classifica a pessoa com base nas condições fornecidas
    if (altura < 1.20) {
        if (peso <= 60) {
            printf("Tipo A: Menos que 1,20m de altura e até 60kg de peso.\n");
        } else if (peso <= 90) {
            printf("Tipo D: Menos que 1,20m de altura e peso de 60kg a 90kg.\n");
        } else {
            printf("Tipo G: Menos que 1,20m de altura e peso acima de 90kg.\n");
        }
    } else if (altura >= 1.20 && altura <= 1.70) {
        if (peso <= 60) {
            printf("Tipo B: Entre 1,20m e 1,70m de altura e até 60kg de peso.\n");
        } else if (peso <= 90) {
            printf("Tipo E: Entre 1,20m e 1,70m de altura e peso de 60kg a 90kg.\n");
        } else {
            printf("Tipo H: Entre 1,20m e 1,70m de altura e peso acima de 90kg.\n");
        }
    } else {
        if (peso <= 60) {
            printf("Tipo C: Mais que 1,70m de altura e até 60kg de peso.\n");
        } else if (peso <= 90) {
            printf("Tipo F: Mais que 1,70m de altura e peso de 60kg a 90kg.\n");
        } else {
            printf("Tipo I: Mais que 1,70m de altura e peso acima de 90kg.\n");
        }
    }

    return 0;
}
