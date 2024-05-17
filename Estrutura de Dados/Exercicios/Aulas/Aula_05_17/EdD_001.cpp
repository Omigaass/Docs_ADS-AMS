#include <iostream>
#include <stdlib.h>
using namespace std;

class Pilha{
    private: 
        int topIndex, max_h;
        char *stack;

    public: 
        //? Construtor
        Pilha(int e){
            max_h = e;
            topIndex = 0;
            stack = new char[e];
        }

        //! Metodos ->>

        //? Função que verifica se a pilha está vazia
        bool empty(){
            return (topIndex == 0);
        }

        //? Função que verifica se a pilha está cheia
        bool full(){
            return (topIndex == max_h);
        }

        //? Função que retorna o tamanho da pilha
        int size(){
            return topIndex;
        }

        //? Função que insere um elemento
        void push(char e){
            if(!full()){
                stack[topIndex] = e;
                topIndex++;
            }
            else cout << "Pilha cheia" << endl;
        }

        //? Função que remove um elemento
        void pop(){
            if (!empty()){
                topIndex--;
            }
            else cout << "Pilha vazia" << endl;
        }

        //? Função que retorna o elemento do topo
        char top(){
            return stack[topIndex - 1];
        }
};

int main(){
    Pilha p(10);
    cout << "Informe caracteres a serem inseridos na pilha: " << endl;
    char valor[10];
    gets (valor);

    for(int i = 0; valor[i] != '\0'; i++){
        p.push (valor[i]);
    }

    cout << "\n Desempilhando elementos da pilha: " << endl;
    while (!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;
}