#include <iostream>
#include <cstdlib>

using namespace std;

// Estrutura do nó
struct No {
    int valor;
    No *prox;
};

No* head = NULL;

// Inserir elemento na lista
void inserir(int valor, int posicao) {
    No *elemento = (No*)malloc(sizeof(No));
    elemento->valor = valor;
    elemento->prox = NULL;

    if (posicao == 0 || head == NULL) {
        elemento->prox = head;
        head = elemento;
    } else {
        No* aux = head;

        for (int i = 0; i < posicao - 1 && aux->prox != NULL; i++) {
            aux = aux->prox;
        }

        elemento->prox = aux->prox;
        aux->prox = elemento;
    }
}

// Remover elemento por posição
int remover(int posicao) {
    if (head == NULL) {
        cout << "Lista vazia!" << endl;
        return -1;
    }

    No* removido;
    int valor;

    if (posicao == 0) {
        removido = head;
        head = removido->prox;
        valor = removido->valor;
        free(removido);
        return valor;
    } else {
        No* aux = head;

        for (int i = 0; i < posicao - 1 && aux->prox != NULL; i++) {
            aux = aux->prox;
        }

        if (aux->prox == NULL) {
            cout << "Posição inválida!" << endl;
            return -1;
        }

        removido = aux->prox;
        aux->prox = removido->prox;
        valor = removido->valor;
        free(removido);
        return valor;
    }
}

// Exibir elementos da lista
void visualizar() {
    No* aux = head;

    if (aux == NULL) {
        cout << "Lista vazia!" << endl;
        return;
    }

    while (aux != NULL) {
        cout << aux->valor << "\t";
        aux = aux->prox;
    }
    cout << endl;
}

int obterValorPorPosicao(int posicao) {
    No* aux = head;

    for (int i = 0; i < posicao; i++) {
        aux = aux->prox;
    }

    return aux->valor;
}

int main() {
    inserir(10, 0);
    inserir(20, 1);
    inserir(30, 2);
    inserir(40, 3);
    inserir(50, 4);

    cout << "Lista atual: ";
    visualizar();

    cout << "\n1) Valor na posicao 2: " << obterValorPorPosicao(2) << endl;
    cout << "\n2) Valor na posicao 4: " << obterValorPorPosicao(4) << endl;

    return 0;
}
