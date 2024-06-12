#include <iostream>

using namespace std;

int main() {
  int x = 100;
  int *ap_x;
  
  ap_x = &x;

  cout << "Valor de x = " << x << endl;
  cout << "Endereco de x = " << &x << endl;
  cout << "Endereco de x = " << ap_x << endl;
  x = 200;
  cout << "Endereco de x = " << &x << endl;
  cout << "Endereco de x = " << ap_x << endl;
  cout << "Valor de x = " << x << endl;
  
  return 0;
}
