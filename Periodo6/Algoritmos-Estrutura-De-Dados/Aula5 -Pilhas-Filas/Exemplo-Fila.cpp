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

// Enfileirar um elemento na estrutura (Inserindo elemento na fileira)
void enqueue(Queue& q, int el) {
    // Essa ação sempre será feita através do fim da fila
    q.set[q.fim] = el;
    q.fim++;
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
    enqueue(queue, 10);
    enqueue(queue, 18);
    enqueue(queue, 5);

    show(queue);

    // Desenfileirando
    cout << "\n";
    cout << "Atendido: " << dequeue(queue) << "\n";
    cout << "Atendido: " << dequeue(queue) << "\n";
    cout << "Atendido: " << dequeue(queue) << "\n";

    show(queue);

    return 0;
}