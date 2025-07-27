#include <stdio.h>
#include <stdbool.h>

void boolean(bool res1, bool res2,int a, int b);

int main() {
bool res1, res2;
char v;
int a, b;

    do{
    printf("\n Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("\n Digite o segundo numero: ");
    scanf("%d", &b);

    boolean(res1,res2,a,b);

    printf("\n Deseja continuar? Digite (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);
    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
    }
    } while(v == 's');

    printf("\n Finalizando programa...");
}

void boolean(bool res1,bool res2,int a, int b){
    if(a % 2 == 0) {
        res1 = true;
    } else if (a % 2 != 0){
        res1 = false;
    };
    if(b % 2 == 0) {
        res2 = true;
    } else if (b % 2 != 0){
        res2 = false;
    };

    if(res1){
        printf("\n O primeiro valor digitado eh verdadeiro.\n");
    } else if (res1 == false){
        printf("\n O primeiro valor digitado eh falso.\n");
    };

    if(res2){
        printf("\n O segundo valor digitado eh verdadeiro.\n");
    } else if(res2 == false){
        printf("\n O segundo valor digitado eh falso.\n");
    };
}

