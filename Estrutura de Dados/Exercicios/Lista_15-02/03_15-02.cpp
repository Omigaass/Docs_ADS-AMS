/*
2. Elabore um programa que leia um vetor de X de 5 elementos e retorne um vetor Y cujos
elementos são os elementos do vetor X multiplicados pelos seus índices.
*/

//? Inclui as bibliotecas
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //? função para criação de semente para geração de numeros aleatórios
    srand(time(0));

    //? Declaração de variáveis do tipo vetor
    std::vector<int> VetorX(20);
    //? Variaveis com o mesmo tamanho do vetor "x" e com os valores definidos como 0
    std::vector<int> VetorY(VetorX.size(), 0);
    std::vector<int> VetorZ(VetorX.size(), 0);

    //? Gerando números aleatórios e imprimindo eles separado por virgula
    for (size_t i = 0; i < VetorX.size(); i++)
    {
        VetorX[i] = rand() % 41 - 20;
            if (i < VetorX.size() - 1)
            {
                cout << VetorX[i] << ", ";   
            } else {
                cout << VetorX[i] << endl;
            }
    }

    //? Verificando se é par ou impar e definindo variáveis separando eles por esses tipos
    for (size_t i = 0; i < VetorX.size(); i++)
    {
        if (VetorX[i] % 2 == 0)
        {
            VetorY[i] = VetorX[i];
        } else {
            VetorZ[i] = VetorX[i];
        }
    }


    //? Exibindo os valores da variável Y
    std::cout << "VetorY: ";
    for (size_t i = 0; i < VetorY.size(); i++) {
        if (VetorY[i] != 0) {
            std::cout << VetorY[i] << " ";
        }
    }
    std::cout << std::endl;

    //? Imprimindo os valores da variável Z
    std::cout << "VetorZ: ";
    for (size_t i = 0; i < VetorZ.size(); i++) {
        if (VetorZ[i] != 0) {
            std::cout << VetorZ[i] << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}

/*
%Exemplo de funcionamento do código:

@System.: 5, 12, -10, 14, 3, -11, 5, -14, 10, -20, -7, -6, 2, -6, 18, 11, 15, -12, 17, -6
@System.: VetorY: 12 -10 14 -14 10 -20 -6 2 -6 18 -12 -6
@System.: VetorZ: 5 3 -11 5 -7 11 15 17
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

        std::vector<int> VetorX(20);
        std::vector<int> VetorY(VetorX.size(), 0);
        std::vector<int> VetorZ(VetorX.size(), 0);

        for (size_t i = 0; i < VetorX.size(); i++)
        {
            VetorX[i] = rand() % 41 - 20;
                if (i < VetorX.size() - 1)
                {
                    cout << VetorX[i] << ", ";   
                } else {
                    cout << VetorX[i] << endl;
                }
        }

        for (size_t i = 0; i < VetorX.size(); i++)
        {
            if (VetorX[i] % 2 == 0)
            {
                VetorY[i] = VetorX[i];
            } else {
                VetorZ[i] = VetorX[i];
            }
        }

        std::cout << "VetorY: ";
        for (size_t i = 0; i < VetorY.size(); i++) {
            if (VetorY[i] != 0) {
                std::cout << VetorY[i] << " ";
            }
        }
        std::cout << std::endl;

        std::cout << "VetorZ: ";
        for (size_t i = 0; i < VetorZ.size(); i++) {
            if (VetorZ[i] != 0) {
                std::cout << VetorZ[i] << " ";
            }
        }
        std::cout << std::endl;
        
        return 0;
    }
*/
