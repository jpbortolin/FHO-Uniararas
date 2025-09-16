#include <iostream>

using namespace std;

#define MAX 100

// TAD QUEUE - Fila linear implementada em vetor
typedef struct {
    int set[MAX];
    int inicio, fim;
} Queue;

// Inicializando a fila
void init (Queue& q) {
    // Sempre será inicializado o começo e o fm na posição zero
    q.inicio = q.fim = 0;
}

// Fila Circular, precisa validar duas situações
// Se o nosso fim colidiu com o início
// Se o fim chegou no limite da estrutura e se existe elemento na 1ª posição (Início 0 [vetor])
bool isFull(Queue& q) {
    return (q.fim + 1 == MAX && q.inicio == 0) || (q.fim + 1 == q.inicio);
}


// Enfileirar um elemento na estrutura (Inserindo elemento na fileira)
void enqueue(Queue& q, int el) {
    // Essa ação sempre será feita através do fim da fila
    q.set[q.fim] = el;
    
    if (isFull(q)) {
        q.fim = 0;
    }
    else {
        q.fim++;
    }
}

// Desenfileirar um elemento na estrutura
int dequeue(Queue& q) {
    int el = q.set[q.inicio];
    q.inicio++;
    return el;
}

// Mostrar os elementos da fila
void show(Queue& q) {
    for (int i = q.inicio; i < q.fim; i++) {
        cout << q.set[i] << "\t";
    }
}

// Validando se está vazia
// Para essa estrutura linear, INICIO = FIM, representa fila vazia
bool isEmpty(Queue& q) {
    return q.inicio == q.fim;
}

int main() 
{
    // Manipulando estrutura
    Queue queue;    

    init(queue); // Inicializando a estrutura

    enqueue(queue, 1); 
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);
    enqueue(queue, 6);
    enqueue(queue, 7);

    show(queue);

    return 0;
}