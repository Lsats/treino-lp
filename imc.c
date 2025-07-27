#include <stdio.h>

void calcIMC(float peso, float alt);

int main(){
char v;
float peso, alt, res;

do{
printf("\n Digite seu peso: ");
scanf("%f", &peso);

printf("\n Digite sua altura: ");
scanf("%f", &alt);

calcIMC(peso, alt);

printf("\n Deseja fazer outro calculo? (s) para SIM e (n) para NAO: ");
scanf("%s", &v);

while(v != 's' && v != 'n'){
   printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
   scanf("%s", &v);
};


}while(v == 's');

printf("\n Finalizando programa...");
}

void calcIMC(float peso, float alt){
    float qd, res;

    if(alt > 3.0){
        alt = alt / 100;
    };

    qd = alt * alt;
    res = peso / qd;

    printf("\n Seu IMC eh %.2f", res);

    if (res <= 18.5) {
        printf("\n Voce esta abaixo do peso ideal.");
    }else if (res < 25){
        printf("\n Parabens! Voce esta no peso ideal!");
    }else if (res < 30){
        printf("\n Voce esta levemente acima do peso.");
    }else if (res < 35){
        printf("\n Voce esta no grau I de obesidade.");
    }else if (res < 40){
        printf("\n Voce esta no grau II (severa) de obesidade.");
    }else if (res > 40){
        printf("\n Voce esta no grau III (morbida) de obesidade.");
    }
    
}