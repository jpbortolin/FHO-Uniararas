#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, dias, idade2, dias2;

    printf("Informe a primeira idade:\n");
    scanf("%d", &idade);
    printf("Informe a segunda idade:\n");
    scanf("%d", &idade2);

    dias = idade * 365;
    dias2 = idade2 * 365;

    printf("A primeira idade de %d corresponde, aproximadamente, %d dias de vida \n", idade, dias);
    printf("A segunda idade de %d corresponde, aproximadamente, %d dias de vida \n", idade2, dias2);

    if (idade > idade2){
        printf("A primeira pessoa é a mais velha. \n");
    } 
    else if (idade2 > idade){
        printf("A segunda pessoa é a mais velha \n");
    } 
    else {
        printf("As pessoas possuem a mesma idade \n");
    }
    
    return 0;
}