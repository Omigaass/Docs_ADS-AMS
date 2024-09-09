#include <iostream>
#include <math.h>
using namespace std;

float a, b, c, delta, x1, x2;
void calcular_delta();
void calcular_raizes();

int main()
{
    cout << "Bhaskara\n";
    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;
    cout << "Insira o valor de c: ";
    cin >> c;

    calcular_delta();
    
    if (delta < 0){
        cout << "Valor de delta negativo.\n";
    } else {
        calcular_raizes();
        cout << "X1: " << x1 << "\nX2: " << x2 << "\n";
    }
    

    return 0;
}

void calcular_delta(){
    delta = b * b - 4 * a * c;
}

void calcular_raizes(){
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
}