#include<stdio.h>

int main(){

    int hi,mi,hf,mf,c1,c2,c3;

    printf("Digite as horas e os minutos iniciais:\n");
    scanf("%d%d", &hi , &mi);

    printf("Digite as horas e os minutos finais:\n");
    scanf("%d%d", &hf , &mf);

    if (hf > hi && mf > mi){
        c1 = hf - hi;
        c2 = mf - mi;
        
        printf("O JOGO DUROS %d HORA(S) E %d MINUTO(S)\n", c1, c2);
    }
    else if (hf == hi && mf == mi){
        c1 = 24;
        c2 = 0;

        printf("O JOGO DUROS %d HORA(S) E %d MINUTO(S)\n", c1, c2); 
    }
    else if (hf > hi && mi > mf){
        c1 = hf - hi;
        c3 = c1 * 60;
        c2 = c3 + (mf - mi);
        c1 = 0;

        printf("O JOGO DUROS %d HORA(S) E %d MINUTO(S)\n", c1, c2); 
    }
    else{
        printf("Erro, tente novamente!\n");
    }

    return 0;
}