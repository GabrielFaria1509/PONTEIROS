#include <iostream>
using namespace std;

struct Aluno {
    float notas[4];
    float media;
};

int main() {
    int n;
    cout << "Digite o número de alunos: ";
    cin >> n;

    Aluno* alunos = new Aluno[n];  // alocação dinâmica para o vetor de alunos

    // Leitura das notas e cálculo das médias
    for (int i = 0; i < n; i++) {
        float soma = 0;
        cout << "Digite as 4 notas do aluno " << i + 1 << ":" << endl;
        for (int j = 0; j < 4; j++) {
            cin >> alunos[i].notas[j];
            soma += alunos[i].notas[j];  // acumula a soma das notas
        }
        alunos[i].media = soma / 4.0;  // calcula a média
    }

    // Exibe as médias dos alunos
    for (int i = 0; i < n; i++) {
        cout << "Média do aluno " << i + 1 << ": " << alunos[i].media << endl;
    }

    delete[] alunos;  // libera a memória alocada para o vetor de alunos

    return 0;
}
