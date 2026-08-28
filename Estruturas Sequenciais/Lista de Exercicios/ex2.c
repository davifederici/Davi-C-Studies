#include<stdio.h>

int main(){

    float velo,result;
    int horas;

    printf("Digite o tempo gasto( em horas):\n");
    scanf("%d", &horas);

    printf("Digite a velocidade média(Km/H):\n");
    scanf("%f", & velo);

    result = (horas * velo)/ 12;

    printf("Seriam necessários: %.3f de Litros\n", result);
    
    return 0;
}