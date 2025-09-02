#include <iostream>

using namespace std;

// Função para exibir elementos do vetor
// v[] = *v = ponteiro
void exibir(int v[]) {
    for (int i = 0; i < 5; i++) {
        cout << "\t" << v[i];
    }
}

int main()
{
    int c[] = {1, 2, 3, 4, 5};

    exibir(c);

    return 0;
}
