#include <iostream>

using namespace std;

void selectionSort(int v[], int tam) {
    
    // Necessário percorrer todos os elementos
    for (int i = 0; i < tam; i++) {
        int min = i;

        /*
        Precisamos percorrer o restante do vetor
        para buscar um possível menor elemento
        */
        for(int j = i + 1; j < tam; j++) {
            // Será que tem um elemento menor?
            if (v[j] < v[min]) {
                min = j;
            }
        }
        /*
        Se o elemento analisado atual for diferente
        do menor elemento encontrado, realizamos a troca!

        *LEMBRANDO: estamos avaliando os ÍNDICES dos elementos
        */
        if (min != i) {
            swap(v[i], v[min]);
        }
    }

int main () {

    int v[] = {32, 3, 4, 4, 5, 1, 0, 12};
    int tam = sizeof(v) / sizeof(v[0]);

    selectionSort(v, tam);

    // Após a ordenação, ele seja exibido
    for (int i = 0; i < tam; i++) {
        cout << v[i] << "\t";
    }

    return 0;
} 