//? Inclui a biblioteca que permite a entrada e saida de dados
//? Inclui a biblioteca que permite a função system('pause');
#include <iostream>
#include <stdlib.h>

//? Declara que o programa o namespace padrão (std = standard = padrão), o que inclui usar os recursos de entrada e saida
using namespace std;

//? Função principal
int main()
{
    //? Declara as variáveis
    float n1, n2;

    //? 'cout' significa 'C output', ou seja, ele executa a saida de dados do programa.
    //? o '<<' é a forma de concatenar os dados (concatenar = ligar), ou seja, vai grudar as informaões dentro da função.
    cout << "informe 2 numeros reais: \n";

    //? 'cin' significa 'C input', e executa a entrada de dados do programa.
    cin >> n1 >> n2;

    //? Aqui está realizar a mesma ação do arquivo 'EdD_001-16-02.cpp', faz a soma e exibe a media.
    cout << "media " << (n1+n2)/2 << endl;

    //? 'system("pause")' significa 'pausa o programa', ou seja, pausa o programa para que o usuario possa visualizar o resultado.
    system("pause");
}

/*
%Exemplo de funcionamento do código:

!System.: informe 2 numeros reais 
?Client.: 5
?Client.: 10
!System.: media7.5
*/