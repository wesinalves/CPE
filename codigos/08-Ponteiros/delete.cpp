#include <iostream>
using namespace std;

int main() {
  int i;
  int *p;

  for (i = 0; i < 100; i++) {
    p = new int[100];
    cout << "endereco alocado = " << p << endl;
    delete[] p;
  }

  return 0;
}
