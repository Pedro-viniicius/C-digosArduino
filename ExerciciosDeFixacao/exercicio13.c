#include <stdio.h>

int main() {
    int idade;
    float peso;
    float dosagem;
    int ml;
    int gotas;

    // Solicita a idade e o peso do paciente
    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);
    printf("Digite o peso do paciente em quilos: ");
    scanf("%f", &peso);

    // Calcula a dosagem do medicamento
    if (idade >= 12) {
        if (peso >= 60) {
            dosagem = 1000; // 1000 mg para adultos com peso igual ou acima de 60 kg
        } else {
            dosagem = 875; // 875 mg para adultos com peso abaixo de 60 kg
        }
    } else {
        // Dosagem para crianças e adolescentes abaixo de 12 anos de acordo com a tabela
        if (peso < 5) {
            dosagem = 0;
        } else if (peso >= 5 && peso <= 9) {
            dosagem = 125;
        } else if (peso >= 10 && peso <= 16) {
            dosagem = 250;
        } else if (peso >= 17 && peso <= 24) {
            dosagem = 375;
        } else if (peso >= 25 && peso <= 30) {
            dosagem = 500;
        } else {
            dosagem = 750;
        }
    }

    // Calcula a quantidade de ml e de gotas
    ml = dosagem / 500; // 500 mg por ml
    gotas = ml * 20; // 20 gotas por ml

    // Exibe a receita informando a dosagem e a quantidade de gotas
    printf("Receita:\n");
    printf("Dosagem: %.0f mg\n", dosagem);
    printf("Administrar %d ml ou %d gotas por dose.\n", ml, gotas);

    return 0;
}
