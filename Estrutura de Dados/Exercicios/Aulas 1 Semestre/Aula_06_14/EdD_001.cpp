#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
    map<string, string> hash;
    // Primeiro tipo é o valor da chave
    // segundo é o tipo do valor que será apresentado

    hash.insert({"MINAS GERAIS", "BELO HORIZONTE"});
    hash.insert({"SANTA CATARINA", "FLORIANOPOLIS"});
    hash.insert({"PARANA", "CURITIBA"});
    hash.insert({"RIO GRANDE DO SUL", "PORTO ALEGRE"});
    hash.insert({"BAHIA", "SALVADOR"});
    hash.insert({"RIO GRANDE DO NORTE", "NATAL"});
    hash.insert({"ESPIRITO SANTO", "VITORIA"});
    hash.insert({"MARANHAO", "SAO LUIZ"});
    hash.insert({"PARA", "BELEM"});
    hash.insert({"PERNAMBUCO", "RECIFE"});

    char estado[100];
    cout << "digite o estado: ";
    gets(estado);
    cout << "Capital: " << hash[estado];
}