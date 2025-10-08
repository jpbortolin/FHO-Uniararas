#include <iostream>

using namespace std;

/*
Exercício 1

Implemente duas estruturas PILHAS em um ÚNICO VETOR. Comente no próprio código qual é o
TAD definido para essa estrutura. Dica: use dois indicadores de topo e crie cada pilha em
extremidades opostas desse vetor.
*/

/*
- TAD: DualStack
- Este TAD implementa duas pilhas independentes utilizando um único vetor compartilhado.
- A pilha 1 cresce do início para o fim do vetor.
- A pilha 2 cresce do fim para o início do vetor. 
*/

#define MAX 10

typedef struct {
    int set[MAX];
    int top1;
    int top2;
} DualStack;

// Inicializa as duas pilhas
void init(DualStack& ds){
    ds.top1 = -1;
    ds.top2 = MAX;
}

// Empilhar na pilha 1
void push1(DualStack &ds, int el) {
    if (ds.top1 + 1 < ds.top2) {
        ds.top1++;
        ds.set[ds.top1] = el;
    } else {
        cout << "Pilha 1 cheia!" << endl;
    }
}

// Empilhar na pilha 2
void push2(DualStack &ds, int el) {
    if (ds.top2 - 1 > ds.top1) {
        ds.top2--;
        ds.set[ds.top2] = el;
    } else {
        cout << "Pilha 2 cheia!" << endl;
    }
}

// Desempilhar da pilha 1
int pop1(DualStack &ds) {
    if (ds.top1 >= 0) { // Verifica se a pilha 1 não está vazia
        int el = ds.set[ds.top1];
        ds.top1--;
        return el;
    } else {
        cout << "Pilha 1 vazia!" << endl;
        return -1; // Indicador de erro se a pilha estiver vazia
    }
}

// Desempilhar da pilha 2
int pop2(DualStack &ds) {
    if (ds.top2 < MAX) { // Verifica se a pilha 2
        int el = ds.set[ds.top2];
        ds.top2++;
        return el;
    } else {
        cout << "Pilha 2 vazia!" << endl;
        return -1; // Indicador de erro se pilha estiver vazia
    }
}

// Retorna verdadeiro se estiver vazia a pilha 1
bool isEmpty1(DualStack& ds){
    return ds.top1 == -1;
}

// Retorna verdadeiro se estiver vazia a pilha 2
bool isEmpty2(DualStack& ds){
    return ds.top2 == MAX;
}

// Exibe os elementos das duas pilhas
void show(DualStack& ds) {
    cout << "Exibindo a pilha 1: " << endl;
    for (int i = ds.top1 ; i >= 0; i--) {
        cout << ds.set[i] << endl;
    }
    cout << "##########################" << endl;
    cout << "Exibindo a pilha 2: " << endl;
    for (int i = ds.top2; i < MAX; i++) {
        cout << ds.set[i] << endl;
    }
    cout << "##########################" << endl;
} 

int main()
{
    DualStack dualStack;
    init(dualStack);

    push1(dualStack, 1);
    push1(dualStack, 2);
    push1(dualStack, 3);
    push1(dualStack, 4);

    push2(dualStack, 10);
    push2(dualStack, 9);
    push2(dualStack, 8);
    push2(dualStack, 7);

    show(dualStack);

    cout << "Removido da pilha 1: " << pop1(dualStack) << endl;
    cout << "Removido da pilha 2: " << pop2(dualStack) << endl;

    show(dualStack);

    cout << "A pilha 1 está vazia? " << isEmpty1(dualStack) << endl; // 0 é falso e 1 é verdadeiro
    cout << "A pilha 2 está vazia? " << isEmpty2(dualStack) << endl; // 0 é falso e 1 é verdadeiro

    return 0;
}
