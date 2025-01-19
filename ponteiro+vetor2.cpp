#include<iostream>
#include<iomanip>
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
    float soma = 0;

    for(int i = 0 ; i < N ; i++){
        cin >> *p; //usa o ponteiro p para inserir o elemento
         soma += *p;   //soma o valor apontado por p
        p++; //move 'p' para próxima inserção
        
        
        
    }
    float media = soma/N;
    
    cout << fixed << setprecision(2);
    cout << media << endl;
    
    
    delete [] v;
    
    return 0;

}
