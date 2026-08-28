#include<stdio.h>

int main(){

    int op,item,qnt;

    printf("1 - Cachorro Quente\n");
    printf("2 - X-Salada\n");
    printf("3 - X-Bacon\n");
    printf("4 - Torrada Simples\n");
    printf("5 - Refrigerante\n");
    printf("\nDigite o código:\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Digite a quantidade de cachorro quente:\n ");
            scanf("%d", &item);
            qnt = item * 12;

            printf("O valor será de %d reais\n", qnt);
            break;
        
        case 2:
            printf("Digite a quantidade de X-Salada:\n");
            scanf("%d", &item);
            qnt = item * 8;

            printf("O valor será de %d reais\n", qnt);
            break;

        case 3:
            printf("Digite a quantidade de X-Bacon:\n");
            scanf("%d", &item);
            qnt = item * 10;

            printf("O valor será de %d reais\n", qnt);
            break;

        case 4:
            printf("Digite a quantidade de Torrada Simples:\n");
            scanf("%d", &item);
            qnt = item * 4;

            printf("O valor será de %d reais\n", qnt);
            break;

        case 5:
            printf("Digite a quantidade de Refrigerante:\n");
            scanf("%d", &item);
            qnt = item * 5;

            printf("O valor será de %d reais\n",qnt);
            break;
        default:
            printf("Opção inválida\n");
    }

    return 0;
}