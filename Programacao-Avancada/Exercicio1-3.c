#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cachorroquente = 1;
    int xsalada = 2;
    int xbacon = 3;
    int torrada = 4;
    int refri = 5;
    float pedido, codigo, quantidade;

    printf("Qual o código do item que você quer? \n");
    scanf("%f", &codigo);
    printf("Qual a quantidade do item que você quer? \n");
    scanf("%f", &quantidade);

    if (codigo == 1){
        pedido = quantidade * 4;
        printf("A conta a pagar é R$ %.2f \n", pedido);
    } 
    else if (codigo == 2){
        pedido = quantidade * 4.50;
        printf("A conta a pagar é R$ %.2f \n", pedido);
    }
    else if(codigo == 3){
        pedido = quantidade * 5;
        printf("A conta a pagar é R$ %.2f \n", pedido);
    }
    else if(codigo == 4){
        pedido = quantidade * 2;
        printf("A conta a pagar é R$ %.2f \n", pedido);
    }
    else if(codigo == 5){
        pedido = quantidade * 1.50;
        printf("A conta a pagar é R$ %.2f \n", pedido);
    }
    else{
        printf("O código digitado não existe. \n");
    }
    
    return 0;
}