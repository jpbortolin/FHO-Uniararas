#include <iostream>

using namespace std;

/*
Escreva uma função recursiva que retorne o resultado de x^n (x elevado a n). 
Sua função deve ter a chamada de float potencia(float x, int n).
*/

float potencia(float x, int n) {
    if (n == 0)
        return 1;
    else if (n < 0)
        return 1 / potencia(x, -n);
    else
        return x * potencia(x, n - 1);
}

int main()
{
    float x = 0.00;
    int n = 0;

    cout << "Digite o valor do X: " << endl;
    cin >> x;
    cout << "Qual o valor será elevado? " << endl;
    cin >> n;

    cout << "Resultado: " << potencia(x, n) << endl;

    return 0;
}
