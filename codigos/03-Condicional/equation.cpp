/*
Resolução de equação do segundo grau
by Wesin Ribeiro
axˆ2 + bx + c = 0
## Formula de Bhaskara
x1 = (-b + sqrt(delta))/2a
x2 = (-b - sqrt(delta))/2a
delta = bˆ2 - 4ac  
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,delta,x1,x2;

    cout << "Forneça os valores de a,b,c nessa ordem: ";
    cin >> a >> b >> c;

    delta = pow(-b,2.0) - 4 * a * c;
    cout << "delta==" << delta << endl;
    if(delta < 0)
        cout << "Não possui raízes reais\n";
    else if(delta == 0){
        x1 = (-b + sqrt(delta)) / 2 * a;
        cout << "as raizes da equação " << a << "x^2";
        cout << (b>=0 ? "+" : "-") << abs(b) << "x"; // operador ternário
        cout << (c>=0 ? "+":"-") << abs(c) << ":" << endl;
        cout << "x1==x2==" << x1;
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "as raizes da equação " << a << "x^2";
        cout << (b>=0 ? "+":"-") << abs(b) << "x"; 
        cout << (c>=0 ? "+":"-") << abs(c) << ":" << endl;
        cout << "x1==" << x1 << endl;
        cout << "x2==" << x2 << endl;
    }

}