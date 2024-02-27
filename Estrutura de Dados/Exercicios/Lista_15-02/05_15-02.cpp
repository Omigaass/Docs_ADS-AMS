/*

*/

//? Inclui as bibliotecas
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

/*
%Exemplo de funcionamento do código:

@System.: 
?Client.: 
*/

/*
*código completo sem comentários:

*/
