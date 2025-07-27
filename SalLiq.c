
void SalLiq(float hr, int nr);

#include <stdio.h>

int main(){
char v;
float valHora;
int nrAulas;

    printf("\n ------Sistema de cálculo do valor líquido do salário de professores.------\n");
    do{
    printf("\n Valor da hora aula: ");
    scanf("%f", &valHora);
    printf("\n Número de aulas lecionadas no mês: ");
    scanf("%d", &nrAulas);

    SalLiq(valHora, nrAulas);

    printf("\n Deseja consultar outro salário? (s) SIM (n) NÃO: ");
    scanf(" %c", &v);

    while(v != 's' && v != 'n'){
        printf("\n Caractere inválido. Digite (s) para SIM e (n) para NÃO: ");
        scanf(" %c", &v);
        }
    }while( v == 's');
    printf("\n Finalizando programa...");
}

void SalLiq(float hr, int nr){
    float sal, aux;


    sal = hr * nr;

    if(sal <= 1518){
        aux = sal * 0.075;
        sal = sal - aux;
    } else if(sal <= 2793.88){
        aux = (sal * 0.09) - 22.77;
        sal = sal - aux;
    } else if(sal <= 4190.83){
        aux = (sal * 0.12) - 106.59;
        sal = sal - aux;
    } else if(sal <= 8157.41){
        aux = (sal * 0.14) - 190.40;
        sal = sal - aux;
    } else {
        sal = sal - 908.85;
    }

    printf("\n O seu salário líquido é de R$%.2f \n", sal);
}
