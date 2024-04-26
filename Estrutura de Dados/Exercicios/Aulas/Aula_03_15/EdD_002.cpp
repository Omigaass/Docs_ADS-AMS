#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Vetor{
    private: int v[100], n;
    public: Vetor(){ n = 0; }

    void inserir(int chave){
        v[n] = chave;
        n++;
    }

    void mostrar(){
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }

    void busca_quantidade(){
        int chave, qnt = 0;
        cout << "\nForneca valor para busca: ";
        cin >> chave;
        for(int i = 0; i < n; i++){
            if(chave == v[i]){ qnt += 1; }
        }
        cout << "\nQuantidade de vezes que o valor [" << chave << "] foi encontrado: " << qnt << endl;
    }

    void bubblesort(){
        for (int i = 0; i < n; i++){
            for(int j = 0; j < (n - 1); j++){
                if(v[j] > v[j + 1]){
                    int aux = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = aux;
                }
            }
        }
    }
};

int main(){
    Vetor v;
    srand(time(0));
    cout << "\nConteudo do Vetor: \n";
    for(int i = 0; i < 100; i++){
        v.inserir(rand() % 101);
    }
    v.mostrar();
    v.bubblesort();
    cout << "\nConteudo do Vetor: \n";
    v.mostrar();
    v.busca_quantidade();
}