#include <stdio.h>

void verif(int num);

int main(){
    int num, v=1;
    
    while( v != 0){
    printf("\n Digite um numero  \n");
    scanf("%d", &num);

    verif(num);

    printf("\n Digite '0' para encerrar ou qualquer numero para continuar...\n");
    scanf("%d", &v);
}
return 0;
}

void verif(int num){
    if(num % 2 == 0){
        printf("\n O numero %d eh par \n", num);
    } else if (num % 2 != 0) {
        printf("\n O numero %d eh impar \n", num);
    } 
    
    if (num < 0) {
        printf("\n O numero %d eh negativo (-) \n", num);
    } else if (num > 0) {
        printf("\n O numero %d eh positivo \n", num);
    } else {
        printf("\n O numero %d eh zero \n", num);
    }
}