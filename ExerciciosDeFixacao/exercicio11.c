#include <stdio.h>

int main() {
	float salario;
	float par;
	float t1;
	
	printf ("Digiete seu salario:\n");
	scanf ("%f", &salario);
	
	printf("Digite valor da parcela desejada:\n");
	scanf ("%f", &par);
	
	t1 = salario*0.30;
	
	if (par>t1)
		printf("Nao pode ser feito emprestimo");
	else 
		printf ("Pode ser feito emprestimo");
}
