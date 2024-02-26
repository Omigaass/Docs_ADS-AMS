/*   1. Crie um vetor com 10 elementos, escolhidos aleatoriamente utilizando a função rand()
variando no intervalo [-20,20], e faça o que se pede:

a. Informe para cada elemento do vetor se ele é par ou impar.
b. Determine o maior e menor elemento do vetor e as posições em que ocorrem.
c. Calcule a soma de todos os elementos do vetor.
d. Calcule a soma de todos os elementos positivos de um vetor.
e. Verifique se um valor digitado pelo usuário é um elemento do vetor. Se sim, informe a posição em que o elemento ocorre.
f. Crie um segundo vetor, com os elementos gerados aleatoriamente no mesmo intervalo de valores [-20,20] e informe os elementos que aparecem nos dois vetores.   

*/

//? Bibliotecas utilizadas no programa
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //? função que permite a geração de valores aleatórios a cada execução de código.
    //? Ela cria uma semente nova para o gerador de valores aleatórios.
    srand(time(0));

    //?? Declaração de variáveis
    
    //? "std::" utilizado para dizer ao compilador que o uso de alguns recursos de STL (Standard Template Library) é necessário.
    std::vector<int> RandomNumber(10);
    std::vector<int> SecRandomNumber(10);
    int ShortestNumber = RandomNumber[0];
    int BiggestNumber = RandomNumber[0];
    int SumNumber = 0;
    int SumPositiveNumber = 0;
    
    //? Geração de valores aleatórios
    //? "rand()" gera um valor aleatório entre -20 e 20 pois foi definido no intervalo utilizando "%"
    for (size_t i = 0; i < RandomNumber.size(); i++){
        RandomNumber[i] = rand() % 41 - 20;
        SecRandomNumber[i] = rand() % 41 - 20;
    }

    //? Exibição dos valores
    for (size_t i = 0; i < RandomNumber.size(); i++){
        cout << "Numero [" << i << "] de valor: " << RandomNumber[i] << endl;
    }

    //?Exibição dos valores
    for (size_t i = 0; i < SecRandomNumber.size(); i++){
        cout << "Segundo Numero [" << i << "] de valor: "<< SecRandomNumber[i] << endl;
    }

    for (size_t i = 0; i < RandomNumber.size(); i++){
        //? Verificação de par ou impar para cada posição
        if (RandomNumber[i] % 2 == 0){
            cout << "A posicao[" << i << "] de valor: " << RandomNumber[i] << " e um numero par" << endl;
        } else{
            cout << "A posicao[" << i << "] de valor: " << RandomNumber[i] << " e um numero impar" << endl;
        }

        //? Verificação do maior e menor valor para cada posição
        if (RandomNumber[i] < ShortestNumber){
            ShortestNumber = RandomNumber[i];
        }
        if (RandomNumber[i] > BiggestNumber){
            BiggestNumber = RandomNumber[i];
        }

        //? Verificação da soma de todos os valores
        SumNumber += RandomNumber[i];

        //? Verificação da soma de todos os valores positivos
        if (RandomNumber[i] > 0){
            SumPositiveNumber += RandomNumber[i];
        }
    }

    //? Exibição dos resultados
    cout << "\nO menor elemento do vetor: " << ShortestNumber << endl;
    cout << "O maior elemento do vetor: " << BiggestNumber << endl;
    cout << "A soma de todos os elementos do vetor: " << SumNumber << endl;
    cout << "A soma de todos os elementos positivos do vetor: " << SumPositiveNumber << endl;

    int SearchNumber = 0;

    //? Pergunta ao usuário o valor que deseja pesquisar e o armazena na variável
    cout << "\nInsira o valor que deseja pesquisar: ";
    cin >> SearchNumber;

    //? Verificação do valor informado pelo usuário
    for (size_t i = 0; i < RandomNumber.size(); i++){
        if (RandomNumber[i] == SearchNumber){
            cout << "O valor pesquisado '" << SearchNumber << "' ocorre na posicao[" << i << "]\n" << endl;
            break;
        } else if(i == RandomNumber.size() - 1){
            cout << "O valor pesquisado '" << SearchNumber << "' NAO ocorre no vetor\n" << endl;
        }
    }

    //? Verificação dos valores que ocorrem nos dois vetores
    for (size_t i = 0; i < RandomNumber.size(); i++)
    {   
        //? Percorre o segundo vetor buscando pelo valor 'i' do primeiro
        for (size_t j = 0; j < SecRandomNumber.size(); j++){
            if (RandomNumber[i] == SecRandomNumber[j]){
                cout << "O valor '" << RandomNumber[i] << "' ocorre nos dois vetores nas posicoes [" << i << "] e [" << j << "]" << endl;
            }       
        }
    }
    

    return 0;
}


