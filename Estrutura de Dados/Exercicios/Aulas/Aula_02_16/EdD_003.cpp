
//? Inclui a biblioteca que permite a entrada e saida de dados (cout e cin)
#include <iostream>
//? Indica ao programa que vamos usar o namespace std, que é o namespace padrão do C++
using namespace std;

//? ponto de entrada padrão
int main()
{
    //? Declara uma variável do tipo float chamada 'nota'. Ela é um array (vetor) de 5 posições.
    float notas[5];
    //? Declara um variável para ser utilizada de Contador. O valor inicial é 0.
    int i;

    //? Imprime na tela uma string pedindo 5 valores
    cout << "informe 5 valores reais: \n";
    //? Le os 5 valores digitados pelo usuário e armazena na variável 'nota'
    
    //? For (variável de inicialização; condição; incremento)
    //? For é uma estrutura de repetição que neste caso está sendo utilizado para percorrer um array (vetor) inserindo valores nele a cada passo.
    for( i=0 ; i<5 ; i++ ){
        cin >> notas[i];
    }

    //? Imprime na tela uma string Informando que será exibido os valores
    cout << "exibindo valores: \n";

    //? Esse for está imprimindo na tela os valores da variável 'nota' que foi armazenada dentro do array (vetor) 'notas'.
    //? Pense que cada um desses << são ligaões, elas ligam as informações dentro da linha de comando. 
    for( i=0 ; i<5 ; i++ ){
        cout << "notas[" << i << "]=" << notas[i] << endl;
    }

    //? Isso demonstra ao programa que o programa foi executado com sucesso.
    return 0;
}

/*
%Exemplo de funcionamento do código:

!System.: informe 5 valores reais: 
?Client.: 1
?Client.: 3
?Client.: 5
?Client.: 7
?Client.: 9
!System.: exibindo valores: 
!System.: notas[0]=1
!System.: notas[1]=3
!System.: notas[2]=5
!System.: notas[3]=7
!System.: notas[4]=9

*/

/*
*código completo sem comentários:

#include <iostream>
using namespace std;

int main()
{
    float notas[5];
    int i;

    cout << "informe 5 valores reais: \n";
    for( i=0 ; i<5 ; i++ ){
        cin >> notas[i];
    }

    cout << "exibindo valores: \n";
    for( i=0 ; i<5 ; i++ ){
        cout << "notas[" << i << "]=" << notas[i] << endl;
    }

    return 0;
}

*/