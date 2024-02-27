/*
6. Elabore um programa que leia o nome e sobrenome de uma pessoa separadamente. O programa deve juntar as duas strings em uma única e por fim informar na tela: A nova string, o número de caracteres, a primeira e a ùtilma letra.
*/

//? Inclui as bibliotecas
#include <iostream>
using namespace std;

int main()
{
    string Nome, Sobrenome;
    cout << "Nome: ";
    getline(cin, Nome);
    cout << "Sobrenome: ";
    getline(cin, Sobrenome);

    string NomeCompleto = Nome + " " + Sobrenome;

    cout << "Nome Completo: " << NomeCompleto << endl;
    cout << "Numero de Caracteres: " << NomeCompleto.length() << endl;
    cout << "Primeira Letra: " << NomeCompleto[0] << endl;
    cout << "Ultima Letra: " << NomeCompleto[NomeCompleto.length() - 1] << endl;
}

/*
%Exemplo de funcionamento do código:

@System.: Nome: 
?Client.: Miguel
@System.: Sobrenome: 
?Client.: Antonio
@System.: Nome Completo: Miguel Antonio
@System.: Numero de Caracteres: 14
@System.: Primeira Letra: M
@System.: Ultima Letra: o
*/

/*
*código completo sem comentários:
    #include <iostream>
    using namespace std;

    int main()
    {
        string Nome, Sobrenome;
        cout << "Nome: ";
        getline(cin, Nome);
        cout << "Sobrenome: ";
        getline(cin, Sobrenome);

        string NomeCompleto = Nome + " " + Sobrenome;

        cout << "Nome Completo: " << NomeCompleto << endl;
        cout << "Numero de Caracteres: " << NomeCompleto.length() << endl;
        cout << "Primeira Letra: " << NomeCompleto[0] << endl;
        cout << "Ultima Letra: " << NomeCompleto[NomeCompleto.length() - 1] << endl;
    }
*/
