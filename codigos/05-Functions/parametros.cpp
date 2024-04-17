#include <iostream>
using namespace std;

int soma (int x, int y) {
  x += 1;
  y += 1;
  return (x + y);
}

int main () {
  int a, b;

  cout << "Digite o valor de a: ";
  cin >> a;

  cout << "Digite o valor de b: ";
  cin >> b;

  cout << "Soma de a e b: " << a + b << endl;
  cout << "Soma de x e y: " << soma(a, b) << endl;// a e b se alteram apos a chamada??
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  return 0;
}
