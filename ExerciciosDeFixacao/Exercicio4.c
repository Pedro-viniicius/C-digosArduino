#include <stdio.h>


int main () {

float n1,n2,n3;

  printf("Digite Altura\n");
  scanf("%f%*c", &n1);
  printf("Digite Peso\n");
  scanf("%f%*c", &n2);
  
  n3=n2/(n1*n1);
  
	if(n3<20) printf("Abaixo do peso");
	if(n3>=20 && n3<=25) printf("Peso normal");
	if(n3>25 && n3<=30) printf("Sobre peso");
	if(n3>30 && n3<=40) printf("Obeso");
	if(n3>40) printf("Obeso morbido");
  	
  
}
