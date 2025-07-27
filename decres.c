#include <stdio.h>

void bubble(int vet[], int tam);

int main(){
    int tam, i;
    char v;
    
    do{
    printf("\n Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vet[tam];

    printf("\n Insira os elementos no vetor: ");
    for(i = 0; i < tam; i++){
        printf("\n Elemento %d : ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\n Elementos do vetor antes da ordenacao: ");
    for(i = 0; i < tam; i++){
        printf("\n %d ", vet[i]);
    }

    bubble(vet, tam);

    printf("\n Elementos do vetor ordenados de forma decrescente: ");
    for(i = 0; i < tam; i++){
        printf("\n %d ", vet[i]);
    }

    printf("\n Deseja ordenar outro vetor? Digite (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);

    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf("%s", &v);
    }
} while(v == 's');

printf("\n Finalizando programa...");
}

void bubble(int vet[], int tam){
    int i, j, aux;

    for(i = 0; i < tam - 1; i++){
        for(j = 0; j < tam - i - 1; j++){
            if(vet[j] < vet[j + 1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}
