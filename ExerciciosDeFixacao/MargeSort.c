#include <stdio.h>

// Função para mesclar duas sublistas ordenadas
void merge(int array[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    // Arrays temporários
    int esquerda[n1], direita[n2];

    // Copiando dados para os arrays temporários
    for (int i = 0; i < n1; i++)
        esquerda[i] = array[inicio + i];
    for (int j = 0; j < n2; j++)
        direita[j] = array[meio + 1 + j];

    // Mesclando os arrays temporários de volta no array original
    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            array[k] = esquerda[i];
            i++;
        } else {
            array[k] = direita[j];
            j++;
        }
        k++;
    }

    // Copiando os elementos restantes do array `esquerda`, se houver
    while (i < n1) {
        array[k] = esquerda[i];
        i++;
        k++;
    }

    // Copiando os elementos restantes do array `direita`, se houver
    while (j < n2) {
        array[k] = direita[j];
        j++;
        k++;
    }
}

// Função recursiva do Merge Sort
void mergeSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Dividindo a lista em duas metades
        mergeSort(array, inicio, meio);
        mergeSort(array, meio + 1, fim);

        // Mesclando as metades ordenadas
        merge(array, inicio, meio, fim);
    }
}

// Função para imprimir o array
void printArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", array[i]);
    printf("\n");
}

// Função para imprimir as temperaturas por intervalos de 10°C
void imprimirIntervalos(int array[], int tamanho) {
    printf("\nTemperaturas agrupadas por intervalos de 10°C:\n");
    for (int i = 0; i < 50; i += 10) {
        printf("Intervalo %d°C - %d°C:", i, i + 9);
        int encontrou = 0;
        for (int j = 0; j < tamanho; j++) {
            if (array[j] >= i && array[j] < i + 10) {
                printf(" %d", array[j]);
                encontrou = 1;
            }
        }
        if (!encontrou) {
            printf(" Nenhuma");
        }
        printf("\n");
    }
}

int main() {
    int temperaturas[] = {22, 28, 15, 30, 19, 24, 25, 18, 29, 10, 11, 5, 40};
    int tamanho = sizeof(temperaturas) / sizeof(temperaturas[0]);

    printf("Temperaturas registradas antes da ordenação:\n");
    printArray(temperaturas, tamanho);

    // Chamando o Merge Sort
    mergeSort(temperaturas, 0, tamanho - 1);

    // Imprimindo as temperaturas agrupadas por intervalos de 10°C
    imprimirIntervalos(temperaturas, tamanho);

    return 0;
}