#include <iostream>

/*

Implementação de pilha em vetor

*/

using namespace std;

#define MAX 10 // Definindo uma constante 10

// Representando a nossa pilha
typedef struct {
    int set[MAX]; // Conjunto de elementos
    int top; // Index do elemento no vetor
} Stack;

// Receberá a referência da pilha
// Inicializa a pilha com o top -1
void init(Stack& s){
    s.top = -1;
}

// Empilhar
void push(Stack &s, int el) {
    s.top++;
    s.set[s.top] = el;
}

// Desempilhar
int pop(Stack &s) {
    int el = s.set[s.top]; // Resgata o topo atual!
    s.top--; // Atualizando o topo para ser o elemento anterior
    return el; 
}

// Retorna verdadeiro se estiver vazia
bool isEmpty(Stack& s){
    return s.top == -1;
}

// Exibir os elementos
void show(Stack& s) {
    cout << "Exibindo a pilha: " << endl;
    for (int i = s.top ; i >= 0; i--) {
        cout << s.set[i] << endl;
    }
    cout << "############" << endl;
}

int main ()
{
    Stack stack; // Cria uma pilha

    init(stack); // Inicializa ela com os valores "default"

    // Utilizando a estrutura
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);

    show(stack);

    cout << "Removido: " << pop(stack) << endl;

    show(stack);

    cout << "Está vazia? " << isEmpty(stack) << endl; // 0 é falso e 1 é verdadeiro
        
    return 0;
}