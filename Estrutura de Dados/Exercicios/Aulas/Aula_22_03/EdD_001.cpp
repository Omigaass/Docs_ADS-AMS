#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
    int v[100], i, n=0;
    srand(time(0));
    for(i=0;i<100;i++){
        v[i] = rand() % 101;
        n++;
    }

    cout << "\nConteudo do Vetor: \n";
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }

    for(i=0;i<n;i++){
        for(int j = 0; j < (n - 1); j++){
            if(v[j] > v[j + 1]){
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    cout << "\nConteudo do Vetor: \n";
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }

    int chave;
    cout << "\nForneca valor para busca: " << endl;
    cin >> chave;

    int baixo = 0, alto = n - 1, encontrou = 0;
    int meio;
    while (baixo <= alto)
    {
        meio = (baixo + alto) / 2;
        if (chave == v[meio])
        {
            cout << "Encontrado na posicao: " << meio << endl;
            encontrou = 1;
            break;
        }
        else if (chave < v[meio]) { alto = meio - 1; }
        else{ baixo = meio + 1; }
    }
    if(!encontrou){
        cout << "Valor nao encontrado" << endl;
    }
}