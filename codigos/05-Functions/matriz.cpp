#include <iostream>
#include <iomanip>

using namespace std;

//procedimento que imprime em cin os elementos de mat[][10]
void mostra_matriz(int mat[][10], int n_linhas) {
  int i, j; //var. locais
  
  for (i = 0; i < n_linhas; i++) {
    for (j = 0; j < 10; j++)
      cout << setw(2) << mat[i][j] << ' ';//seta uso de 2 casas para imprimir cada numero
    cout << "\n"; //quebra apos impressao de uma linha da matriz
  }
}

int main() {
	//declara e inicializa matriz
  	int mat[][10] = {{ 0,  1,  2,  3,  4,  5,  6,  7,  8,  9},
		 {10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
		 {20, 21, 22, 23, 24, 25, 26, 27, 28, 29},
		 {30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
		 {40, 41, 42, 43, 44, 45, 46, 47, 48, 49},
		 {50, 51, 52, 53, 54, 55, 56, 57, 58, 59},
		 {60, 61, 62, 63, 64, 65, 66, 67, 68, 69},
		 {70, 71, 72, 73, 74, 75, 76, 77, 78, 79}};
		 
  	mostra_matriz(mat, 8);
  	
 	return 0;
}
