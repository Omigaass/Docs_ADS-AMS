#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

clock_t inicio, fim;

void bubbleSort(int v[], int n){
    inicio = clock();
    int troca;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - 1); j++){
            if(v[j] > v[j + 1]){
                troca = v[j];
                v[j] = v[j + 1];
                v[j + 1] = troca;
            }
        }
    }
    fim = clock();
    cout << "Tempo de Execucao BubbleSort: " << (float)(fim - inicio)/CLOCKS_PER_SEC << " segundos " << endl;
}

void selectionSort(int v[], int n){
    inicio = clock();
    int troca, menor;
    for(int i = 0; i < n; i++){
        menor = i;
        for(int j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        troca = v[i];
        v[i] = v[menor];
        v[menor] = troca;
    }
    fim = clock();
    cout << "Tempo de Execucao SelectionSort: " << (float)(fim - inicio)/CLOCKS_PER_SEC << " segundos " << endl;
}

void InsertionSort(int v[], int n){
    inicio = clock();
    int troca;
    for(int i = 1; i < n; i++){
        troca = v[i];
        int j = i - 1;
        while(j >= 0 && troca < v[j]){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = troca;
    }
    fim = clock();
    cout << "Tempo de Execucao InsertionSort: " << (float)(fim - inicio)/CLOCKS_PER_SEC << " segundos " << endl;
}

void quickSort(int v[], int esq, int dir){
    int i = esq, j = dir, pivo, aux;
    pivo = v[(esq + dir) / 2];
    while(i <= j){
        while(v[i] < pivo) i++;
        while(v[j] > pivo) j--;
        if(i <= j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
    }
    if(j > esq) quickSort(v, esq, j);
    if(i < dir) quickSort(v, i, dir);
}

void mergeSort(int v[], int esq, int dir){
    int i = esq, j = dir, pivo, aux;
    pivo = v[(esq + dir) / 2];
    while(i <= j){
        while(v[i] < pivo) i++;
        while(v[j] > pivo) j--;
        if(i <= j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
    }
    if(j > esq) mergeSort(v, esq, j);
    if(i < dir) mergeSort(v, i, dir);
}

int main(){
    cout << "Hello, World!" << endl;

    int n = 100000, v[n], i;

    srand((unsigned) time(NULL));
    for(i = 0; i < n; i++){
        v[i] = rand() % 71;
    }

    cout << "Vetor de " << n << " elementos \n";
    
    system("Color 0D"); 

    for(i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    bubbleSort(v, n);
    selectionSort(v, n);
    InsertionSort(v, n);
    inicio = clock();
    quickSort(v, 0, n - 1);
    fim = clock();
    cout << "Tempo de Execucao QuickSort: " << (float)(fim - inicio)/CLOCKS_PER_SEC << " segundos " << endl;
    inicio = clock();
    mergeSort(v, 0, n - 1);
    fim = clock();
    cout << "Tempo de Execucao MergeSort: " << (float)(fim - inicio)/CLOCKS_PER_SEC << " segundos " << endl;
}