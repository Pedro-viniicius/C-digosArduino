#include <stdio.h>

int main() {
  int numero, i = 0;
  printf("Qual tabuada voce quer?");
  scanf("%d", &numero);

  for(i; i <= 10; i++) {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}
