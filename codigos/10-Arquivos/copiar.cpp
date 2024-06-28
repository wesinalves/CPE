/*
 * Copia de dois arquivos texto.
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//argc indica quantos argumentos foram informados
//argv e um vetor de strings com os argumentos informados
//o proprio nome do programa e considerado na lista de argumentos
int main (int argc, char* argv[]) {
  fstream fr, fw;
  string s;

  if (argc < 3) { //se nao informou o numero minimo de argumentos
    cout << "Uso: " << argv[0] << " <arq_origem> <arq_destino>\n";
    return 1;
  }

  fr.open(argv[1], ios::in);

  if (!fr.is_open()) { //se argumento passado como nome de arquivo foi errado
    cerr << "ERRO ao tentar abrir: " << argv[1]; //mensagem de erro
    return 2; //sai do programa
  }

  fw.open(argv[2], ios::out | ios::app);

  if (!fw.is_open()) { //erro no argumento passado como arquivo de destino
    cerr << "ERRO ao tentar abrir: " << argv[2]; //mensagem de erro
    return 3;
  }

  //leitura e copia linha a linha de texto
  while(getline(fr,s)){
    fw << s << endl;
  }

  fr.close();
  fw.close();

  return 0;
}
