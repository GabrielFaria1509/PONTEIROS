#include <iostream>
using namespace std;
void troca(int *pi , int *pj){   //função //declaração dos ponteiros
    int temp;             //var auxiliar
    temp = *pi;      //aux recebe para quem ponteiro pi aponta(o i)
    *pi = *pj;      //ponteiro pi recebe quem pi aponta (o  j)
    *pj = temp;    //ponteiro pj recebe temp que tem o valor que pi aponta originalmente
}
int main(){
    int i;
    int j;

    cin >> i >> j;

    troca(&i,&j);      // uso do "e comercial" para indicar quem os ponteiros apontam de início

    cout << i << " " << j << endl;

    return 0;
}
