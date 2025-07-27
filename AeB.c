
#include <stdio.h>

void variar(int a, int b);

int main() {
    int a, b;

    printf("\n Digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("\n Digite o segundo numero: \n");
    scanf("%d", &b);

    variar(a,b);
}

void variar(int a, int b){
    int c;
    if( a == b){
        c = a + b;
        printf("\n Os numeros sao iguais, realizando soma ... resultado: %d \n", c);
    } else {
        c = a * b;
        printf("\n Os numeros sao diferentes, realizando multiplicacao... resultado: %d \n", c);
    }
}