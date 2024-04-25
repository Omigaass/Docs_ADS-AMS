#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x1, y1, x2, y2, angulo;

    angulo = atan2(y2 - y1, x2 - x1) * 180 / 3.1415;
    angulo = round(angulo * 100.0) / 100.0;

    cout << angulo << endl;
}