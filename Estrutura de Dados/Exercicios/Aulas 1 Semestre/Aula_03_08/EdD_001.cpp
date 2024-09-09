#include <iostream>
using namespace std;

// Classe de nome "Conta"
class Conta{
    // Declaração de atributos da classe
    private: double saldo;

    // Método construtor
    public: Conta(){
        saldo = 0;
    }

    // Métodos da classe, funções que podem ser chamadas a partir da classe
    public: void saldo_atual(){
        cout << "saldo atual R$" << saldo << endl; 
    }

    public: void depositar(){
        cout << "informe o valor de deposito: ";
        double valor;
        cin >> valor;
        saldo += valor;
    }

    public: void sacar(){
        cout << "informe o valor de saque: ";
        double valor;
        cin >> valor;
        if (valor > saldo){
            cout << "Saldo insuficiente" << endl;
        } else {
            saldo -= valor;
        }
    }
};

int main()
{

    // Cria uma nova instância da classe (objeto)
    Conta Andre;
    cout << "Abrindo a conta do Andre\n";
    // Chama os métodos da classe
    Andre.depositar();
    Andre.saldo_atual();
    Andre.sacar();
    Andre.saldo_atual();

    // Cria uma nova instância da classe (objeto)
    Conta Ana;
    cout << "Abrindo a conta da Ana\n";
    // Chama os métodos da classe
    Ana.depositar();
    Ana.saldo_atual();

    return 0;
}
