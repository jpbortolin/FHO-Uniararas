#include <stdio.h>
#include <stdlib.h>

int main() {

    float n1, n2, media;

    //Definir a estrutura de repetição
    for (int i = 0; i < 3; i ++) {

        printf("Informar a n1:\n");
        scanf("%f", &n1);
        
        printf("Informar a n2:\n");
        scanf("&f", &n1);

        if (n1 >= 0 || n2 >=0) {
            media = (n1 + 2 * n2) / 3;

            if (media >= 5 && media <= 10) {
                printf("Aprovado!\n");
            }
            else {
                printf("Reprovado!\n");
            }
        }
        else {
            printf("Alguma nota está inválida!\n");
        } 
    }
    
    return 0;
}