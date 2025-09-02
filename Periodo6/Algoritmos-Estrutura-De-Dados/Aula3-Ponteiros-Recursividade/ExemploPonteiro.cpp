#include <iostream>

using namespace std;

int main()
{
    // Variável com o conteúdo 10
    int v = 10;

    // Criar um ponteiro para inteiro
    int *p;

    // Fazendo com que 'p' aponte para o endereço de 'v'
    p = &v;

    cout << "Conteudo de v: " << v << endl;
    cout << "Endereco de v: " << &v << endl;
    cout << "Conteúdo de onde o ponteiro aponta: " << *p << endl;

    return 0;
}
