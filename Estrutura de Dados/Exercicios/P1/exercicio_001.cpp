#include <iostream>
using namespace std;

void OrdenacaoSelecao(int *vet, int tamanho){
    int aux;
    int troca;
    for(int i = 0; i < tamanho; i++){
        aux = i;
        for(int j = i + 1; j < tamanho; j++){
            if(vet[j] < vet[aux]){
                aux = j;
            }
        }
        troca = vet[i];
        vet[i] = vet[aux];
        vet[aux] = troca;
    }
}

int main(){
    int tamanhoVetor = 10;
    int vet[tamanhoVetor];
    
    for(int i = 0; i < tamanhoVetor; i++){
        cout << "Digite um valor para a posicao [" << i << "]: ";
        cin >> vet[i];
    }

    OrdenacaoSelecao(vet, tamanhoVetor);

    cout << "\nVetor ordenado: " << endl;

    for(int i = 0; i < tamanhoVetor; i++){
        cout << vet[i] << endl;
    }
}