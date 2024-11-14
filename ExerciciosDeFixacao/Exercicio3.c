#include <stdio.h>


int main () {

int n1;

  printf("Digite um numero:\n");
  scanf("%d%*c", &n1);
  
  if(n1==5) printf("numero igual a 5");
  if(n1==200) printf("numero igual a 200");
  if(n1==400) printf("numero igual a 400");
  if(n1>500 && n1<1000) printf("numero esta entre 500 e 1000");
  if(n1<500 && n1>1000) printf("numero esta fora dos escopos");
  	
  
}