/*
%Exemplo de funcionamento do código:

@System.: Numero [0] de valor: 15
@System.: Numero [1] de valor: -20
@System.: Numero [2] de valor: 15
@System.: Numero [3] de valor: -16
@System.: Numero [4] de valor: -17
@System.: Numero [5] de valor: 13
@System.: Numero [6] de valor: 7
@System.: Numero [7] de valor: 12
@System.: Numero [8] de valor: -16
@System.: Numero [9] de valor: 8
@System.: Segundo Numero [0] de valor: 19
@System.: Segundo Numero [1] de valor: -16
@System.: Segundo Numero [2] de valor: -15
@System.: Segundo Numero [3] de valor: 0
@System.: Segundo Numero [4] de valor: -19
@System.: Segundo Numero [5] de valor: -11
@System.: Segundo Numero [6] de valor: 0
@System.: Segundo Numero [7] de valor: -1
@System.: Segundo Numero [8] de valor: -18
@System.: Segundo Numero [9] de valor: 13
@System.: A posicao[0] de valor: 15 e um numero impar
@System.: A posicao[1] de valor: -20 e um numero par
@System.: A posicao[2] de valor: 15 e um numero impar
@System.: A posicao[3] de valor: -16 e um numero par
@System.: A posicao[4] de valor: -17 e um numero impar
@System.: A posicao[5] de valor: 13 e um numero impar
@System.: A posicao[6] de valor: 7 e um numero impar
@System.: A posicao[7] de valor: 12 e um numero par
@System.: A posicao[8] de valor: -16 e um numero par
@System.: A posicao[9] de valor: 8 e um numero par

@System.: O menor elemento do vetor: -20
@System.: O maior elemento do vetor: 15
@System.: A soma de todos os elementos do vetor: 1
@System.: A soma de todos os elementos positivos do vetor: 70

@System.: Insira o valor que deseja pesquisar: 
?Client.: 1
@System.: O valor '-16' ocorre nos dois vetores nas posicoes [3] e [1]
@System.: O valor '13' ocorre nos dois vetores nas posicoes [5] e [9]
@System.: O valor '-16' ocorre nos dois vetores nas posicoes [8] e [1]
*/

/*
*código completo sem comentários:
    #include <iostream>
    #include <vector>
    #include <cstdlib>
    #include <ctime>

    using namespace std;

    int main()
    {
        srand(time(0));

        std::vector<int> RandomNumber(10);
        std::vector<int> SecRandomNumber(10);
        int ShortestNumber = RandomNumber[0];
        int BiggestNumber = RandomNumber[0];
        int SumNumber = 0;
        int SumPositiveNumber = 0;
        
        for (size_t i = 0; i < RandomNumber.size(); i++){
            RandomNumber[i] = rand() % 41 - 20;
            SecRandomNumber[i] = rand() % 41 - 20;
        }

        for (size_t i = 0; i < RandomNumber.size(); i++){
            cout << "Numero [" << i << "] de valor: " << RandomNumber[i] << endl;
        }

        for (size_t i = 0; i < SecRandomNumber.size(); i++){
            cout << "Segundo Numero [" << i << "] de valor: "<< SecRandomNumber[i] << endl;
        }

        for (size_t i = 0; i < RandomNumber.size(); i++){
            if (RandomNumber[i] % 2 == 0){
                cout << "A posicao[" << i << "] de valor: " << RandomNumber[i] << " e um numero par" << endl;
            } else{
                cout << "A posicao[" << i << "] de valor: " << RandomNumber[i] << " e um numero impar" << endl;
            }

            if (RandomNumber[i] < ShortestNumber){
                ShortestNumber = RandomNumber[i];
            }
            if (RandomNumber[i] > BiggestNumber){
                BiggestNumber = RandomNumber[i];
            }

            SumNumber += RandomNumber[i];

            if (RandomNumber[i] > 0){
                SumPositiveNumber += RandomNumber[i];
            }
        }

        cout << "\nO menor elemento do vetor: " << ShortestNumber << endl;
        cout << "O maior elemento do vetor: " << BiggestNumber << endl;
        cout << "A soma de todos os elementos do vetor: " << SumNumber << endl;
        cout << "A soma de todos os elementos positivos do vetor: " << SumPositiveNumber << endl;

        int SearchNumber = 0;

        cout << "\nInsira o valor que deseja pesquisar: ";
        cin >> SearchNumber;

        for (size_t i = 0; i < RandomNumber.size(); i++){
            if (RandomNumber[i] == SearchNumber){
                cout << "O valor pesquisado '" << SearchNumber << "' ocorre na posicao[" << i << "]\n" << endl;
                break;
            } else if(i == RandomNumber.size() - 1){
                cout << "O valor pesquisado '" << SearchNumber << "' NAO ocorre no vetor\n" << endl;
            }
        }

        for (size_t i = 0; i < RandomNumber.size(); i++)
        {   
            for (size_t j = 0; j < SecRandomNumber.size(); j++){
                if (RandomNumber[i] == SecRandomNumber[j]){
                    cout << "O valor '" << RandomNumber[i] << "' ocorre nos dois vetores nas posicoes [" << i << "] e [" << j << "]" << endl;
                }       
            }
        }
        

        return 0;
    }
*/
