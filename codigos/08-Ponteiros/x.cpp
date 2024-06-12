#include <iostream>

using namespace std;
int y = 200; //var. global

int main() {
  int x = 100;
  cout << "Valor de x = " << x << endl;
  cout << "Endereco de x = " << &x << endl;

  cout << "Valor de y = " << y << endl;
  cout << "Endereco de y = " << &y << endl;
  
  return 0;
}
