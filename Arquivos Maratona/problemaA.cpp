#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    int N, M, S, T;
    cin >> N >> M >> S >> T;

    vector<int> U = {}, V = {}, C = {};

    for (int i = 0; i < M; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        U.push_back(u);
        V.push_back(v);
        C.push_back(c);
    }
    
    if (N == 0 && M == 0 && S == 0 && T == 0)
    {
        cout << "-1";
        return 0;
    }

    while (S != T)
    {
        
    }
    

}