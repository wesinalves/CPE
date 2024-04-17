#include <iostream>
using namespace std;

void troca(int& x, int& y) {
  int aux;
  //troca de valores entre var.
  aux = x;
  x = y;
  y = aux;
}

int main() {
  int a = 100, b = 200;

  troca(a, b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}
