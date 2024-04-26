#include <iostream>
using namespace std;

int main(){
    char str[100];
    cout << "Digite uma string: ";
    fflush(stdin);
    gets(str);
    cout << "String lida: " << str;
}
