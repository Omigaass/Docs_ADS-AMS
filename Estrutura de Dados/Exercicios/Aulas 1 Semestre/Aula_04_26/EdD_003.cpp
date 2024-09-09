#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char fstName[1000], secName[1000];
    cout << "Informe dois nomes: " << endl;
    fflush(stdin);
    gets(fstName);
    fflush(stdin);
    gets(secName);

    int ret;
    ret = strcmp(fstName, secName);
    if(ret == 0){
        cout << fstName << " E igual" << secName << endl;
    }
    if (ret > 0){
        cout << fstName << " Vem depois de " << secName << endl;
    }
    if(ret < 0){
        cout << fstName << " Vem antes de " << secName << endl;
    }
    return 0;
}