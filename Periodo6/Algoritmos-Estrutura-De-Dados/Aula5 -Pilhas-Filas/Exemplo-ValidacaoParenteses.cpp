#include <iostream>
#include <string.h>

/*

Implementação de pilha em vetor

*/

using namespace std;

#define MAX 10 // Definindo uma constante 10

// Representando a nossa pilha
typedef struct {
    char set[MAX]; // Conjunto de elementos
    int top; // Index do elemento no vetor
} Stack;

// Receberá a referência da pilha
// Inicializa a pilha com o top -1
void init(Stack& s){
    s.top = -1;
}

// Empilhar
void push(Stack &s, char el) {
    // Validando OVERFLOW
    if (s.top + 1 > MAX) {
        cout << "OVERFLOW!";
        return '';
    }
    else {
        s.top++;
        s.set[s.top] = el;
    }
}

// Desempilhar
char pop(Stack &s) {
    // Tratando o UNDERFLOW
    if (s.top - 1 < -1) {
        cout << "UNDERFLOW";
        return 0;
    }

    char el = s.set[s.top]; // Resgata o topo atual!
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
    
    char equacao[10];
    cin >> equacao;

    // Analisando os caracteres da equação{
    for (int i = 0; i < strlen(equacao); i++) {
        if (equacao[i] == '(')
            push(stack, equacao[i]);
        else {
            if (equacao[i] == ')') {
                if (isEmpty(stack)) {
                    cout << "Expressão mal formada, pois possui mais elementos de fecha" << endl;
                    return 0;
                }
                pop(stack);
            }     
        }
    }

    if (!isEmpty(stack))
        cout << "Expressão mal formada, pois possui mais elementos de abertura!";
    else
        cout << "Expressão válida!";

    return 0;
}