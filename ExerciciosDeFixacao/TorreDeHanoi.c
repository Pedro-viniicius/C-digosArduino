#include <stdio.h>

void TorreDeHanoi (int n, char origem, char destino, char auxiliar){
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    else {    
        TorreDeHanoi(n - 1, origem, auxiliar, destino);  
        printf("Mover disco %d de %c para %c\n", n, origem, destino);  
        TorreDeHanoi(n - 1, auxiliar, destino, origem);
    }
}


int main(){
    TorreDeHanoi(3, 'A', 'C', 'B');
}