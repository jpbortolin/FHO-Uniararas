#include <iostream>

using namespace std;

int buscaBinaria(int v[], int tam, int chave) {
	int e = 0;
	int d = tam - 1;
	while (e <= d) {
		int m = (e + d) / 2;
		if (v[m] == chave) //caso a chave for encontrada!
			return m;
		else if (v[m] < chave) //caso a chave for MAIOR - olhar para a direita
			e = m + 1;
		else //caso a chave for MENOR - olhar para esquerda
			d = m - 1;
	}
	return -1; //não encontrado o elemento
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

	// Adicionar contagem de comparações
	int comparacoes = 0;
	int resultado = -1;
	int e = 0;
	int d = tam - 1;

	while (e <= d) {
		int m = (e + d) / 2;
		comparacoes++;
		if (v[m] == chave) {
			resultado = m;
			break;
		} else if (v[m] < chave)
			e = m + 1;
		else
			d = m - 1;
	}

	if (resultado == -1)
		cout << "Não há elemento encontrado" << endl;
	else
		cout << "Elemento encontrado na posicao: " << resultado << endl;

	cout << "Comparações realizadas: " << comparacoes << endl;

	return 0;
}
