#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    float x, y, res;
    int op;

    printf("Digite um valor para operar: ");
    scanf("%f", &x);
    printf("Digite um segundo valor para operar: ");
    scanf("%f", &y);

    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    printf("Selecione a opcao desejada: ");
    scanf("%d", &op);

    while(1){

    switch (op)
    {
        case 1: 
        //adicao
        res = x + y;
        printf("O resultado da adicao: %.2f\n", res);
             break;
        case 2:
        //subtracao
          res = x - y; 
        printf("O resultado da subtracao: %.2f\n", res);
             break;
        case 3:
        //multiplicacao
                  res = x * y;
                  printf("O resultado da multiplicacao: %.2f\n", res);
             break;
        case 4: 
        //divisao
        res = x / y;
            printf("O resultado da divisao: %.2f\n", res);
        case 5:
        //sair
        printf("Programa encerrado\n");
        return 0;
             break;
        default:
            printf("Opcao invalida");
             break;


    }

    printf("Digite um valor para operar: ");
    scanf("%f", &x);
    printf("Digite um segundo valor para operar: ");
    scanf("%f", &y);

    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    printf("Selecione a opcao desejada: ");
    scanf("%d", &op);

    }

   



       return 0;
}