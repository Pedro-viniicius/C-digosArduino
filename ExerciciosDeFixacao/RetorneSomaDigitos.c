#include <stdio.h>


int SomaDigitos(int n){
    if (n < 10){
        return n;
    }
    
   return (n % 10) + SomaDigitos(n / 10);
}

int main (){
    int number1 = 165656;
    
    int total = SomaDigitos(number1);
    printf("%d", total);

}