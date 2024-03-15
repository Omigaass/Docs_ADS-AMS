#include <iostream>
using namespace std;

int x1, x2, res;
void calculo();

int main()
{
    cout << "Digite o valor de x1:\n";
    cin >> x1;
    cout << "Digite o valor de x2:\n";
    cin >> x2;

    calculo();

    return 0;
}

void calculo(){
    res = x1 + x2;
    if (res % 2 == 0){
        cout << "par - 1\n";
    }
    else{
        cout << "impar - 0\n";
    }
}