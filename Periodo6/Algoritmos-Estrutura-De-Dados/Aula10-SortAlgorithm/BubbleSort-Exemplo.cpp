#include <iostream>

using namespace std;

void bubbleSort(int v[], int tam) {
    /* 
    Para cada elemento atual, uma comparação com o
    próximo elemento é feita!
    */

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temporario = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temporario;
            }
        }
    }
}

int main () {

    int v[] = {32, 3, 4, 4, 5, 1, 0, 12};
    int tam = sizeof(v) / sizeof(v[0]);

    // Após a ordenação, ele seja exibido
    for (int i = 0; i < tam; i++) {
        cout << v[i] << "\t";
    }

    return 0;
} 