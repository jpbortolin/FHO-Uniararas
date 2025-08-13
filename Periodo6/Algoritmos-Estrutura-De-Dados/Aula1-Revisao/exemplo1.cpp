#include <iostream>

using namespace std;

int main() {

    // 'cout' é utilizado para escrita de informações na tela
    cout << "Hello World!\n";
    cout << "Nosso texto - frase\n\t" << "\nNosso texto - frase 2" << endl;

    // definindo uma variável
    int valor = 10;
    float mediaFinal;

    // exibindo conteúdo da variável na tela
    cout << "Valor da variável: " << valor << endl;

    // lendo valores do teclado e atribuindo a uma variável
    cout << "Informe um novo valor para a variável:\n";
    cin >> valor;
    cout << "O novo valor é: " << valor << endl;

    cout << "Informe a média desejada da disciplina de ED:\n";
    cin >> mediaFinal;

    // exibindo o texto com os dois valores
    cout << "O valor da primeira variável é: " 
         << valor 
         << "\nMédia Final: " 
         << mediaFinal 
         << endl;

    return 0;
}