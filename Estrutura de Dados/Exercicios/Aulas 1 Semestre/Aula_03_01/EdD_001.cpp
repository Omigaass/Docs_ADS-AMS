#include <iostream>
using namespace std;

float saldo, valor;
void impressao();

int main()
{

    cout << "Abertuda de Conta\n";
    saldo = 0;

    cout << "Informe o valor do deposito: ";
    cin >> valor;
    saldo = saldo + valor;

    impressao();

    cout << "Informe o valor do saque: ";
    cin >> valor;
    
    if (valor > saldo){ 
        cout << "Saldo insuficiente"; 
    } else { 
        saldo = saldo - valor; 
    }

    impressao();

    return 0;
}

void impressao()
{
    cout << "Saldo: " << saldo << endl;
}