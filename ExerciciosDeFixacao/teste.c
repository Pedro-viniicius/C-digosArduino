#include <stdio.h>
#include <string.h>


void trocar_caracter(char *frase, char antigo, char novo) {
    int i;
    int tamanho = strlen(frase);  
    
    for (i = 0; i < tamanho; i++) {
        if (frase[i] == antigo) {
            frase[i] = novo;
        }
    }
}


int main(){
	
	char frase1[100], frase2[100];
	int tamanho;
	
	printf ("Digite a primeira frase:\n");
	gets(frase1);
	
	printf("Digite a segunda frase:\n");
	gets(frase2);

	
 	trocar_caracter(frase1, 'a', 'b');
    trocar_caracter(frase2, 'a', 'b');
	
	strrev(frase1);
	strrev(frase2);
	
	printf("\n%s", frase1);
	printf("\n%s", frase2);
	
}
