#include <iostream>
using namespace std;

int main(){
  int **mat;
  int i = 0,j = 0,d,k;


  cout << "Digite as dimensoes da matriz: ";
  cin >> d >> k;

  //alocacao
  mat = new int*[d];
  for (i = 0; i < d; i++)  //alocacao para cada linha
    mat[i]= new int[k];


  for (i = 0; i < d; i++)  //leitura dos elementos da matriz
    for (j = 0; j < k; j++){
      cout << "Digite o valor da posicao (" << i << ", " << j << "): ";
      cin >> mat[i][j];
    }

  cout << "Matriz\n";
  for (i = 0; i < d; i++){ //exibicao da matriz original
    for (j = 0; j < k; j++)
      cout << mat[i][j] << ' ';
    cout << "\n";
  }

  cout << "Transposta\n";
  for (i = 0; i < k; i++){ //exibicao da matriz transposta
    for (j = 0; j < d; j++)
      cout << mat[j][i] << ' ';
    cout << "\n";
  }

  //desalocacao
  for (i = 0; i < d; i++)  //desalocacao das colunas de cada linha
	 delete[] mat[i];
  delete[] mat; //desalocacao final do vetor de linhas

  return 0;
}
