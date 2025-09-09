#include <iostream>

using namespace std;

/*

Exercício 4 - Lista de Ponteiros

Crie uma função que receba uma lista de números inteiros por referência e duas variáveis inteiras
por referência. A função deve contar quantos números positivos e negativos existem na lista e
armazenar os resultados nas variáveis correspondentes.

*/

// void encontrarValores(int conjunto[], int &pos, int &neg) 
void encontrarValores(int *conjunto, int *pos, int *neg, int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        if (conjunto[i] < 0)
            (*neg)++; // manipulando o conteúdo da variável negativa
        else
            (*pos)++; // manipulando o conteúdo da variável positiva
    }
}

int main()
{
    int const tamanho = 10;
    int conjunto[tamanho] = {1, -23, 30, 33, -660, 9, 12, 99, 54, 100};
    int pos = 0, neg = 0;

    // criando os ponteiros para os inteiros
    int* ptrPos, * ptrNeg;
    ptrPos = &pos;
    ptrNeg = &neg;

    cout << "Executando a função ..." << endl;

    // chamada da função - o "retorno" será via referência para: pos e neg
    encontrarValores(conjunto, ptrPos, ptrNeg, tamanho);

    cout << "Função executada ..." << endl;
    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " << neg << endl;

    return 0;
}
