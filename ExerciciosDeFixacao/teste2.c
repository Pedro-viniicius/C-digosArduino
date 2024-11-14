#include <stdio.h>
#include <ctype.h>
#include <string.h> 

void converter_primeira_letra(char *frase) {
    int i = 0;
    int inicio_palavra = 1; 

    while (frase[i] != '\0') {
       
        if (frase[i] == ' ') {
            inicio_palavra = 1; 
        } else if (inicio_palavra && islower(frase[i])) {
            
            frase[i] = toupper(frase[i]);
            inicio_palavra = 0;
        } else {
            inicio_palavra = 0; 
        }
        i++;
    }
}

int main() {
    char frase[1000];

    printf("Digite uma frase com letras minusculas: ");
    fgets(frase, sizeof(frase), stdin);

  
    frase[strcspn(frase, "\n")] = '\0';

    converter_primeira_letra(frase);

    printf("Frase com a primeira letra de cada palavra em maiuscula: %s\n", frase);

    return 0;
}

