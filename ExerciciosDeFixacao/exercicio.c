

#include <stdio.h>

int main() {
    int venda, preco1, preco2; 
    
    printf("Digite o valor da venda media anual: ");
    scanf("%d", &venda);
    
    printf("Digite o preço atual: ");
    scanf("%d", &preco1);
    
    if (venda < 500 && preco1 < 30) {
        preco2 = preco1 + preco1 * 0.10;
        printf("Valor novo: %d\n", preco2);
    }
    
    if (venda >= 500 && venda < 1200 && preco1 >= 30 && preco1 < 80) {
        preco2 = preco1 + preco1 * 0.15;
        printf("Valor novo: %d\n", preco2);
    }
    
    if (venda >= 1200 && preco1 >= 80) {
        preco2 = preco1 - preco1 * 0.20;
        printf("Valor novo: %d\n", preco2);
    }
    
    return 0;
}
