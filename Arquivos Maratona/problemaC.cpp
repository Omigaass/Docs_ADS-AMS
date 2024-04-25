#include <iostream>
#include <cmath>
#include <locale.h>
#include <iomanip> 
using namespace std;

int main(){
    setlocale(LC_ALL,"");
    setlocale(LC_NUMERIC,"");

    int x1, y1, z1, x2, y2, z2;
    float d;

    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    cout << fixed << setprecision(2);
    cout << d << endl;
    return 0;
}