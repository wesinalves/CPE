#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int i;
  int *p;

  for (i = 0; i < 100; i++) {
    p = (int*) malloc(100 * sizeof(int));
    cout << "endereco alocado = " << p << endl;
    free(p);
  }

  return 0;
}
