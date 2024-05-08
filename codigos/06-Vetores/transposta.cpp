#include <iostream>

using namespace std;

int main(){
  int mat[3][3];
  int i = 0,j = 0,k = 0;

  for (i = 0; i < 3; i++)  //leitura dos elementos da matriz
    for (j = 0; j < 3; j++){
      cout << "Digite o valor da posicao (" << i << ", " << j << "): ";
      cin >> mat[i][j];
    }

  cout << "Matriz\n";
  for (i = 0; i < 3; i++){ //exibicao da matriz original
    for (j = 0; j < 3; j++)
      cout << mat[i][j] << "\t";
    cout << "\n";
  }

  cout << "Transposta\n";
  for (i = 0; i < 3; i++){ //exibicao da matriz transposta
    for (j = 0; j < 3; j++)
      cout << mat[j][i] << "\t";
    cout << "\n";
  }
  return 0;
}
