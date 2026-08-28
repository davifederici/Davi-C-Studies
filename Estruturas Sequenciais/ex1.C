#include<stdio.h>

int main() {

    int p1,p1b,p2,p2b,x1,x2;

    printf("Digite os valores de P1:");
    scanf("%d %d", &p1 ,&p1b);

    printf("Digite os valores de P2:");
    scanf("%d %d", &p2 ,&p2b);

    printf("Digite os valores de X:");
    scanf("%d %d", &x1 ,&x2);

    if (x1 > p1 && x1 < p2 && x2 > p1b && x2 < p2b) {
        printf("\nEstá dentro do retângulo\n");
    }
    else if ((x1 == p1 || x1 == p2) && x2 >= p1b && p2b || (x2 == p1b || x2 == p2b) && x1 >= p1 && x1 <= p2){
        printf("X está sobre o retãngulo\n");
    }
    else{
        printf("\nNão está dentro do retângulo\n");
    }
    return 0;
}