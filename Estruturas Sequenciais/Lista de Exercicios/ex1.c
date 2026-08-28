#include<stdio.h>
#include<math.h>

int main(){

    int num,num2,num3,maiorAB;

    printf("Digite os valores:");
    scanf("%d%d%d", &num, &num2, &num3);

    maiorAB = (num + num2 + fabs(num - num2))/2;
    printf("Resultado: %d\n", maiorAB);

    if (num3 > maiorAB){
        printf("O terceiro valor é maior que A e B\n");
    }
    else{
        printf("Eh o maior\n");
    }

    return 0;
}