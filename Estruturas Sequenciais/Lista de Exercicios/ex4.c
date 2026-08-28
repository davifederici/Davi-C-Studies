#include<stdio.h>

int main(){

    float valor, result;

    printf("Digite um valor:");
    scanf("%f", &valor);

    if (valor >= 0 && valor <= 25){
        printf("%f está dentro do intervalo[0,25]\n", valor);
    }
    else if (valor > 25 && valor <= 50){
        printf("%f está dentro do intervalo[25,50]\n",valor);
    }
    else if (valor > 50 && valor <= 75){
        printf("%f está dentro do intervalo[50,75]\n", valor);
    }
    else if ( valor > 75 && valor <= 100){
        printf("%f está dentro do intervalo [75,100]\n", valor);
    }
    else{
        printf("Fora do intervalo\n");
    }

    return 0;
}