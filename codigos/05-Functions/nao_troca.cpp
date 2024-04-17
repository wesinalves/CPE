#include <iostream>
using namespace std;

void nao_troca(int x, int y) {
	int aux;
	//troca de valores entre as variaveis
  	aux = x;
  	x = y;
  	y = aux;
}

int main() {
  int a = 100, b = 200;

  nao_troca(a, b);
  cout <<"a = " << a << ", b = " << b << endl;
  return 0;
}
