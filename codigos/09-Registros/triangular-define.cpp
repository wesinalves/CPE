#include <iostream>
#include <iomanip>
#define SIZE 4

using namespace std;

int main() {
  int matriz[SIZE][SIZE];
  int i, j;
  bool inferior;

  /*Leitura*/
  for (i = 0; i < SIZE; i++)
    for (j = 0; j < SIZE; j++) {
      cout << "Matriz[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }

  /*Escrita*/
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++)
      cout << setw(3) << matriz[i][j];
    cout << "\n";
  }

  inferior = true;
  for (i = 0; i < SIZE; i++)
    for (j = i + 1; j < SIZE; j++) {
      if (matriz[i][j] != 0) {
        inferior = false;
      }
    }

  if (inferior==true) {
    cout << "A matriz e triangular inferior\n";
  } else {
    cout << "A matriz nao e triangular inferior\n";
  }

  return 0;
}
