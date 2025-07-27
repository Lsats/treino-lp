#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void calcCresc(int alt1, int alt2, int tx1, int tx2, char *nome1, char *lenome2);


void clear(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
};

void validNome(char *buffer, size_t tamanho, const char *prompt);

int main(){
    char v, nome1[31], nome2[31];
int alt1, alt2;
int tx1, tx2;

printf("\n Sistema de cálculo de taxa de crescimento.\n");

do{
    validNome(nome1, sizeof(nome1), "Digite o nome da primeira pessoa");

printf("\n Altura da primeira pessoa (em cm): ");
scanf("%d", &alt1);
clear();

printf("\n Taxa de crescimento ao ano (cm): ");
scanf("%d", &tx1);
clear();

    validNome(nome2, sizeof(nome2), "Digite o nome da segunda pessoa");

printf("\n Altura da segunda pessoa (em cm): ");
scanf("%d", &alt2);
clear();

printf("\n Taxa de crescimento ao ano (cm): ");
scanf("%d", &tx2);
clear();

calcCresc(alt1,alt2,tx1,tx2,nome1,nome2);

printf("\n Deseja consultar novamente? (s) para SIM e (n) para NÃO: ");
scanf(" %c", &v);
clear();

while(v != 's' && v != 'n'){
    printf("\n Caractere inválido. Digite (s) para SIM e (n) para NÃO: ");
    scanf(" %c", &v);
    clear();
}

}while (v == 's');
    printf("\n Finalizando programa...");
}


void calcCresc(int alt1, int alt2, int tx1, int tx2, char *nome1, char *nome2){
int res1 = abs(alt1 - alt2), res2 = abs(tx1 - tx2);
double tempo = (double)res1/res2;


if(alt1 > alt2 && tx2 > tx1){
    printf("\n %s irá alcancar %s em altura em %.1f anos", nome2, nome1, tempo);
} else if(alt2 > alt1 && tx1 > tx2){
    printf("\n %s irá alcancar %s em altura em %.1f anos", nome1, nome2, tempo);
} else if(alt1 > alt2 && tx1 >= tx2){
    printf("\n %s não alcançará a altura de %s pois possui uma taxa de crescimento menor ou igual.", nome2, nome1);
} else if(alt2 > alt1 && tx2 >= tx1){
    printf("\n %s não alcançará a altura de %s pois possui uma taxa de crescimento menor ou igual.", nome1, nome2);
} else if(alt1 == alt2){
    printf("\n %s e %s possuem já a mesma altura.\n", nome1, nome2);
}
    
}

void validNome(char *buffer, size_t tamanho, const char *prompt){
    int nomeV = 0;

    while(!nomeV){
        printf("\n %s (máx %zu caracteres): ", prompt, tamanho - 1);
        if(fgets(buffer, tamanho, stdin) != NULL){
            size_t len = strlen(buffer);
            int newL = 0;

            if(len > 0 && buffer[len - 1] == '\n'){
                buffer[len - 1] = '\0';
                len--;
                newL = 1;
            }

            if(len == 0){
                printf("\n O campo 'nome' não pode estar vazio. Digite novamente.");
            } else if(!newL && len == tamanho - 1){
                printf("\n O nome excede o limite de %zu caracteres. Digite novamente.", tamanho - 1);
                clear();
            } else {
                nomeV = 1;
            }
        } else {
            printf("\n Erro ao ler o nome. Tente novamente.");
            clear();
        }
    }
}