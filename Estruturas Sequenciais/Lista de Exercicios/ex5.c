#include<stdio.h>

int main(){

    int num,num2,num3,A,B,C;

    printf("Digite 3 valores:\n");
    scanf("%d%d%d", &num, &num2, &num3);

    if (num >= num2 && num >= num3 && num2 >= num3){
        A = num;
        B = num2;
        C = num3;
        
        if (A >= B + C){
            printf("Não forma Triangulo\n");
        }
        else if (A*A == B*B + C*C){
            printf("Triangulo Retangulo\n");
        }
        else if (A*A > B*B + C*C){
            printf("Triangulo Obtusangulo\n");
        }
        else if ( A*A < B*B + C*C){
            printf("Triangulo Acutangulo\n");
        }
        else if (A == B && A == C && B == C){
            printf("Triangulo Equilatero\n");
        }
        else if (A == B || A == C || B == C){
            printf("Triangulo Isosceles\n");
        }
    }
        if (num2 >= num && num2 >= num3 && num >= num3){
        A = num2;
        B = num;
        C = num3;
        
        if (A >= B + C){
            printf("Não forma Triangulo\n");
        }
        else if (A*A == B*B + C*C){
            printf("Triangulo Retangulo\n");
        }
        else if (A*A > B*B + C*C){
            printf("Triangulo Obtusangulo\n");
        }
        else if ( A*A < B*B + C*C){
            printf("Triangulo Acutangulo\n");
        }
        else if (A == B && A == C && B == C){
            printf("Triangulo Equilatero\n");
        }
        else if (A == B || A == C || B == C){
            printf("Triangulo Isosceles\n");
        }
    }    
    if (num3 >= num && num3 >= num2 && num >= num2){
        A = num3;
        B = num;
        C = num2;
        
        if (A >= B + C){
            printf("Não forma Triangulo\n");
        }
        else if (A*A == B*B + C*C){
            printf("Triangulo Retangulo\n");
        }
        else if (A*A > B*B + C*C){
            printf("Triangulo Obtusangulo\n");
        }
        else if ( A*A < B*B + C*C){
            printf("Triangulo Acutangulo\n");
        }
        else if (A == B && A == C && B == C){
            printf("Triangulo Equilatero\n");
        }
        else if (A == B || A == C || B == C){
            printf("Triangulo Isosceles\n");
        }
    }
        if (num2 >= num && num2 >= num3 && num3 >= num){
        A = num2;
        B = num3;
        C = num;
        
        if (A >= B + C){
            printf("Não forma Triangulo\n");
        }
        else if (A*A == B*B + C*C){
            printf("Triangulo Retangulo\n");
        }
        else if (A*A > B*B + C*C){
            printf("Triangulo Obtusangulo\n");
        }
        else if ( A*A < B*B + C*C){
            printf("Triangulo Acutangulo\n");
        }
        else if (A == B && A == C && B == C){
            printf("Triangulo Equilatero\n");
        }
        else if (A == B || A == C || B == C){
            printf("Triangulo Isosceles\n");
        }
    }
    if (num3 >= num && num3 >= num2 && num2 >= num){
        A = num3;
        B = num2;
        C = num;
        
        if (A >= B + C){
            printf("Não forma Triangulo\n");
        }
        else if (A*A == B*B + C*C){
            printf("Triangulo Retangulo\n");
        }
        else if (A*A > B*B + C*C){
            printf("Triangulo Obtusangulo\n");
        }
        else if ( A*A < B*B + C*C){
            printf("Triangulo Acutangulo\n");
        }
        else if (A == B && A == C && B == C){
            printf("Triangulo Equilatero\n");
        }
        else if (A == B || A == C || B == C){
            printf("Triangulo Isosceles\n");
        }
    }
    return 0;
}