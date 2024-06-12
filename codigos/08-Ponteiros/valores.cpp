#include <iostream>

using namespace std;

int main() {
  int x;
  int *ap_x = &x;

  x = 100;
  cout << "Valor de x = " << *ap_x << endl;

  *ap_x = 200;
  cout << "Valor de x = " << *ap_x << endl;
  cout << "Valor de x = " << x << endl;

  return 0;
}
