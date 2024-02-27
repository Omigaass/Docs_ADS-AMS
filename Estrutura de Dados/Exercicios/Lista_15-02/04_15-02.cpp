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
    //?Declaro a variável que representa a quantidade de lançamentos
    int NumberRolls;

    //?Essa estrutura vai verificar o tipo da entrada do usuário e caso não seja um número inteiro vai se repetir até que a entrada esteja correta
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

    //?Declaro o vetor que vai receber os valores dos lançamentos
    std::vector<int> RollDice(NumberRolls);

    cout << "Digite os valores dos lancamentos: " << endl;

    //?Baseado na quantidade de lançamentos, armazeno os valores de entrada do usuário
    for (int i = 0; i < NumberRolls; i++)
    {
        cin >> RollDice[i];
    }
    
    //?Verifico se a sequência é valida, se houverem mais que 2 valores iguais consecutivos é considerada invalida
    for (int i = 0; i < NumberRolls; i++)
    {
        int x = RollDice[i];
        if (x == RollDice[i + 1] && x == RollDice[i + 2])
        {
            cout << "Sequencia Invalida, o valor '" << x << "' foi repetido mais de 2 vezes consecutivas" << endl; 
            break;
        }
        if (x == NumberRolls) { cout << "Sequencia valida" << endl; }
    }
    return 0;
}

/*
%Exemplo de funcionamento do código:

@System.: 
?Client.: 

@System.:  Digite os valores dos lancamentos: 
?Client.:  1
?Client.:  1
?Client.:  1
?Client.:  2
?Client.:  3
?Client.:  4
@System.:  Sequencia Invalida, o valor '1' foi repetido mais de 2 vezes consecutivas
*/

/*
*código completo sem comentários:

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    int NumberRolls;

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

    for (int i = 0; i < NumberRolls; i++)
    {
        cin >> RollDice[i];
    }
    
    for (int i = 0; i < NumberRolls; i++)
    {
        int x = RollDice[i];
        if (x == RollDice[i + 1] && x == RollDice[i + 2])
        {
            cout << "Sequencia Invalida, o valor '" << x << "' foi repetido mais de 2 vezes consecutivas" << endl; 
            break;
        }
        if (x == NumberRolls) { cout << "Sequencia valida" << endl; }
    }
    return 0;
}
*/
