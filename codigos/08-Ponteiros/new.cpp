#include <iostream>
using namespace std;

int main() {
  int *p;
  int i, n;

  cin >> n;
  p = new int[n]; //alocacao dinamica de n inteiros

  //gravando em p inteiros de 0 a n-1
  for (i = 0; i < n; i++) {
    p[i] = i;
    cout << p[i] << ' ';//imprimindo
  }

  delete[] p; //desalocando

  return 0;
}
