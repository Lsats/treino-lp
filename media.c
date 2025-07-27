#include <stdio.h>

void media(float a, float b, float c);

int main(){
    char v;
    float a,b,c;

    do{
    printf("\n Digite sua primeira nota: ");
    scanf("%f", &a);
    printf("\n Digite sua segunda nota: ");
    scanf("%f", &b);
    printf("\n Digite sua terceira nota: ");
    scanf("%f", &c);

    media(a,b,c);

    printf("\n Deseja calcular outra media? (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);

    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf("%s", &v);
    }
    }while(v == 's');

    printf("\n Finalizando programa...");
}

void media(float a, float b, float c){
    float med;

    med = (a + b + c)/3;

    printf("\n Sua media eh de %.2f pontos", med);
}