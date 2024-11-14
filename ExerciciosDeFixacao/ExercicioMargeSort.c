#include <stdio.h>

int cont = 0;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];  // Arrays temporários para as sublistas

    // Copiando os dados para os arrays temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left; // Índices iniciais para L[], R[] e arr[]

    // Mesclando os arrays temporários de volta em arr[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
           
        } else {
            arr[k] = R[j];
            j++;
           cont = cont + (n1 - i);
        }
        k++;
       
        
    }

    // Copiando os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiando os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        // Dividindo a lista em duas metades
        mergeSort(arr, left, mid);
        
        mergeSort(arr, mid + 1, right);
        // Mesclando as duas metades ordenadas
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 3, 5, 2, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("Array ordenado:\n");
    printArray(arr, size);
    printf("%d", cont);
    return 0;
}
