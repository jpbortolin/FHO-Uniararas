#include <iostream>

using namespace std;

/*
Faça uma função que recebe, por parâmetro, uma matriz A(5,5) e retorna a soma dos seus
elementos.
*/

// Escopo global
int const tamanho = 5;

void preencherMatriz(int matriz[tamanho][tamanho]) {
    // Laço para percorrer a matriz - linha e coluna
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << "Insira m[" << i << "][" << j << "]: ";
            cout << endl;
            cin >> matriz[i][j];
        }
    }
}

// Função que somará todos os elementos
int somaMatriz(int m[tamanho][tamanho]) {
    // Percorrer todos os elementos (linha e coluna)
    // Somando em uma variável soma
    int somatorio = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < 5; j++) {
            somatorio += m[i][j];
        }
    }
    return somatorio;
}

int main()
{
    // Definindo a matriz
    int matriz[tamanho][tamanho];
    int resultado = 0;

    // Chamada da função
    preencherMatriz(matriz);
    // Realizar a somatoria da matriz
    resultado = somaMatriz(matriz);

    // Exibindo a soma total
    cout << "A soma total dos elementos da matriz é: " << resultado << endl;

    return 0;
}