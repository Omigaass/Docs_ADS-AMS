#include <iostream>
using namespace std;

int mult(int a, int b){
    if(a==0) return 0; 
    if (a==1) return b;
    
    return b + mult(a-1,b);
}

int main(){
    int a, b;
    cout << "Insira os valores de a e b: ";
    cin >> a >> b;
    cout << mult(a, b);
}