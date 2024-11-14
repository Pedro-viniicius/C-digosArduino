#include <stdio.h>
#include <stdlib.h>

int main() {
    float alturas[5][10];
    float maiorAltura[5];
    int i, j;

    // Loop para receber as alturas dos atletas de cada delegação 
    for (i = 0; i < 5; i++) {
        printf("Insira as alturas dos atletas da delegacao %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("Altura do atleta %d: ", j + 1);
            scanf("%f", &alturas[i][j]);
        }
        system("cls");  // Limpa a tela (funciona no Windows)
    }

    // Loop para encontrar e imprimir a maior altura de cada delegação
    for (i = 0; i < 5; i++) {
        maiorAltura[i] = alturas[i][0];  // Inicializa com a altura do primeiro atleta
        for (j = 1; j < 10; j++) {  // Começa de 1 pois a posição 0 já foi considerada
            if (alturas[i][j] > maiorAltura[i]) {
                maiorAltura[i] = alturas[i][j];
            }
        }
        printf("A maior altura da delegacao %d e: %.2f\n", i + 1, maiorAltura[i]);
    }

    return 0;
}


  
