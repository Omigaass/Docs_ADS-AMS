#include <iostream>
using namespace std;

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(){
    int input;

    cout << "Forneca um valor: ";
    cin >> input;
    cout << "Valor do fatorial de " << input << ": " << endl; 
    cout << fatorial(input);
}