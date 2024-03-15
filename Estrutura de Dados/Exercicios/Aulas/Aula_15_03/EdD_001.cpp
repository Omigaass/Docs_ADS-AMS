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

    int busca_linear(){
        int chave, i;
        cout << "Forneca valor para busca: ";
        cin >> chave;
        for(i = 0; i < n; i++){
            if(chave == v[i]){ return i; }
        }
        return -1;
    }

    void remover(){
        int i, chave;
        cout << "Forneca valor para remoção: ";
        cin >> chave;
        for(i = 0; i < n; i++){
            if(chave == v[i]){
                if(i != (n - 1)){
                    for(int k = i; k < (n - 1); k++){
                        v[k] = v[k + 1];
                    }
                    n--;
                    break;
                }
            }
        }
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
    cout << "Conteudo do Vetor: ";
    for(int i = 0; i < 100; i++){
        v.inserir(rand() % 101);
    }
    v.mostrar();
    cout << endl;
    v.bubblesort();
    cout << "Conteudo do Vetor: ";
    v.mostrar();
}