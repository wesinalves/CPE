#include <iostream>
using namespace std;

void troca(int *end_x, int *end_y) {
  int aux;
  //troca de valores entre var.
  aux = *end_x;
  *end_x = *end_y;
  *end_y = aux;
}

int main() {
  int a = 100, b = 200;

  troca(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}
