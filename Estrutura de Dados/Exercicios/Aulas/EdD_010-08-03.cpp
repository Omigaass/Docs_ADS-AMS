#include <iostream>
using namespace std;
int v[100];
int n=0;

class Vetor {
    public: void inserção(int valor){    
        v[n] = valor;
        n++;    
    }
};

int main() {
 
        // Inserindo valores no vetor
        cout << "Informe 10 valores inteiros para o vetor" << endl;
        int i;
        for(i=0; i<10; i++) {
                cin >> v[i];
                n++;
        }
 
        // Mostrando valores no vetor
        cout << "\nMostrando todos elementos do vetor" << endl;
        for(i=0; i<n; i++) {
                cout << " " << v[i];
        }
        cout << endl;
 
        // Buscando valores no vetor
        cout << "\nForneca um valor para busca: ";
        int chave;
        cin >> chave;
        for (i=0; i<n; i++) {
                if ( v[i] == chave ) { break; }
        }
        if (i == n) { cout << "Chave NAO encontrada" << endl; }
        else { cout << "Chave encontrada no indice " << i << endl; }
 
        // Removendo valores no vetor
        cout << "\nForneca um valor para remocao: ";
        cin >> chave;
        for (i=0; i<n ;i++) {
                if (v[i] == chave) {
                        if (i != (n-1)) {
                                for(int k=i; k<(n-1); k++)  v[k]=v[k+1];
                        }
                n--;
                break;
                }
        }                                                
 
        // Mostrando valores no vetor
        cout << "\nMostrando todos elementos do vetor" << endl;
        for(i=0; i<n; i++) {
                cout << " " << v[i];
        }
        cout << endl;
 
        return 0;
}