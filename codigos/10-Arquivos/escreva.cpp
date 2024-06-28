#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open("teste.txt");
  if (myfile.is_open()){
    myfile << "Isto e uma linha de texto.\n";
    myfile << "Isto e outra linha de texto.\n";
    myfile.close();
  }
  else
    cout << "Nao foi possivel abrir o arquivo";
  return 0;
}
