#include <iostream>
#include <cstring>

using namespace std;

// Seu código original aqui (mantido 100%)
int buscaBinaria(int v[], int tam, int chave) {
	int e = 0;
	int d = tam - 1;
	int resultado = -1; // armazena primeira ocorrência

    while (e <= d) {
        int m = (e + d) / 2;
        int cmp = strcmp(v[m], chave);

        if (cmp == 0) {
            resultado = m;  // encontrou a chave
            d = m - 1;      // continua procurando à esquerda
        } else if (cmp < 0) {
            e = m + 1;
        } else {
            d = m - 1;
        }
    }
    return resultado;
}

//Função que executa a recursão da busca!
int buscaBinariaRecursiva(int v[], int e, int d, int chave) {
	if (e > d)
		return -1;
	int m = (e + d) / 2;
	if (v[m] == chave)
		return m;
	else if (v[m] < chave)
		return buscaBinariaRecursiva(v, m + 1, d, chave);
	else
		return buscaBinariaRecursiva(v, e, m-1, chave);
}

//Função inicializadora para facilitar o uso da busca
//binaria
int buscaBinariaInit(int v[], int tam, int chave) {
	return buscaBinariaRecursiva(v, 0, tam-1, chave);
}

int main() {
    char* v[] = {"ana", "bruno", "bruno", "carlos", "daniel"};
    int tam = sizeof(v)/sizeof(v[0]);
    const char* chave = "bruno";

    int pos = buscaBinariaStr(v, tam, chave);

    if (pos == -1)
        cout << "Não há elemento encontrado" << endl;
    else
        cout << "Primeira ocorrência encontrada na posição: " << pos << endl;

    return 0;
}