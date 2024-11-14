#include	<stdio.h>



int main(){
	int N1, N2, N3;
	
		printf ("Digite um numero A\n");
		scanf ("%d", &N1);
	
		printf ("Digite um numero B\n");
		scanf ("%d", &N2);
		
		N3 = N1%N2;
		
	if  (N3==0)
			printf (" A e divisivel por B");
	else 
			printf ("A nao e divisivel por B");
	
	
}
