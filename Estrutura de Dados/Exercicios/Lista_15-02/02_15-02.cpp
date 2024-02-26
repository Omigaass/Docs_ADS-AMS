/*
2. Elabore um programa que leia um vetor de X de 5 elementos e retorne um vetor Y cujos
elementos são os elementos do vetor X multiplicados pelos seus índices. 
*/

//? Inclui as bibliotecas 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //? declara vetores do tipo inteiro com 5 posições
    std::vector<int> VetorX(5);
    std::vector<int> VetorY(5);

    cout << "Insira 5 valores: " << endl;
    
    //? Armazena 5 valores inteiros multiplicados pelo indice que eles possuem dentro do vetor
    for (size_t i = 0; i < VetorX.size(); i++){
        cout << "VetorX [" << i << "]: " << endl;
        cin >> VetorX[i];
        VetorY[i] = VetorX[i] * i;
    }

    //? Exibe esses produtos
    for (size_t i = 0; i < VetorY.size(); i++){
        cout << "VetorY [" << i << "]: " << VetorY[i] << endl;
    }
    

    return 0;
}

/*
%Exemplo de funcionamento do código:

@System.: Insira 5 valores: 
@System.: VetorX [0]:       
?Client.: 1
@System.: VetorX [1]: 
?Client.: 2
@System.: VetorX [2]: 
?Client.: 3
@System.: VetorX [3]: 
?Client.: 4
@System.: VetorX [4]: 
?Client.: 5

@System.: VetorY [0]: 0 
// 0 = 1 * 0
@System.: VetorY [1]: 2 
// 2 = 2 * 1
@System.: VetorY [2]: 6 
// 6 = 3 * 2
@System.: VetorY [3]: 12 
// 12 = 4 * 3
@System.: VetorY [4]: 20 
// 20 = 5 * 4
*/

/*
*código completo sem comentários:
    #include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> VetorX(5);
    std::vector<int> VetorY(5);

    cout << "Insira 5 valores: " << endl;
    
    for (size_t i = 0; i < VetorX.size(); i++){
        cout << "VetorX [" << i << "]: " << endl;
        cin >> VetorX[i];
        VetorY[i] = VetorX[i] * i;
    }

    for (size_t i = 0; i < VetorY.size(); i++){
        cout << "VetorY [" << i << "]: " << VetorY[i] << endl;
    }
    

    return 0;
*/

