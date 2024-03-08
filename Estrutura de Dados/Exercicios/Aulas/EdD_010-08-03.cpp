#include <iostream>
using namespace std;

class Vetor {
    private: int v[10], n;
    public: vetor(){
        n = 0;
    }

    public: void exibicao(){
        cout << "\n Mostrando todos os elementos do vetor: \n";
        for(int i = 0; i < n; i++) cout << " " << v[i];
        cout << endl;
    }
    public: void remocao() {
        cout << "Forneca valor para remoção: ";
        int i, chave;
        cin >> chave;
        for(i=0;i<n;i++){
            if(v[i] == chave){
                if(i != (n-1)){
                    for(int k = i; k < (k-1); k++){
                        v[k] = v[k + 1];
                    }
                    n--;
                    break;
                }
            }
        }
    }
    public: void inserção(int chave){    
        v[n] = chave;
        n++;    
    }
    public: int pesquisa(){
        cout << "Forneca valor para busca: ";
        int chave;
        cin >> chave;
        for ( int = 0; i < n; i++){
             if(v[i] == chave) return i;
        }
        return -1;
    }
};

int main() {
    vetor v;
    cout << "Forneca 5 valores inteiro: ";
    int chave;
    for(int i =0; i < 5; i++){
        cin >> chave;
        v.insercao(chave);
    }
    v.exibicao();
    int retorno;
    retorno = v.pesquisa();
    if( retorno == -1)
        cout << "Valor nao encontrado\n";
    else
        cout << "Valor encontrado na posicao " << retorno << endl;
    v.remocao();
    v.exibicao();
    return 0;
}
