#include <stdio.h>


int FindLowerNumber(int vet[], int tamanho){
    if (tamanho == 1){
        return vet[0];
    }
   
    int menor = FindLowerNumber(vet, tamanho-1);
   
    if (vet[tamanho-1] < menor) {
        return vet [tamanho-1]; 
    } else{
        return menor;
    }
}

int main(){
    int vet [7]= {56,2,20,1,5,7, 40};
    int tam = sizeof(vet)/ sizeof(vet[0]);
    
    int menor = FindLowerNumber (vet, tam);
    printf("%d", menor);
}