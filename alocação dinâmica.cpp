#include<iostream>
using namespace std;
int main(){
    int *p = NULL; //ponteiro para int  , inicialmente nulo
    int n;

    cout << "Digite o tamanho do vetor ";

    cin >> n;

    p = new int[n]; //aloca a memória para o vetor de tamanho n

    // agora você pode usar p[i] para acessar os elementos

    // quando terminar libere a memória

    delete[] p;
   return 0;


}
