#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void calcTriang();

int main(){
    char v;

    do{
    calcTriang();

    printf("\n Deseja verificar outro triangulo? (s) para SIM e (n) para NAO: ");
    scanf(" %c", &v);

    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf(" %c", &v);
    }
    } while (v == 's');

    printf("\n Finalizando programa...\n");

    return 0;
}

void calcTriang(){
    int a, b, c;
    bool res;

    do{
    printf("\n Insira o tamanho do lado A do triangulo (inteiro): ");
    scanf("%d", &a);

    printf("\n Insira o tamanho do lado B do triangulo (inteiro): ");
    scanf("%d", &b);

    printf("\n Insira o tamanho do lado C do triangulo (inteiro): ");
    scanf("%d", &c);

    if((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(a - b) < c && c < a + b)) {
        res = true;
    } else {
        res = false;
    }
    if(!res){
        printf("\n Erro: Os valores inseridos nao sao possiveis de formar um triangulo. Tente novamente: \n");
    };

} while(!res);


    if(a == b && b == c) {
        printf("\n O triangulo eh equilatero, todos os lados sao iguais. \n");
    } else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
        printf("\n O triangulo eh isosceles, dois lados sao iguais e o outro diferente. \n");
    } else {
        printf("\n O triangulo eh escaleno, todos os lados sao diferentes. \n");
    }
}