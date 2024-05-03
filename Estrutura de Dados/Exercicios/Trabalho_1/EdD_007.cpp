#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct {
    char nome[100], dep[80], idade[3], sex[1], casa[3]; 
    float sal;
} Funcionario;

int main() {
    Funcionario reg[2];
    int i;
    cout << "Preencha as fichas cadastrais...\n";
    for (i = 0; i < 3; i++) {
        cout << "Nome: ";
        fflush(stdin);
        gets(reg[i].nome);

        cout << "Idade: ";
        fflush(stdin);
        gets(reg[i].idade);

        cout << "Sexo (M/F): ";
        fflush(stdin);
        gets(reg[i].sex);

        cout << "Anos de casa: ";
        fflush(stdin);
        gets(reg[i].casa);

        cout << "Departamento: ";
        fflush(stdin);
        gets(reg[i].dep);

        cout << "Salario: ";
        cin >> reg[i].sal;
        cout << endl;
    }
    
    char chave[80];
    cout << "Informe o departamento para buscar funcionarios: \n";
    fflush(stdin);
    gets(chave);
    
    cout << "Funcionarios no departamento " << chave << ":\n";
    int contador = 0;
    int contadorFeminino = 0;
    for (i = 0; i < 3; i++) {
        if (strcmp(chave, reg[i].dep) == 0) {
            cout << "Nome: " << reg[i].nome << endl;
            contador++; 
        }
            if (strcmp(reg[i].sex, "F") == true) {
                contadorFeminino++;
            }
    }
    
    if (contador == 0)
        cout << "Nenhum funcionario encontrado no departamento " << chave << endl;
    else {
        cout << "Total de funcionarios no departamento " << chave << ": " << contador << endl;
        cout << "Número de funcionárias do sexo feminino: " << contadorFeminino << endl;
    }

    return 0;
}