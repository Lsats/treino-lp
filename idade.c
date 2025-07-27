#include <stdio.h>
#include <string.h>

void Vidade(int idd);

void clear(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
};

int main(){
int idd;
char v, nome[31];

do{ 
    int nomeV = 0;
    
    while(!nomeV){
    printf("\n Digite seu nome (maximo 30 caracteres): ");
    if (fgets(nome, sizeof(nome), stdin) != NULL){
        size_t len = strlen(nome);
    
    int newL = 0;

    if(len > 0 && nome[len - 1] == '\n'){
        nome[len - 1] == '\0';
        len--;
        newL = 1;
    }

    if(len == 0){
        printf("\n O campo 'nome' nao pode estar vazio. Tente novamente.\n");
    } else if (!newL && len == 30){
        printf("\n O nome excede o limite de 30 caracteres. Tente novamente. \n");
        clear();
    } else {
        nomeV = 1;
    }
    } else {
        printf("\n Erro ao ler o nome. Tente novamente. \n");
        clear();
    }

    
    }
    printf("\n Digite sua idade: ");
    scanf("%d", &idd);
    clear();

    while(idd < 0){
        printf("\n Erro: Idade invalida. Insira uma idade valida (maior que 0): ");
        scanf("%d", &idd);
        clear();
    }

    printf("\n Resultado da(o) %s ", nome);
    
    Vidade(idd);

    printf("\n Deseja consultar outra idade? (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);
    clear();

    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf("%s", &v);
        clear();
}

}while(v == 's');
    printf("\n Finalizando programa...\n");
}

void Vidade(int idd){
    if(idd < 18){
        printf("\n menor de idade.\n");
    } else {
        printf("\n maior de idade.\n");
    }
}