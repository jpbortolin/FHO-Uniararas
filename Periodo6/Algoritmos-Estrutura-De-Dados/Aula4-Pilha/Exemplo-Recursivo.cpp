#include <iostream>

using namespace std;

// Criando a função fatorial recursiva
unsigned long int fatorial(int numero) {
    // Tratando os casos base
    if (numero == 0)
        return 1;
    
    return numero * fatorial(numero - 1);
}


int main() 
{
    int fat;
    cout << "Informe um número: " << endl;
    cin >> fat;

    cout << "Resultado: " << fatorial(fat) << endl;


    return 0;
}
