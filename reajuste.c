#include <stdio.h>

void reajustar(float valor);

int main(){
    float valor;

    reajustar(valor);
}

void reajustar(float valor){
    char v;
    float res;
    do{
    printf("\n Insira um valor inteiro para reajustar em 5 por cento: ");
    scanf("%f", &valor);
    res = valor * 1.05;

    printf("\n Valor reajustado: %.2f", res);

    printf("\n Deseja informar outro valor? Digite (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);

    while(v != 's' && v != 'n'){
        printf("\nCaractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf("%s", &v);
    }
    } while (v == 's');

    printf("\n Finalizando programa...");

}