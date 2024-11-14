#include	<stdio.h>

int main(){
	int N1, N2, N3;
	
	printf ("digite um numero qualquer\n");
	scanf ("%d", &N1);
	
	printf ("digite outro numero\n");
	scanf ("%d", &N2);
		N3 = N1 + N2;
	
	if (N3 > 20){
		N3 = N3 + 8;
		printf ("O resultado da soma ajustada e: %d\n", N3);
	}
		
	if (N3 <= 20){
		N3 = N3 - 5;
		printf ("O resultado da soma ajustada e: %d\n", N3);
	}	
}
