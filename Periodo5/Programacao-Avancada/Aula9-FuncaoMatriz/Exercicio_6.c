#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
Faça um programa que solicite o total gasto de um cliente de uma loja, e, utilizando funções
faça:
a. Imprime as opções de pagamento, solicita a opção desejada e imprime o valor total
das prestações (se houverem). Sabendo que as opções são:
1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima
de R$ 100,00).
*/

int opcoesPagamento(){
    int opcao;
    printf("Você tem 3 opções de pagamento:\n");
    printf("\n");
    printf("1ª Opção: A Vista com 10 porcento de desconto!\n");
    printf("2ª Opção: Em duas vezes sem desconto e sem juros!\n");
    printf("3ª Opção: Parcelado de 3 até 10 vezes com 3 porcento de juros ao mês (Somente para compras acima de R$100,00)\n");
    printf("\n");
    printf("Como o senhor deseja pagar? Digite 1, 2 ou 3: ");
    scanf("%d", &opcao);
    return opcao;
}

void valorEscolha(int opcao, float gastoTotal){
    if (opcao == 1){
        float vista = gastoTotal * 0.9;
        printf("O seu valor fica em %f pagando a vista!\n", vista);
    } else if (opcao == 2){
        float duas = gastoTotal / 2;
        printf("O seu valor fica em %f parcelando em 2 vezes!\n", duas);
    } else if (opcao == 3) {
        if (gastoTotal <= 100.0) {
            printf("Parcelamento com juros somente acima de R$100.00!\n");
            return;
        }
        int vezes;
        printf("Em quantas vezes deseja parcelar (3 a 10 com juros)? ");
        scanf("%d", &vezes);
        if (vezes < 3 || vezes > 10) {
            printf("Número de parcelas inválido.\n");
            return;
        }
        float totalComJuros = gastoTotal + (gastoTotal * 0.03 * vezes);
        float parcela = totalComJuros / vezes;
        printf("Pagamento em %d vezes de R$%f (Total: R$%f)!\n", vezes, parcela, totalComJuros);
    } else {
        printf("ERRO!\n");
    }
}


int main ()
{
    float gastoTotal;
    printf("Digite o gasto total que você teve na loja: ");
    scanf("%f", &gastoTotal);
    printf("\n");
    int opcao = opcoesPagamento();
    valorEscolha(opcao,gastoTotal);

    return 0;
}