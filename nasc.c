#include <stdio.h>
#include <time.h>

void calcIdd(int dia, int mes, int ano);

int main (){
    int dia, mes, ano;

    printf("\n Digite o dia do seu nascimento: ");
    scanf("%d", &dia);

    while(dia < 1 || dia > 31){
        printf("\n Erro: dia invalido. Tente novamente: ");
        scanf("%d", &dia);
    }

    printf("\n Digite o mes do seu nascimento: ");
    scanf("%d", &mes);

    while(mes < 1 || mes > 12){
        printf("\n Erro: mes invalido. Tente novamente: ");
        scanf("%d", &mes);
    }

    printf("\n Digite o ano do seu nascimento: ");
    scanf("%d", &ano);

     while(ano < 1900 || ano > 2025){
        printf("\n Erro: ano invalido. Tente novamente (1900 a 2025): ");
        scanf("%d", &ano);
    }

        printf("\n Sua data de nascimento eh: %d/%.2d/%d \n", dia, mes, ano);
    calcIdd(dia,mes,ano);

}

void calcIdd(int dia, int mes, int ano){
   time_t tempoAtual;
   struct tm *dataAtual;
    
    time(&tempoAtual);
    dataAtual = localtime(&tempoAtual);

    int diaAt = dataAtual->tm_mday;
    int mesAt = dataAtual->tm_mon + 1;
    int anoAt = dataAtual->tm_year + 1900;

    int anos = anoAt - ano;
    int meses = mesAt - mes;
    int dias = diaAt - dia;

    

    if(dias < 0){
        meses--;

        int diasMesAnt;

        if(mesAt == 1){
            diasMesAnt = 31;
        }else if(mesAt == 3){
            if((anoAt % 4 == 0 && anoAt % 100 != 0) || (anoAt % 400 == 0)){
                diasMesAnt = 29;
            } else{
                diasMesAnt = 28;
            }
        } else if (mesAt == 5 || mesAt == 7 || mesAt == 10 || mesAt == 12){
            diasMesAnt = 30;
        } else{
            diasMesAnt = 31;
        }
    dias += diasMesAnt;

    }

    if(meses < 0){
        anos --;
        meses += 12;
    }
    printf("\n Voce tem %d anos, %d mes(es) e %d dia(s) de vida.", anos, meses, dias);
}