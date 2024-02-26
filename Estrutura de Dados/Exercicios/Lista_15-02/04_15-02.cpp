/*
4. Elabore um programa em C que armazena os n (informado pelo usuário) lançamentos
de um dado em um vetor e os analisa, informando se é uma sequência válida ou não.
A sequência é considerada válida se nenhum dos valores sorteados no dado aparece
mais de dois lançamentos consecutivos. 
*/

//? Inclui as bibliotecas
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    int NumberRolls;
    bool validSeq;

    while (true) {
        std::cout << "Digite um valor inteiro para quantidade de lancamentos: ";
        if (std::cin >> NumberRolls) {
            break;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Valor invalido. Por favor, digite um valor inteiro.\n";
        }
    }

    std::vector<int> RollDice(NumberRolls);

    cout << "Digite os valores dos lancamentos: " << endl;

    for (size_t i = 0; i < NumberRolls; i++)
    {
        cin >> RollDice[i];
    }
    
    for (size_t i = 0; i < NumberRolls; i++)
    {
        int x = RollDice[i];
        if (x == RollDice[i + 1] && x == RollDice[i + 2])
        {
            validSeq = false;
        } else {
            validSeq = true;
        }
    }
    
    
    
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
