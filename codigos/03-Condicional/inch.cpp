#include <iostream>
using namespace std;

int main(){
    const double CM_PER_INCH = 2.54;
    double length = 1;
    char unit = 'i';
    cout << "Por favor insira o tamanho seguido da unidade (c or i):\n";
    cin >> length >> unit;

    if(unit == 'i')
        cout << length << "in == " << CM_PER_INCH*length << "cm\n";
    else if(unit == 'c')
        cout << length << "cm == " << length/CM_PER_INCH << "in\n";
    else
        cout << "Unidade desconhecida.";
}