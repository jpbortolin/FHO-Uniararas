#include <iostream>

using namespace std;

/*
A MODA de um vetor de números é o número m no vetor que é repetido com maior freqüência. Se mais de um número for 
repetido com freqüência máxima igual, não existirá uma moda. Escreva uma função em C que aceite um vetor de 
números e retorne a moda ou uma indicação de que a moda não existe.
*/

int const tamanho = 10;

void moda(int vetor[], int tamanho)
{
    int contadorMax = 0, moda = -1;

    for (int i = 0; i < tamanho; i++)
    {
        int contador = 0;
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor[j] == vetor[i])
                contador++;
        }
        if (contador > contadorMax) 
        {
            contadorMax = contador;
            moda = vetor[i];
        }
        else if (contador == contadorMax && moda != vetor[i])
            moda = -1; // Indica que não existe uma moda
    }

    if (moda == -1)
        cout << "Não existe uma moda." << endl;
    else
        cout << "A moda é: " << moda << endl;
}

int main()
{
    int vetor[tamanho];

    cout << "Digite " << tamanho << " números inteiros:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    moda(vetor, tamanho);

    return 0;
}
