#include <iostream>
using namespace std;
main(){
    int Vetor[10];
    int Contador, QuantItems = 0;

    for(Contador = 0; Contador < 10; Contador++){
        cout << "Insira o valor do Vetor[" << Contador << "]" << endl;
        cin >> Vetor[Contador];
        QuantItems++;
    }

    for(Contador = 0; Contador < 10; Contador++) cout << "Vetor[" << Contador << "]: " << Vetor[Contador] << endl;

    int ValorBusca;
    cout << "Pesquisar numero.: ";
    cin >> ValorBusca;

    for(Contador = 0; Contador < QuantItems; Contador++){
        if(ValorBusca == Vetor[Contador]){
            cout << "Posicao: " << Contador << "\nValor: " << Vetor[Contador];
            break;
        }
    }
    if(Contador == QuantItems) cout << "Valor nao Encontrado\n";

    int ValorDeletar;
    cout << "Insira o valor a ser Excluido: ";
    cin >> ValorDeletar;

    for(Contador = 0; Contador < ValorDeletar; Contador++){
        if(ValorDeletar == Vetor[Contador]){
            if (Contador != QuantItems - 1){
                for (int ContadorLista = Contador + 1; ContadorLista < (Contador - 1); ContadorLista++){
                    Vetor[ContadorLista] = Vetor[ContadorLista + 1];        
                }
            }
            QuantItems = QuantItems - 1;
            cout << "Valor removido da posicao: " << Contador << endl;
            break;
        }
    }
    if(Contador == QuantItems) cout << "Valor não encontrado \n";
    for (Contador = 0; Contador < QuantItems; Contador++) cout << " " << Vetor[Contador];
    cout << endl;
}
