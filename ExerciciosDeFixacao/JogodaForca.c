#include <stdio.h> 
#include <string.h>

int main(){
	
	char palavrasecreta [20];
	char chutes[26];
	int tentativas = 0;


	
	sprintf( palavrasecreta, "MELANCIA");
	
	int acertou = 0;
	int enforcou = 0;
	
	do {
			int i=0;
			for (i; i< strlen(palavrasecreta); i++ ){
			    
				int achou =0;
				int j = 0;
				for (j ; j < tentativas; j++)	{
						
						if (chutes[j]== palavrasecreta[i]) {
				        achou = 1;
				        break;
				    }
				}			 
			if (achou){
				printf ("%c ", palavrasecreta[i]);
			} else {
				printf (" _");
			}
		} 
		printf ("\n");
		 
		char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;
        
	} while (!acertou && !enforcou);
}

