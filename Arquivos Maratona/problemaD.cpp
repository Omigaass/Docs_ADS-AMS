#include <iostream>
using namespace std;

int main()
{
    int P, T, V;
    cin >> P >> T >> V;

    if(P >= V){
        cout << "0" << endl;
        return 0;
    }

    for (int i = 1; i <= T; i++)
    {
        P += (P * 0.1);

        if (P >= V)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
    return 0;
}
