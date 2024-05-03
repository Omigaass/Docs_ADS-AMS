#include <iostream>
#include <vector>
using namespace std;

void preencheVetor(vector<int>& vet){
    cout << "Insira valor para o vetor: " << endl;
    for(int i = 0; i < vet.size(); i++){
        cin >> vet[i];
    }
}

void dobrarVetor(vector<int>& vet){
    for(int i = 0; i < vet.size(); i++){
        vet[i] *= 2;
    }
}

void imprimeVetor(vector<int> vet){
    cout << "\nVetor dobrado: " << endl;
    for(int i = 0; i < vet.size(); i++){
        cout << vet[i] << endl;
    }
}

int main(){
    int tamanhoVetor;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanhoVetor;

    vector<int> vet(tamanhoVetor);
    
    preencheVetor(vet);
    dobrarVetor(vet);
    imprimeVetor(vet);
}