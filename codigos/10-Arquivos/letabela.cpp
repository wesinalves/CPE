 /*
  * Le uma tabela de inteiros de um arquivo. Os dois primeiros inteiros lidos sao
  * a dimensao da tabela. A tabela e representada em memoria por uma
  * matriz.
  *
  * Escreve a matriz em um arquivo texto de saida segundo o formato:
  * linhas = 3
  * colunas = 3
  * mat[0][0] = 1
  * mat[0][1] = 4
  * ...
  */
#include<iostream>
#include<fstream>
using namespace std;

int **le_matriz(int& nlin, int& ncol) {
  ifstream fr;
  int **v;
  int i,j;

  fr.open ("m-in.txt");

  if (!fr.is_open()) {
    cerr << "ERRO ao abrir m-in.txt\n";
    return 0;  /* retorna ponteiro nulo */
  }

  fr >> nlin >> ncol; //dimensoes da tabela

  v = new int*[nlin]; //aloca vetor de vetores int

  for (i = 0; i < nlin; i++)
    v[i] = new int[ncol]; //aloca em cada posicao um vetor de int

    for (i = 0; i < nlin; i++)
      for (j = 0; j < ncol; j++)
        fr >> v[i][j]; //leitura dos elementos

  fr.close();

  return v;
}

void escreve_matriz(int **v, int nlin, int ncol) {
  ofstream fw;
  int i, j;

  fw.open("m-out.txt", ios::trunc);

  if (!fw.is_open()) {
    cerr << "ERRO ao abrir m-out.txt\n";
    return;  /* Abandona a função */
  }

  fw << "linhas = " << nlin << '\n'; /* Dimensão da matriz */
  fw << "colunas = " << ncol << '\n';

  for (i = 0; i < nlin; i++)
    for (j = 0; j < ncol; j++)
      fw << "mat[" << i << "][" << j << "] = " << v[i][j] << '\n';//imprime matriz

  fw.close();
}

int main() {
  int **v;
  int nlin, ncol;

  v = le_matriz(nlin, ncol); //passagem por referencia
  if(v != 0){
    escreve_matriz(v, nlin, ncol);
    delete[] v;
    return 0;
  }
  else //erro na abertura do arquivo, encerra programa com codigo de erro
    return 1;
}
