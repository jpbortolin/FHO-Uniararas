#include <iostream>

/*
Exercício 6 - Lista de exercícios de TADs

Faça um TAD para uma conta bancária...
*/

using namespace std;

typedef struct {
    int codigo;
    float saldo;
} Conta;

Conta criarConta() {
    // Executa a criação de uma conta
    conta.codigo = 1;
    conta.saldo = 100;
    return conta;
}

void sacar(Conta conta, float valor) {
    // Executa a ação de saque
    if((conta.saldo - valor) <= 0)
        conta.saldo -= valor;
    else
        cout << "Você não possui saldo suficiente!";
}

int main()
{
    Conta contaAtual;

    contaAtual = criarConta();

    cout << "Validando conta criada" << endl;
    cout << contaAtual.codigo;
    cout << contaAtual.saldo;

    sacar (contaAtual, 50);

    cout << contaAtual.saldo;

    return 0;
}
