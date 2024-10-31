#include<iostream>
using namespace std;
void troca (int *pi , int *pj){
    int temp;
    temp = *pi;
    *pi = *pj;
    *pj = temp;
}
int main(){
    int i = 3;
    int j = 5;

    troca(&i , &j);

    cout << i << " " << j << endl;

    return 0;
}