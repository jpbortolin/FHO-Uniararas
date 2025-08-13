#include <iostream>

/*
Escreva um programa simples C++ para calcular o raio de uma esfera (v = 4/3 x Pi x R3). Os valores
devem ser informados via teclado.
*/

using namespace std;

int main() {

    int raio, r;
    float Pi = 3.14;

    raio = (4 / 3) * Pi * (r * r * r);

    cout << "Informe o valor a seguir:\n";
    cin >> raio;

    cout << "O resultado final é: " << raio;

    return 0;
}