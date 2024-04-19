#include <iostream>
using namespace std;

int multiplicacaoRecursiva(int a, int b){
    if (a == 0) return 0;
    if (a == 1) return b;
    return b + multiplicacaoRecursiva(a-1, b);
}

int main(){
    cout << "Hello World!" << endl;

    int a, b;

    cout << "Digite dois valores a serem multiplicados: " << endl;
    cin >> a >> b;

    cout << "Multiplicacao: " << multiplicacaoRecursiva(a, b);
}