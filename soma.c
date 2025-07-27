#include <stdio.h>

int somar(int a,int b,int c);

int main (){
int a, b, c, soma, nv = 1;

while(nv != 0){
printf("\n Digite o primeiro numero: ");
scanf("%d", &a);
printf("\n Digite o segundo numero: ");
scanf("%d", &b);
printf("\n Digite o terceiro numero: ");
scanf("%d", &c);

soma = somar(a,b,c);
printf("\n Soma do primeiro numero com o segundo: %d", soma);

printf("\n Iniciando nova soma... digite 0 para SAIR ");
scanf("%d", &nv);
}
    return 0;
}

int somar(int a,int b,int c){
    int soma = a + b;

    if(soma > c) {
    printf("\n A soma de A + B eh maior do que C, A + B = %d > C = %d \n", soma,c);
} if(soma < c) {
    printf("\n A soma de A + B eh menor do que C, A + B = %d < C = %d \n", soma,c);
} if(soma == c) {
    printf("\n A soma de A + B eh igual a C, A + B = %d == C = %d \n", soma, c);
}
return soma;
}
