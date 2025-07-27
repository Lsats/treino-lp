#include <stdio.h>

void calcDis(float t, float v);

int main(){
    float tempo, vel;

    printf("\n -------- Sistema de cálculo de litros de combustível gastos --------\n");
    printf("\n Informe o tempo gasto na viagem (horas): ");
    scanf("%f", &tempo);
    printf("\n Informe a velocidade (km/h) do carro: ");
    scanf("%f", &vel);

    calcDis(tempo,vel);
}

void calcDis(float t, float v){
float dist, lts;

    dist = t * v;
    lts = dist/12;

    printf("\n Distância percorrida: %.2fkm. Litros de combustivel gastos: %.2fL.", dist, lts);
    
}