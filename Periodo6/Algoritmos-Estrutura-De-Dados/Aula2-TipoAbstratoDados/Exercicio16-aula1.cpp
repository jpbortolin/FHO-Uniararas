#include <iostream>

/*
Construa uma estrutura aluno com nome, ra e curso. Leia essas informações para 5 alunos,
armazenando em um vetor dessa estrutura. Depois, exiba as informações na tela.
*/

using namespace std;

// Definindo a estrutura (registro)
typedef struct {
    char curso[50];
    int ra;
    char nome[50];
} Aluno;

int const tamanho = 5;

void preencherLista(Aluno alunos[tamanho]) {
    cout << "Preencha as informações dos alunos:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Aluno: ";
        cin >> alunos[i].nome;
        cout << "RA: ";
        cin >> alunos[i].ra;
        cout << "Curso: ";
        cin >> alunos[i].curso;

        getchar(); // Limpa o buffer do teclado após a leitura do RA
    }
}

void exibirLista(Aluno alunos[tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "RA: " << alunos[i].ra << endl;
        cout << "Curso: " << alunos[i].curso << endl;
    }
}

int main()
{
    // Lista dos alunos
    Aluno alunos[tamanho]; 

    // Realizamos as chamadas das funções
    preencherLista(alunos);
    exibirLista(alunos);

    return 0;
}
