#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

clock_t inicio, fim;

void bubbleSort(int v[], int n) {
    inicio = clock();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    fim = clock();
    cout << "Tempo de Execucao BubbleSort: " << (float)(fim - inicio) / CLOCKS_PER_SEC << " segundos " << endl;
}

void selectionSort(int v[], int n) {
    inicio = clock();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = v[i];
            v[i] = v[minIndex];
            v[minIndex] = temp;
        }
    }
    fim = clock();
    cout << "Tempo de Execucao SelectionSort: " << (float)(fim - inicio) / CLOCKS_PER_SEC << " segundos " << endl;
}

void insertionSort(int v[], int n) {
    inicio = clock();
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    fim = clock();
    cout << "Tempo de Execucao InsertionSort: " << (float)(fim - inicio) / CLOCKS_PER_SEC << " segundos " << endl;
}

void quickSort(int v[], int esq, int dir) {
    if (esq < dir) {
        int i = esq, j = dir;
        int pivo = v[(esq + dir) / 2];
        while (i <= j) {
            while (v[i] < pivo) i++;
            while (v[j] > pivo) j--;
            if (i <= j) {
                swap(v[i], v[j]);
                i++;
                j--;
            }
        }
        if (j > esq) quickSort(v, esq, j);
        if (i < dir) quickSort(v, i, dir);
    }
}

void merge(int v[], int esq, int meio, int dir) {
    const int n1 = meio - esq + 1;
    const int n2 = dir - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = v[esq + i];
    for (int j = 0; j < n2; j++)
        R[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = esq;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;

        mergeSort(v, esq, meio);
        mergeSort(v, meio + 1, dir);

        merge(v, esq, meio, dir);
    }
}

int main() {
    cout << "Hello, World!" << endl;

    int n = 100000;
    int *v = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 71;
    }

    cout << "Vetor de " << n << " elementos \n";

    // Printing the unsorted array

    bubbleSort(v, n);
    selectionSort(v, n);
    insertionSort(v, n);
    inicio = clock();
    quickSort(v, 0, n - 1);
    fim = clock();
    cout << "Tempo de Execucao QuickSort: " << (float)(fim - inicio) / CLOCKS_PER_SEC << " segundos " << endl;
    inicio = clock();
    mergeSort(v, 0, n - 1);
    fim = clock();
    cout << "Tempo de Execucao MergeSort: " << (float)(fim - inicio) / CLOCKS_PER_SEC << " segundos " << endl;

    delete[] v;
    return 0;
}