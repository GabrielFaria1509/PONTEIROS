#include <iostream> // Inclui a biblioteca de entrada e saída padrão
using namespace std;

int main() {
    int y;       // Declara uma variável inteira 'y'
    int *p;      // Declara um ponteiro 'p' para armazenar o endereço de uma variável do tipo int
    int x;       // Declara outra variável inteira 'x'

    y = 0;       // Inicializa 'y' com 0
    p = &y;      // 'p' recebe o endereço de memória de 'y'
                 // Agora 'p' aponta para 'y', ou seja, qualquer alteração em '*p' afetará 'y'

    x = *p;      // 'x' recebe o valor armazenado no endereço apontado por 'p'
                 // Neste caso, 'x' receberá o valor de 'y' (que é 0)

    x = 4;       // Atribui 4 a 'x'
                 // Esta linha não altera o valor de 'y' porque 'x' e 'y' são variáveis independentes

    (*p)++;      // Incrementa o valor da variável apontada por 'p' em 1
                 // Como 'p' aponta para 'y', esta linha aumenta o valor de 'y' de 0 para 1

    x--;         // Decrementa 'x' em 1, ou seja, 'x' passa a valer 3

    (*p) += x;   // Incrementa o valor da variável apontada por 'p' pelo valor de 'x'
                 // Como 'p' ainda aponta para 'y', esta linha soma 'x' a 'y' (1 + 3 = 4)

    cout << "y = " << y << endl; // Exibe o valor de 'y' (4) no console

    return 0; // Finaliza o programa
}
