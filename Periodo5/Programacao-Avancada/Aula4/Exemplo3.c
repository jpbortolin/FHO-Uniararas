#include <stdio.h>
#include <stdlib.h>

/*
    Encontre o maior elemento dado um conjunto de 
    10 números informados pelo usuário
*/

int main()
{
    int maior;
    int conjunto[10];

    //Inicializar o conjunto
    for (int i = 0; i < 10; i++) {
        scanf("%d", &conjunto[i]);
    }

    //Suponho que o primeiro elemento é o maior
    maior = conjunto[0];

    //Percorremos os elementos e validamos se há algum elemento maior que a variável maior
    for (int i = 0; i < 10; i++) {
        if (conjunto[i] > maior) {
            maior = conjunto[i]; //Atualiza para o novo maior 
        }
    }
    
    printf("O maior elemento é: %d\n", maior);

    return 0;
}