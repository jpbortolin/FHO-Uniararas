#include <stdio.h>
#include <stdlib.h>

int main()
{
    //O que são For alinhados?
    
    /*
    Basicamente, o "for" pode executar repetidas vezes
    diversos comandos, inclusive outros "for"

    Alinhado = for "dentro" do outro for
    */

    for (int i = 0; i < 5; i++) {
        printf("%d\t", i);
        for (int j = 0; j < 5; j++) {
            printf("%d\t", j);
        }
        printf("\n"); 
    }
    
    

    return 0;
}