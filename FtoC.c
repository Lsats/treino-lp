#include <stdio.h>

void convertF(float f);

int main(){
    float farh;
    char v;

    do{
        printf("\n Digite a temperatura em ºF: ");
        scanf("%f", &farh);

        convertF(farh);

        printf("\n Deseja converter novamente? (s) para SIM e (n) para NÃO: ");
        scanf(" %c", &v);

        while (v != 's' && v != 'n'){
            printf("\n Caractere inválido. Digite (s) para SIM e (n) para NÃO: ");
            scanf(" %c", &v);
        }
        

    } while (v == 's');

    printf("\n Finalizando programa...");
}
void convertF(float f){
    float c;

    c = (f - 32) * 5/9;

    printf("\n A temperatura de %.1fºF convertida em Celsius é: %1.fºC. \n", f, c);
}