#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    priority_queue<int> fila1;
    priority_queue<int> fila2;
    priority_queue<int> filaCombinada;

    int n, valor;

    cout << "Quantos valores deseja adicionar na primeira fila? ";
    cin >> n;
    cout << "Insira os valores para a primeira fila:\n";
    for (int i = 0; i < n; i++) {
        cin >> valor;
        fila1.push(valor);
    }

    cout << "Quantos valores deseja adicionar na segunda fila? ";
    cin >> n;
    cout << "Insira os valores para a segunda fila:\n";
    for (int i = 0; i < n; i++) {
        cin >> valor;
        fila2.push(valor);
    }

    while (!fila1.empty()) {
        filaCombinada.push(fila1.top());
        fila1.pop();
    }

    while (!fila2.empty()) {
        filaCombinada.push(fila2.top());
        fila2.pop();
    }

    cout << "\nConteúdo da fila combinada em ordem de prioridade:\n";
    while (!filaCombinada.empty()) {
        cout << filaCombinada.top() << " ";
        filaCombinada.pop();
    }
    cout << endl;

    return 0;
}