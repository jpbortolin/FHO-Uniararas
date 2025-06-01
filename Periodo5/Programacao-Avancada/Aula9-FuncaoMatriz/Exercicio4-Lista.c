#include <stdio.h>
#include <stdlib.h>

//Instância de escopo GLOBAL
int contador = 0;

void incrementoInicial() {
    contador += 1200;
}

void incrementoSecundario() {
    contador += 1200;
}

int main()
{
    incrementoInicial();
    incrementoSecundario();
    printf("O valor do contador é: %d\n", contador);
    return 0;
}