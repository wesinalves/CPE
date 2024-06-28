/*
 * Le uma lista de inteiros em um arquivo texto. O primeiro inteiro lido e
 * o tamanho da lista.
 *
 * Armazena como um vetor na memoria e escreve em outro arquivo texto de saida.
 */
#include<iostream>
#include<fstream>
using namespace std;

int *le_vetor(int& n) {
  ifstream fr;
  int *v;
  int i;

  fr.open("v-in.txt"); //arquivo origem dos dados

  if (!fr.is_open()) {
    cerr << "ERRO na abertura do arquivo v-in.txt\n";
    return 0;  /* retorna com endereco nulo */
  }

  fr >> n; //le o numero de elementos
  v = new int[n]; //alocacao do vetor

  for (i = 0; i < n; i++)
    fr >> v[i]; //leitura elemento a elemento atribuindo a v[i]

  fr.close();//leitura terminada, fecha arquivo

  return v; //retorna endereco inicial do vetor v
}

void escreve_vetor(int v[], int n) {
  ofstream  fw;
  int i;

  fw.open("v-out.txt", ios::trunc); //arquivo para guardar o vetor

  if (!fw.is_open()) {
    cerr << "ERRO na abertura do arquivo v-out.txt\n";
    return;  /* sai da funcao*/
  }

  fw << n << '\n'; /* Dimensao do vetor */

  for (i = 0; i < n; i++)
    fw << v[i] << '\n';//escrita no arquivo, elemento a elemento de v

  fw.close();
}

int main() {
  int *v;
  int n;

  v = le_vetor(n); //passagem da variavel n por referencia
  if(v!=0){
    escreve_vetor(v, n);
    delete[] v;
    return 0;
  }
  else //erro na abertura do arquivo, encerra programa com codigo de erro
    return 1;
}
