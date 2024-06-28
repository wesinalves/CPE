/*
 * Le uma tabela de inteiros de um arquivo. Os dois primeiros inteiros lidos sao
 * a dimensao da tabela. A tabela é representada em memória por um vetor.
 *
 * Escreve a tabela em um arquivo texto de saída segundo o formato:
 * linhas = 3
 * colunas = 3
 * mat[0][0] = 1
 * mat[0][1] = 4
 * ...
 */
#include<iostream>
#include<fstream>
using namespace std;

int *le_matriz(int& nlin, int& ncol) {
  ifstream fr;
  int *v;
  int i;

  fr.open ("m-in.txt");

  if (!fr.is_open()) {
    cerr << "ERRO ao abrir m-in.txt\n";
    return 0;  /* retorna ponteiro nulo */
  }

  fr >> nlin >> ncol; //dimensoes da tabela
  v = new int[nlin * ncol]; //aloca vetor (nlin)*(ncol)

  for (i = 0; i < (nlin * ncol); i++)
    fr >> v[i]; //leitura dos valores para v

  fr.close();

  return v;
}

void escreve_matriz(int *v, int nlin, int ncol) {
  ofstream fw;
  int i, j;

  fw.open("m-out.txt", ios::trunc);

  if (!fw.is_open()) {
    cerr << "ERRO ao abrir m-out.txt\n";
    return;  /* Abandona a funcao */
  }

  fw << "linhas = " << nlin << '\n'; /* Dimensao da matriz */
  fw << "colunas = " << ncol << '\n';

  for (i = 0; i < nlin; i++)
    for (j = 0; j < ncol; j++)
      fw << "mat[" << i << "][" << j << "] = " << v[i*ncol + j] << '\n';//imprime como matriz

  fw.close();
}

int main() {
  int *v;
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
