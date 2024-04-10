#include <iostream>
using namespace std;
//programa que calcula a divisao inteira
int main() {
  int dividendo, divisor;
  int conta;

  cout << "Dividendo: ";
  cin >> dividendo; //entrada
  cout << "Divisor: ";
  cin >> divisor; //entrada

  conta = 0;
  while (dividendo >= divisor) { //repeticao
    conta++;
    dividendo = dividendo - divisor;
  }

  cout 	<< "Resultado: " << conta
        << "\nResto: " << dividendo << endl;
  return 0;
}
