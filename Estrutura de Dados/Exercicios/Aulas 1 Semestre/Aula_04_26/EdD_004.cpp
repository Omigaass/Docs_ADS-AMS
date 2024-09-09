#include <iostream>
#include <string.h>
using namespace std;

typedef struct {
    char nome[80], departamento[80];
    float salario;
}   Funcionario;

int main(){
    Funcionario registro[3];
    int i;

    cout << "Preencha a informacao dos funcionarios: " << endl;
    for(i = 0; i < 3; i++){
        cout << "Nome: ";
        fflush(stdin);
        gets(registro[i].nome);
        cout << "Departamento: ";
        fflush(stdin);
        gets(registro[i].departamento);
        cout << "Salario: ";
        cin >> registro[i].salario;
    }

    char chave[80];
    cout << "Forneca o nome do funcionário que deseja pesquisar: ";
    fflush(stdin);
    gets(chave);

    for(i = 0; i < 3; i++){
        if(strcmp(chave, registro[i].nome) == 0){
            cout << "Nome: " << registro[i].nome << endl;
            cout << "Departamento: " << registro[i].departamento << endl;
            cout << "Salario: " << registro[i].salario << endl;
            break;
        }
    }
    if (i == 3){
        cout << "Funcionário nao encontrado." << endl;
    }
}
