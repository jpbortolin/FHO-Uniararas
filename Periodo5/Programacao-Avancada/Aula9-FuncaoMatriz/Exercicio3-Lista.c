#include <stdio.h>
#include <stdlib.h>

void lerExibirTorre() {
    int h;
    
    printf("Informe a altura da torre: \n");
    scanf("%d", &h);

    if (h >= 1) {
        for(int i = 1; i <= h; i++) {
            for(int j = 0; j < i; j++) {
                printf("#");
            }
            printf("\n");
        }
    }
    else {
        printf("Valor inválido!");

    }
}

int main()
{
    lerExibirTorre();
    return 0;
}