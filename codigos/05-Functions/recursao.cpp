#include <iostream>
using namespace std;

int fatorial(int n){
    if(n == 1)
        return 1;
    return n * fatorial(n-1);
}

int main(){
    int n, fat;
    cout << "Digite o valor de n: ";
    cin >> n;

    fat = fatorial(n);

    cout << n << "! = " << fat << endl;
     
    return 0;
}