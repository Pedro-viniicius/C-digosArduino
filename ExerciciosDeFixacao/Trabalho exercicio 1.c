#include <stdio.h>
#include <math.h>

int main() {
    float diame, raio, area, areatotal = 0;
    int i;

    printf("Digite o diametro do alvo em metros: ");
    scanf("%f", &diame);

    for ( i = 0; i <= 9; i++) {
        raio = diame / 2;
        area = 3.14159265359 * pow(raio, 2);
        diame -= 0.01;
        areatotal = areatotal + area;
        
    }

    areatotal *= 15000;
    printf("Quantidade total de papel a ser comprada (m^2) = %.2f\n", areatotal);

    return 0;
}
