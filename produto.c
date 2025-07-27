#include <stdio.h>

void calcPag(float prod, int opt, int parc);

int main (){
    char v;
    int opt, parc;
    float prod;

    printf("\n -------------Boas-vindas ao sistema de compras e-mo!-------------\n");
    
    do{
    printf("\n Digite o valor do produto que deseja comprar: ");
    scanf("%f", &prod);

    printf("\n Selecione um metodo de pagamento: \n");
    printf("1 - Dinheiro ou Pix (15% OFF)\n");
    printf("2 - Cartao de debito (10% OFF)\n");
    printf("3 - Cartao de credito (10%! de JUROS acima de duas parcelas)\n");

    scanf("%d", &opt);

    while(opt < 1 || opt > 3){
    printf("\n Opcao invalida. Tente novamente!\n");
    printf("1 - Dinheiro ou Pix (15% OFF)\n");
    printf("2 - Cartao de debito (10% OFF)\n");
    printf("3 - Cartao de credito (10%! de JUROS acima de duas parcelas)\n");
    scanf("%d", &opt);
    };

    switch (opt)
    {
    case 1:
        calcPag(prod,opt,parc);
        break;
    
    case 2:
        calcPag(prod,opt,parc);
    break;

    case 3:
    printf("\n Digite a quantidade de parcelas (1x a 6x): ");
    scanf("%d", &parc);
        calcPag(prod,opt,parc);
    break;
}
    printf("\n Deseja fazer uma nova compra? (s) para SIM e (n) para NAO: ");
    scanf("%s", &v);

    while(v != 's' && v != 'n'){
        printf("\n Caractere invalido. Digite (s) para SIM e (n) para NAO: ");
        scanf("%s", &v);
    }
    }while(v == 's');

printf("\n Finalizando programa... \n");

}

void calcPag(float prod, int opt, int parc){
    float res;

    if(opt == 1){
        res = prod * 0.15;
        prod = prod - res;
    printf("\n Preco do produto com desconto aplicado: R$%.2f \n", prod);
    } else if(opt == 2){
        res = prod * 0.10;
        prod = prod - res;
    printf("\n Preco do produto com desconto aplicado: R$%.2f \n", prod);
    } else if(opt == 3 && parc <= 2){
    printf("\n Preco do produto: R$%.2f", prod);
    } else if(opt == 3 && parc >=3 && parc <=6){
        res = prod * 0.10;
        prod = prod + res;
    printf("\n Preco do produto com juros: R$%.2f \n", prod);
    }
  }