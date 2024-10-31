#include<iostream>
using namespace std;
int main(){
    int N;

    //leitura tamanho vetor
    cin >> N;

    //alocação dinâmica no vetor
    int *v = new int[N];

    //leitura dos elementos e isnerção no vetor usando o ponyeiro p
    int *p = v;  //'p' aponta par início do vetor 'v'

    for(int i = 0 ; i < N ; i++){
        cout << "Digite elementos" << i + 1 << ": ";

        cin >> *p; //usa o ponteiro p para inserir o elemento

        p++; //move 'p' para próxima inserção
    }

    delete [] v;

}