#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ContaBancaria {
private:
    string nomeCliente;
    double saldoCliente;

public:
    ContaBancaria(string nome, double saldoInicial) {
        nomeCliente = nome;
        saldoCliente = saldoInicial;
    }

    void depositar(double valor) {
        saldoCliente += valor;
    }

    void sacar(double valor) {
        if (valor <= saldoCliente) {
            saldoCliente -= valor;
        } else {
            cout << "Saldo insuficiente." << endl;
        }
    }

    void imprimirInformacoes() {
        cout << "Cliente: " << nomeCliente << endl;
        cout << "Saldo: " << saldoCliente << endl;
    }
    
    string getNomeCliente() {
        return nomeCliente;
    }

    void setSaldo(double novoSaldo) {
        saldoCliente = novoSaldo;
    }
};

int main() {
    vector<ContaBancaria> contas;
    int opcaoConta, numContas, QuantContas = 0; 

    while (true) {
        system("cls"); 

        cout << "Seja bem vindo ao banco\n";
        cout << "Opcoes de Conta\n 1 - Criar Conta \n 2 - Lista de Contas \n 3 - Editar Conta \n 4 - Excluir Conta\n 5 - Sair\n";
        cin >> opcaoConta;

        switch (opcaoConta) {
            case 1: {
                cout << "Quantas contas deseja criar? ";
                cin >> numContas;

                for (int i = 0; i < numContas; ++i) {
                    string nome;
                    double saldoInicial;
                    cout << "\nDigite o nome do cliente da conta " << i + 1 << ": ";
                    cin >> nome;
                    cout << "Digite o saldo inicial da conta " << i + 1 << ": ";
                    cin >> saldoInicial;

                    ContaBancaria novaConta(nome, saldoInicial);
                    contas.push_back(novaConta);
                    QuantContas++;
                }
                break;
            }
            case 2:
                for (size_t i = 0; i < contas.size(); ++i) {
                    cout << "\nInformacoes da conta " << i + 1 << ":\n";
                    contas[i].imprimirInformacoes();
                }
                break;
            case 3: {
                string nomeEdicao;
                cout << "Digite o nome da conta que deseja editar:" << endl;
                cin >> nomeEdicao;

                bool contaEncontrada = false;
                for (size_t i = 0; i < contas.size(); ++i) {
                    if (contas[i].getNomeCliente() == nomeEdicao) {
                        double novoSaldo;
                        cout << "Digite o novo saldo para a conta de " << nomeEdicao << ": ";
                        cin >> novoSaldo;
                        contas[i].setSaldo(novoSaldo);
                        contaEncontrada = true;
                        cout << "Conta editada com sucesso!" << endl;
                        break;
                    }
                }
                if (!contaEncontrada) {
                    cout << "Conta não encontrada." << endl;
                }
                break;
            }
            case 4: {
                string nomeExclusao;
                cout << "Digite o nome da conta que deseja excluir." << endl;
                cin >> nomeExclusao;

                bool contaEncontrada = false;
                for (size_t i = 0; i < contas.size(); ++i) {
                    if (contas[i].getNomeCliente() == nomeExclusao) {
                        for (size_t j = i; j < contas.size() - 1; ++j) {
                            contas[j] = contas[j + 1];
                        }
                        contas.pop_back();
                        contaEncontrada = true;
                        cout << "\nConta removida com sucesso!" << endl;
                        break;
                    }
                }
                if (!contaEncontrada) {
                    cout << "Conta não encontrada." << endl;
                }
                break;
            }
            case 5:
                cout << "Saindo do programa..." << endl;
                return 0;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }

        cout << "\nPressione ENTER para continuar...";
        cin.ignore();
        cin.get();
    }

    return 0;
}