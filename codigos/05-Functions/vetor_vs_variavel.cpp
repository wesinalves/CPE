#include <iostream>
using namespace std;

void altera(int vet[], int x) {
  vet[0] = -1;
  x = -1;
}

int main() {
  int vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x = 0;

  altera(vet, x);//vet e passado por referencia, por ser vetor
  cout << "vet[0] = " << vet[0] << "\n";
  cout << "x      = " << x << "\n";
  return 0;
}
