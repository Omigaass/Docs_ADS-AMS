#include <iostream>
#include <math.h>
using namespace std;

void valorDelta(double a, double b, double c){
    double delta = (pow(b, 2)) - (4 * a * c);

    cout << "\nEquacao: " << a << "x^2 + " << b << "x + " << c << endl;

    cout << "\nA: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    cout << "Delta: " << delta << endl;
}

int main()
{
    double a, b, c;

    cout << "Hello World!\n" << endl;

    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;
    cout << "Insira o valor de c: ";
    cin >> c;

    valorDelta(a, b, c);

    return 0;
}
