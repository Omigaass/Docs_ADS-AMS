#include <iostream>
using namespace std;

void histograma(int quantAlunos){
    int notaAluno, i, A = 0, B = 0, C = 0, D = 0, E = 0;
    
    for (i = 0; i < quantAlunos; i++){
        cout << i + 1 << " aluno: ";
        cin >> notaAluno;
        if(notaAluno >= 0 && notaAluno < 3){
            E += 1;
        } else if(notaAluno >= 3 && notaAluno < 5){
            D += 1;
        } else if(notaAluno >= 5 && notaAluno < 7){
            C += 1;
        } else if(notaAluno >= 7 && notaAluno < 9){
            B += 1;
        } else if(notaAluno >= 9 && notaAluno <= 10){
            A += 1;
        }
    }

    cout << "\nA: ";
    for (i = 0; i < A; i++){
        cout << "*";
    }
    cout << "\nB: ";
    for (i = 0; i < B; i++){
        cout << "*";
    }
    cout << "\nC: ";
    for (i = 0; i < C; i++){
        cout << "*";
    }
    cout << "\nD: ";
    for (i = 0; i < D; i++){
        cout << "*";
    }
    cout << "\nE: ";
    for (i = 0; i < E; i++){
        cout << "*";
    }
}

int main()
{
    int quantAlunos;

    cout << "Hello World!" << endl;
    cout << "Insira a quantidade de alunos: " << endl;
    cin >> quantAlunos;

    histograma(quantAlunos);
    return 0;
}
