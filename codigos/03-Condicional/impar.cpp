#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Informe um valor inteiro: ";
    cin >> a;

    if((a%2) != 0)
        if(a > 0)
        cout << "O valor é impar\n";
            cout << "a > 0\n";
    else
        cout << "O valor é par\n";


    return 0;
}