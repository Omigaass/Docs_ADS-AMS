/*
5. Elabore um programa que leia uma string qualquer e retorne o seu inverso. Se o usuário entrar, por exemplo, com o string "cristal", o programa retorna "larsirc";
*/

//? Inclui as bibliotecas
#include <iostream>
#include <string>
using namespace std;

//? Função que recebe a string e inverte a ordem de seus elementos
string StringInvertida(string str) {
    string StrInvertida;
    for (int i = str.length() - 1; i >= 0; i--){
        StrInvertida += str[i];
    }
    return StrInvertida;
}

//? Função principal
int main()
{
    //? Declaração da variável
    string inputString;
    //? Leitura da string
    cout << "Digite uma string: ";
    getline(cin, inputString);
    //? Imprime a string invertida
    cout << "String invertida: " << StringInvertida(inputString);
    return 0;
}

/*
%Exemplo de funcionamento do código:

@System.: Digite uma string: 
?Client.: Abacaxi
@System.: String invertida: ixacabA
*/

/*
*código completo sem comentários:
    #include <iostream>
    #include <string>
    using namespace std;

    string StringInvertida(string str) {
        string StrInvertida;
        for (int i = str.length() - 1; i >= 0; i--){
            StrInvertida += str[i];
        }
        return StrInvertida;
    }

    int main()
    {
        string inputString;
        cout << "Digite uma string: ";
        getline(cin, inputString);
        cout << "String invertida: " << StringInvertida(inputString);
        return 0;
    }
*/
