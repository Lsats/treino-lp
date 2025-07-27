#include <stdio.h>

void tab(int n, int opt);

int main(){
char v;
int num, opt;

printf("\n------------Sistema de tabuada------------\n");
do{
    printf("\n Selecione uma opção: \n");

    printf("1 - Mostrar a tabuada de 1 até 10 \n");
    printf("2 - Tabuada de um número específico. \n");
    printf("3 - Sair. \n");

    scanf("%d", &opt);

    while(opt < 1 || opt > 3){
        printf("\n Opção inválida. Tente novamente: ");
        printf("1 - Mostrar a tabuada de 1 até 10 \n");
        printf("2 - Tabuada de um número específico. \n");
        printf("3 - Sair. \n");

    scanf("%d", &opt);
    };

    switch(opt){
        case 1:
        tab(num, opt);
        break;

        case 2: 
        printf("\n Digite o número para calcular a tábuada: ");
        scanf("%d", &num);
        printf("\n");
        tab(num, opt);
        break;
        
        case 3:
        printf("\n Finalizando programa...");
        return 0;
        break;

    }

        printf("\n Deseja ver a tabuada de outro número? (s) para SIM (n) para NÃO: ");
        scanf(" %c", &v);

        while(v != 's' && v != 'n'){
        printf("\n Caractere inválido. Digite (s) para SIM e (n) para NÃO: ");
        scanf(" %c", &v);
}
}while( v == 's');

printf("\n Finalizando programa...");

return 0;
}

void tab(int n, int opt){
    int i, j, res;

    if(opt == 1){
        for(i = 1; i <=10; i++){
            printf("\n Tabuada do %d: \n", i);
            for(j = 1; j <= 10; j++){
                res = i * j;
                printf("%d x %d = %d \n", i, j, res);
            }
        }
    } else if(opt == 2){
    for(i = 1; i <= 10; i++){
        res = n * i;
        printf("%d x %d = %d \n", n, i, res);
    }
}
}