#include <stdio.h>


int main(){
 //Construa um programa que leia um número e informe se ele é divisível por 3 e por 7

	int N1, N2, N3;
	
		printf ("Digite numero A\n");
		scanf ("%d", &N1);
	
		N2 = N1%3;
		N3 = N1%7;
	
	if (N2 ==0 && N3==0)
		printf ("Numero A e divisivel por 3 e 7");
	else
		printf ("Numero A nao e divisivel por 3 e 7");
}
	
