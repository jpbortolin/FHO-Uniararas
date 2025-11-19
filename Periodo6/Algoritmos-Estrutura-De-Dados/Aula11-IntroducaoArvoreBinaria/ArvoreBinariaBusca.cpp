#include <iostream>
using namespace std;

//DEFINIÇÃO DA ESTRUTURA NÓ!
typedef struct No {
	int conteudo;
	No* esq;
	No* dir;
};

//Definindo a raiz
//Inicialmente vazia!
No* raiz = NULL;

//Vamos tratar a inserção dos elementos
//seguindo as regras: Se menor ou igual ao Nó -> esq
//                    Se maior -> dir
void inserir(int conteudo) {
	
	//Criando o nó
	No* el = (No*)malloc(sizeof(No));
	el->conteudo = conteudo;
	el->dir = NULL;
	el->esq = NULL;
	
	//Caso trivial 
	if (raiz == NULL) {
		raiz = el;
	}
	else {
		//Auxilia na navegação da estrutura
		No* aux = raiz;
		//Loop para iterar na árvore
		while (true) {
			//situação da sub arvore esquerda
			if (conteudo <= aux->conteudo) {
				if (aux->esq == NULL) {
					aux->esq = el;
					return;
				}
				aux = aux->esq;
			}
			else {
				if (aux->dir == NULL) {
					aux->dir = el;
					return;
				}
				aux = aux->dir;
			}
		}
	}
}

No* buscar(int conteudo) {
	//Precisamos navegar na estrutura
	No* aux = raiz;

	//para cada nó, vamos tratar as condições
	while (true) {
		if (aux->conteudo == conteudo)
			return aux;
		//Analisando a subarvore esquerda!
		else if (conteudo <= aux->conteudo) {
			if (aux->esq == NULL)
				return NULL;//Não há elemento na estrutura!
			aux = aux->esq; // Caso haja nó a esquerda, navegar
		}
		else { //Analisando a subarvore direita!
			if (aux->dir == NULL)
				return NULL;
			aux = aux->dir;
		}
	}
}

//Esse percurso visita os elementos de forma a obtê-los ordenadamente (In-Ordem)
void inOrdem(No* raiz) {
    if (raiz != NULL) {
        inOrdem(raiz->esq); //Visita o nó a esquerda da raiz
        cout << raiz->conteudo << "\t"; //Imprime o contéudo da raiz OU executa a ação de interesse
        inOrdem(raiz->dir); //Visita o nó a direita da raiz
    }
}

void preOrdem(No* raiz) {
    if (raiz != NULL) {
        cout << raiz->conteudo << "\t"; //Imprime o contéudo da raiz OU executa a ação de interesse
        preOrdem(raiz->esq); //Visita o nó a esquerda da raiz
        preOrdem(raiz->dir); //Visita o nó a direita da raiz
    }
}

void posOrdem(No* raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->esq); //Visita o nó a esquerda da raiz
        posOrdem(raiz->dir); //Visita o nó a direita da raiz
        cout << raiz->conteudo << "\t"; //Imprime o contéudo da raiz OU executa a ação de interesse
    }
}

//Dado um elemento, iremos verificar se ele está na árvore, para então removê-lo

/*
	1 - Nó não tem filho
	2 - Nó tem um filho
	3 - Nó tem dois filhos
*/
void remover(int elemento) {

	No* pai = NULL; //Ajudará na promoção dos nós sucessores do nó removido
	No* aux = raiz; //Ajudará na navegação dos nós!

	//Precisamos encontrar o elemento
	while (aux != NULL && elemento != aux->conteudo) {
		//Salvo o elemento antecessor (pai)
		pai = aux;
		if (elemento <= aux->conteudo) {
			aux = aux->esq;
		}
		else {
			aux = aux->dir;
		}
	}

	//Se o elemento existe
	if (aux == NULL) {
		cout << "Não há elemento";
		return;
	}

	No* removido = aux;

	//1º caso: Nó é folha (não tem sucessor)
	if (removido->esq == NULL && removido->dir == NULL) {
		//Tratando a remoção, caso o nó for a RAIZ e sem sucessor.
		if (pai == NULL) {
			raiz = NULL;
		}
		else if (pai->esq == removido) {
			pai->esq = NULL; //Remove a referência para o elemento da ESQUERDA a ser removido!
		}
		else {
			pai->dir = NULL; //Remove a referência para o elemento da DIREITA a ser removido!
		}
		free(removido); //Deleta ele da memória - libera o espaço de memória alocado
		return;
	}

	//2º caso: O nó a ser removido tem um filho
	if (removido->esq == NULL || removido->dir == NULL) {
		//Verificando qual o sucessor a ser promovido!
		No* promovido = NULL;
		if (removido->esq != NULL) {
			promovido = removido->esq;
		}
		else {
			promovido = removido->dir;
		}

		//Verifico qual será o lado (sub-árvore) correto a ter um filho promovido do nó removido
		if(pai->esq == removido) {
			pai->esq = promovido;
		}
		else {
			pai->dir = promovido;
		}

		free(removido);
		return;
	}

	//3º caso: O nó a ser removido tem dois filhos
	No* paiSucessor = removido;
	No* sucessor = removido->dir; //Vamos capturar o menor elemento da sub-árvore a DIREITA

	//Percorrendo a sub-árvore a direita
	while (sucessor->esq != NULL) {
		paiSucessor = sucessor;
		sucessor = sucessor->esq;
	}

	//Alterando o valor para o sucessor
	removido->conteudo = sucessor->conteudo;

	//Tratando o filho direito do sucessor
	//Atualizo as referências do pai do sucessor
	if (paiSucessor == removido) {
		paiSucessor->dir = sucessor->dir;
	}
	else {
		paiSucessor->esq = sucessor->dir;
	}

	//Uma vez que o sucessor foi promovido para o lugar do removido, ele não precisa estar mais na estrutura
	free(sucessor);
	return
}

int main()
{
	//Fazendo uso da inserção de elementos na árvore binária de busca
	inserir(12);
	inserir(32);
	inserir(9);
	inserir(4);
	inserir(22);
	inserir(13);
    inserir(51);
    inserir(7);
	
	//a chamada da função busca retorna o nó
	No* retorno = buscar(5);

	if (retorno != NULL) {
		cout << "Valor encontrado!" << endl;
		cout << "No a direita do valor encontrado:" << retorno->dir->conteudo << endl;
		cout << "No a esquerda do valor encontrado:" << retorno->esq->conteudo << endl;
		cout << "No a direita da esquerda do valor enc:" << retorno->esq->dir->conteudo << endl;
	}
	else
		cout << "Valor inexistente!" << endl;
	
    cout << endl;
    cout << "Executando o percurso inOrdem" << endl;
    inOrdem(raiz);

    cout << endl;
    cout << "Executando o percurso preOrdem" << endl;
    preOrdem(raiz);

    cout << endl;
    cout << "Executando o percurso posOrdem" << endl;
    posOrdem(raiz);

	cout << endl;
	remover(7);

	return 0;
}