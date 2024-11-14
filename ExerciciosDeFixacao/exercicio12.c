#include <stdio.h>

int main() {
	
	int saldo, c1, c2, c3;
	
	printf("digite saldo medio anual\n");
	scanf ("%d", &saldo);
	
	if (saldo > 0 && saldo <= 500)
		printf("Sem possibilidade de conceder credito\n");
	
	if (saldo >= 501 && saldo <= 1000 )
	{
		c1 = saldo * 0.30;
		printf ("Valor do credito: %d\n", c1);
	}
	
	if (saldo >= 1001 && saldo <= 3000)
	{
		c2= saldo * 0.40;
		printf ("Valor do credito: %d\n", c2);
	}
	
	if (saldo >= 3001)
	{
		c3= saldo * 0.50;
		printf ("Valor do credito: %d\n", c3);
	}
}
