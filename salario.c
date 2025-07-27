//Faça um algoritmo que leia o valor do salário mínimo e o valor do salário de um usuário, calcule quantos salários mínimos esse 
//usuário ganha e imprima na tela o resultado. (Base para o Salário mínimo R$ 1.293,20).

#include <stdio.h>

void SalMin(int sal);

int main(){
int sal;
char v;

do{
printf("\n Informe o seu salario: \n");
scanf("%d", &sal);

SalMin(sal);

while(getchar() != '\n');

printf("\nDeseja informar um novo salario? digite 's' para sim e 'n' para nao.");
scanf(" %c", &v);

while(v != 's' && v != 'n'){
    printf("\nCaractere incorreto. Digite (s) para SIM e (n) para NAO:");
    while(getchar() != '\n');
    scanf(" %c", &v);
};

}while(v == 's');

printf("\nFinalizando programa...\n");
};

void SalMin(int sal){
    float res;
    const float min = 1293.20;

    res = sal/min;
    printf("\n Salario minimo atual: %.2f \n", min);

    if (res >= 1.0){
    printf("\n Voce recebe %2.f salario(s) minimo(s)\n", res);
    } else {
        printf("\n Voce recebe menos que o salario minimo.\n");
    }
}