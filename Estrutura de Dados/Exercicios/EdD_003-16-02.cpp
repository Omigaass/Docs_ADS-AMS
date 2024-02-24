
#include <iostream>
using namespace std;
int main()
{
    float notas[5];
    int i;

    cout << "informe 5 valores reais: \n";
    for( i=0 ; i<5 ; i++ ){
        cin >> notas[i];
    }
    cout << "exibindo valores: \n";
    for( i=0 ; i<5 ; i++ ){
        cout << "notas[" << i << "]=" << notas[i] << endl;
    }

    return 0;
}