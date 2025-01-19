#include <iostream>
using namespace std;


int main(){
  
    int a = 3;
    int b = 5;
    int *d = &a; // obtém o endereço de a
    int *q = &b; // obtém o endereço de b
    int c = *d + *q;

    cout << "Resultado da soma: " << c << endl;
  
  
 return 0;
}
