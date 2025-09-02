#include <iostream>

using namespace std;

// Construindo uma função que permite manipular variáveis do main
void encontrarMaiorMenor(int conjunto[], int &maior, int &menor) {
    maior = menor = conjunto[0];

    for (int i = 1; i < 10; i++) {
        if (conjunto[i] > maior) {
            maior = conjunto[i];
        }
        if (conjunto[i] < menor) {
            menor = conjunto[i];
        }
    }
}

int main()
{
    // Criando uma variável vetor e já inicializando a mesma
    int conjunto[] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 11};
    int maiorElemento, menorElemento;

    encontrarMaiorMenor(conjunto, maiorElemento, menorElemento);

    cout << "Maior elemento: " << maiorElemento << endl;

    cout << "Menor elemento: " << menorElemento << endl;


    return 0;
}
