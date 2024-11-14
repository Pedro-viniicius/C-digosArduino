#include <string.h>
#include <stdio.h>
#define tam 100


int main(){
	
	struct casa {
		float w, hd, tm;
		char nome[15];
	};
	
	int i, consumototal=0;
	struct casa eletro[5];
	float consumoind;
	printf("Vamos calcular seu consumo, preencha os dados:\n");

		for(i=0; i<5;i++){
			
			printf("Nome(%d): ", i+1);
			gets(eletro[i].nome);
			
			
			printf("Potencia(%d): ", i+1);
			scanf("%f", &eletro[i].w);
			
			
			
			printf("Hora de uso/dia(%d): ", i+1);
			scanf("%f", &eletro[i].hd);
			
			printf("Dias no mes(%d): ", i+1);
			scanf("%f", &eletro[i].tm);
			
			getchar();
			system("cls");
		}
	
			for(i=0; i<5;i++){
				
				consumoind = (eletro[i].w/1000)*eletro[i].hd*eletro[i].tm;
				consumototal = consumototal + consumoind;
				
			}
			for(i=0; i<5;i++){
				
				consumoind = (eletro[i].w/1000)*eletro[i].hd*eletro[i].tm;
				consumoind = (consumoind/consumototal)*100;
				printf("Consumo do(a) %s: %.2f%%  \n", eletro[i].nome, consumoind);
				consumoind = 0;
			}

				printf("Conumo total: %d kwh/mes \n", consumototal);
	
	return 0;

}



