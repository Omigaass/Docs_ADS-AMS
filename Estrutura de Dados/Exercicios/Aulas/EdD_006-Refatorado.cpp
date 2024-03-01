#include <iostream>
#include <vector> // Incluindo a biblioteca vector para uso posterior
using namespace std;

// Declarando protótipos de funções
void abrir_conta(vector<string> &titulares, vector<float> &saldos); // Recebendo referências aos vetores para que as alterações sejam refletidas fora da função
void saldo_atual();
void deposito();
void saque();

int main()
{
    int opcaoConta;
    vector<string> titulares; // Vetor para armazenar os titulares das contas
    vector<float> saldos; // Vetor para armazenar os saldos das contas

    cout << "Seja bem vindo ao banco\n";   
    cout << "Opcoes de Conta\n 1 - Criar Conta \n 2 - Lista de Contas \n 3 - Abrir Conta \n 4 - Excluir Conta\n 5 - Sair\n";
    cin >> opcaoConta;

    if(opcaoConta == 1){
        abrir_conta(titulares, saldos); // Chamando a função para criar uma conta
    }else if(opcaoConta == 2){

    }else if(opcaoConta == 3){

    }else if(opcaoConta == 4){

    }else if(opcaoConta == 5){

    }
    
    return 0;
}

// Função para criar uma nova conta
void abrir_conta(vector<string> &titulares, vector<float> &saldos) {
    string titular;
    float saldo;

    cout << "Digite o nome do titular da conta: \n";
    cin >> titular;
    titulares.push_back(titular); // Adicionando o titular ao vetor de titulares

    cout << "Digite o valor inicial da conta: \n";
    cin >> saldo;
    saldos.push_back(saldo); // Adicionando o saldo ao vetor de saldos

    cout << "Conta criada com sucesso\n";
}

// Outras funções podem ser implementadas conforme necessário
