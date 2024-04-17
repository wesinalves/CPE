#include <iostream>

using namespace std;

//funcao soma: recebe dois valores inteiros e retorna a soma deles
int soma (int a, int b) {
  int r; //variavel local
  r = a + b;
  return r;
}

int main () {
  int c, d;

  cout << "Digite o valor 1: ";
  cin >> c;

  cout << "Digite o valor 2: ";
  cin >> d;

  cout << "Soma: " << soma(c, d) << endl;
  cout << "Soma de 5 e 10: " << soma(5, 10) << endl;

  return 0;
}
