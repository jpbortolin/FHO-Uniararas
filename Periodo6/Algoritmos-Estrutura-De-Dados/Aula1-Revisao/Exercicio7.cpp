#include <iostream>

/*
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função
deve retornar um valor booleano para o programa principal.
*/

using namespace std;

int verificaPositivo(int valor) {
    return valor >= 0;
}

int main() {

    int valor, resultado;

    cout << "Informe um valor para validar se é positivo ou não: \n";
    cin >> valor;

    if (verificaPositivo(valor))
        cout << "Resultado positivo\n";
    else
        cout << "Resultado negativo\n";

    return 0;
}