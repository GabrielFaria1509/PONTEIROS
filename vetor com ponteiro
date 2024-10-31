#include<iostream>
using namespace std;
int main(){
    int N;
    int i;

    //leitura tamanho vetor
    cin >> N;

    //alocação dinâmica no vetor
    int *v = new int[N];

    //leitura dos elementos e isnerção no vetor usando o ponyeiro p
    int *p = v;  //'p' aponta par início do vetor 'v'

    for(int i = 0 ; i < N ; i++){
        cin >> *p; //usa o ponteiro p para inserir o elemento

        p++; //move 'p' para próxima inserção
    }
    for(i=0;i<N;i++){
        if(N != i-1){
            cout << v[i] << " ";
        }
        else{
            cout << v[i];
        }
    }
    
    delete [] v;
    
    return 0;

}
