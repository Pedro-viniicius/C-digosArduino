#include <stdio.h>

int main() {
    int num1, num2, i, valor1 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    for (i = 1; i < num1; i++) {
        if (num1 % i == 0)
            valor1 += i;   
    }
    if (valor1 == num2 ) {
        printf("Os numeros digitados sao amigaveis\n");
    } else {
        printf("Os numeros nao sao amigaveis\n");
    }

    return 0;
}
