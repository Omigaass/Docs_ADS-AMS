#include <iostream>
using namespace std;

float saldo;
void abrir_conta();
void saldo_atual();
void deposito();
void saque();

int main()
{   
    cout << "Abertuda de Conta\n";
    abrir_conta();
    deposito();
    saldo_atual();
    saque();
    saldo_atual();

    return 0;
}

void abrir_conta(){
    saldo = 0;    
}

void saldo_atual(){
    cout << "Seu saldo atual é: " << saldo << endl;
}

void deposito(){
    float valor;
    cout << "Qual valor deseja depositar?" << endl;
    cin >> valor;
    saldo = saldo + valor;
}

void saque(){
    float valor;
    cout << "Qual valor deseja sacar?" << endl;
    cin >> valor;
    saldo = saldo - valor;
}