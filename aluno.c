#include <stdio.h>
#include <string.h>

void aprov(float a, float b, float c, float d);

void clear(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
};

int main(){
float a,b,c,d;
char v, nome[51];

    do{
        printf("----Sistema de calculo de media----");
    int nomeV = 0;

    while(!nomeV){
    printf("\n Digite seu nome (maximo 50 caracteres): ");
    if (fgets(nome, sizeof(nome), stdin) != NULL){
        size_t len = strlen(nome);

        int newL = 0;

        if (len > 0 && nome[len -1] == '\n') {
            nome[len - 1] = '\0';
            len--;
            newL = 1;
        } 
        
        if(len == 0){
            printf("\n O campo de nome nao pode estar vazio. Digite novamente.");
        }else if (!newL && len == 50){
            printf("\n O nome excede o limite de 50 caracteres. Digite novamente.");
            clear();
        } else{
            nomeV = 1;
        }
    } else {
        printf("\n Erro ao ler o nome. Tente novamente.");
        clear();
    }
    }
    printf("\n Digite a primeira nota: ");
    scanf("%f", &a);
    clear();

    while(a < 0 || a > 100){
    printf("\n Digite a primeira nota (0 a 100): ");
    scanf("%f", &a);
    clear();
    }

    printf("\n Digite a segunda nota: ");
    scanf("%f", &b);
    clear();

    while(b < 0 || b > 100){
    printf("\n Digite a segunda nota (0 a 100): ");
    scanf("%f", &b);
    clear();
    }

    printf("\n Digite a terceira nota: ");
    scanf("%f", &c);
    clear();

    while(c < 0 || c > 100){
    printf("\n Digite a terceira nota (0 a 100): ");
    scanf("%f", &c);
    clear();
    }

    printf("\n Digite a quarta nota: ");
    scanf("%f", &d);
    clear();

    while(d < 0 || d > 100){
    printf("\n Digite a quarta nota (0 a 100): ");
    scanf("%f", &d);
    clear();
    }
    
    

    printf("\n Resultado da(o) aluna(o) %s: ", nome);

    aprov(a,b,c,d);

    printf("\n Deseja consultar a media de outro aluno? (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);
    clear();

    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf("%s", &v);
        clear();
    }
}while(v == 's');

printf("\n Finalizando programa...");

}

void aprov(float a, float b, float c, float d){
    float med;

    med = (a + b + c + d)/4;

    if(med >= 0 && med < 50){
        printf("\n Sua media eh de %.2f e voce esta reprovado. \n", med);
    } else if(med >= 50 && med < 70){
        printf("\n Sua media eh de %.2f e voce esta em final. \n", med);
    } else if(med >= 70 && med <= 100){
        printf("\n Sua media eh de %.2f e voce esta aprovado, parabens! \n", med);
    } 
}