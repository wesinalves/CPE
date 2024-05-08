#include <iostream>
#define LIM 2 //definicao de uma constante

using namespace std;

int main() {
  int mat1[LIM][LIM];
  int mat2[LIM][LIM];
  int i = 0, j = 0;

  //leitura dos elementos da matriz
  for (i = 0; i < LIM; i++) {
    for (j = 0; j < LIM; j++) {
      cout << "Digite o valor da posicao (" << i << ", " << j << ") da matriz 1: ";
      cin >> mat1[i][j];
      cout << "Digite o valor da posicao (" << i << ", " << j << ") da matriz 2: ";
      cin >> mat2[i][j];
    }
  }

  //impressao da matriz 1 lida
  cout << "Matriz 1\n";
  for (i = 0; i < LIM; i++){ 
    for (j = 0; j < LIM; j++) 
      cout << mat1[i][j] << " ";
    cout << "\n";
  }

  //impressao da matriz 2 lida  
  cout << "Matriz 2\n";
  for (i = 0; i < LIM; i++){ 
    for (j = 0; j < LIM; j++) 
      cout << mat2[i][j] << " ";
    cout << "\n";
  }

  //impressao da soma das matrizes
  cout << "Matriz 1 + Matriz 2\n";
  for (i = 0; i < LIM; i++){ 
    for (j = 0; j < LIM; j++) 
      cout << mat1[i][j] + mat2[i][j] << " ";
    cout << "\n";
  }
  
  return 0;
}
