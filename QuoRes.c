#include <stdio.h>

void QuoRes(int a, int b);

int main(){
int a,b;

    printf("\n Digite o dividendo: ");
    scanf("%d", &a);

    printf("\n Digite o divisor: ");
    scanf("%d", &b);

    QuoRes(a,b);
}

void QuoRes(int a, int b){
    int quo, rest;

    quo = a / b;
    rest = a % b;

    printf("\n O quociente de %d/%d é: %d. O resto é: %d", a, b, quo, rest);
}

