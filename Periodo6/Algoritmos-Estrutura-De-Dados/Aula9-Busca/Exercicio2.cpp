#include <iostream>

using namespace std;

int buscaBinaria(int v[], int tam, int chave) {
	int e = 0;
	int d = tam - 1;
    int resultado = -1; // Armazena a primeira ocorrência
    
	while (e <= d) {
		int m = (e + d) / 2;
		if (v[m] == chave) {
			resultado = m; // armazenar posição
			d = m - 1;     // continuar procurando à esquerda
		} else if (v[m] < chave)
			e = m + 1;
		else
			d = m - 1;
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
	int v[] = { 1, 2, 3, 5, 10, 23, 34, 81, 90 };
	int tam = sizeof(v)/sizeof(int);
	int chave = 5;
    
    int resultado = buscaBinaria(v, tam, chave);

	if (resultado == -1)
		cout << "Não há elemento encontrado" << endl;
	else
		cout << "Elemento encontrado na posicao: " << resultado << endl;

	cout << "Comparações realizadas: " << comparacoes << endl;

	return 0;
}