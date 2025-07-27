#include <stdio.h>

void antsuc(int num){
    int s, a;
    s = num + 1;
    a = num - 1;

    printf("\n Sucessor do numero %d eh: %d \n", num, s);
    printf("\n Antecessor do numero %d eh: %d \n", num, a);
}

int main() {
    int num, v = 1;

    while( v != 0){
    printf("\n Digite um numero para saber seu antecessor e sucessor: \n");
    scanf("%d", &num);

    antsuc(num);

    printf("\n Para sair digite '0', para continuar digite qualquer outro numero...");
    scanf("%d", &v);
    }
}

