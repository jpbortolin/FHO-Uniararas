#include <iostream>
#include <cstdlib>

using namespace std;

// Definição da estrutura do nó
struct No {
    int valor;
    No *prox;
};

No* head = NULL;

// Inserir elemento em uma posição específica
void inserir(int valor, int posicao) {
    No *elemento = (No*)malloc(sizeof(No));
    elemento->valor = valor;
    elemento->prox = NULL;

    if (posicao == 0 || head == NULL) {
        elemento->prox = head;
        head = elemento;
    } 
    else {
        No* aux = head;

        // Navega até o nó anterior à posição desejada
        for (int i = 0; i < posicao - 1 && aux->prox != NULL; i++) {
            aux = aux->prox;
        }

        elemento->prox = aux->prox;
        aux->prox = elemento;
    }
}

// Remove o elemento da posição especificada e retorna seu valor
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
    } 
    else {
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

// Exibe os elementos da lista
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

No* buscarValor(int valor) {
    No* aux = head;

    while (aux != NULL) {
        if (aux->valor == valor)
            return aux;
        aux = aux->prox;
    }

    return NULL;
}

int main() {
    inserir(1, 0);
    inserir(2, 0);
    inserir(3, 0);

    cout << "Lista inicial: ";
    visualizar();

    inserir(3, 0);
    inserir(5, 0);
    inserir(8, 0);

    cout << "Após inserções: ";
    visualizar();
    
    remover(0);

    cout << "Após remoção: ";
    visualizar();

    inserir(44, 1);
    inserir(55, 5);

    cout << "Após novas inserções: ";
    visualizar();

    cout << endl << "Acessando elementos manualmente:" << endl;
    cout << head->valor << endl; // 1º elemento
    cout << head->prox->valor << endl; // 2º elemento
    cout << head->prox->prox->valor << endl; // 3º elemento
    cout << head->prox->prox->prox->valor << endl; // 4º elemento

    int valor = 20;
    No* resultado = buscarValor(valor);
    if (resultado != NULL)
        cout << "Valor encontrado: " << resultado->valor << endl;
    else
        cout << "Valor nao encontrado." << endl;

    return 0;
}
