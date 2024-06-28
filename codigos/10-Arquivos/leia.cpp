/*
 * Cópia de arquivo para a saída padrão.
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
  ifstream file; //apontador para arquivo
  string s;

  file.open("teste.txt"); //abertura do arquivo - somente leitura

  if (file.is_open() == false) { //erro na abertura do arquivo
    cerr << "ERRO na abertura de teste.txt";
    return 1; //encerra o programa com retorno 1
  }

  //repete leitura char a char ate o final do arquivo
  //operacoes getline e >> retornam o proprio stream file, que se tiver chegado ao final do arquivo,
  //equivalera ao valor booleano false
  while (getline(file,s))
    cout << s << '\n';
  file.close();  //fechamento do arquivo

  return 0;
}
