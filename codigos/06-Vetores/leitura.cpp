#include <iostream>
using namespace std;

int main () {
  int matriz[4][4];
  int i, j;

  /*Leitura*/
  for (i = 0; i < 4; i++) //para todas as linhas
    for (j = 0; j < 4; j++) { //para todas as colunas de cada linha
      cout << "Matriz[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }

  /*Escrita*/
  for (i = 0; i < 4; i++) { //cada linha
    for (j = 0; j < 4; j++) //cada coluna de cada linha
      cout << matriz[i][j] << "\t";
    cout << endl;
  }

  return 0;
}
