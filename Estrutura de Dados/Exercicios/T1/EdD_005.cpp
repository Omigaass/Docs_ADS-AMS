#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void ordenar(int vet[], int tam){
    int aux;
    for(int i = 0; i < tam; i++){
        for(int j = i + 1; j < tam; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for(int i = 0; i < tam; i++){
        if (i != 0){
            cout << ", " << vet[i];
        } else{
            cout << vet[i];
        }
    }
}

int bbr(int v[], int baixo, int alto, int chave) {   
    int meio;   
    while(baixo <= alto) {
        meio = (baixo+alto)/2;
        if (v[meio] == chave) return meio;
        if (v[meio] < chave) return bbr(v,meio+1,alto,chave);
        else return bbr(v,baixo,meio-1,chave);   
    }   
    return -1; 
} 

int main(){
    cout << "Hello World!" << endl;

    int vet[50];
    srand((unsigned) time(NULL));
    for(int i = 0; i < 50; i++){
        vet[i] = rand() % 101;
    }

    ordenar(vet, 50);

    int chave;
    cout << "\nForneca valor para busca: " << endl;
    cin >> chave;

    cout << "\nPosicao: " << bbr(vet, 0, 50, chave);
}