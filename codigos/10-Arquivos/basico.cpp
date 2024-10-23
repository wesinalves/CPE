#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("exemplo.txt", ios::out);
  myfile << "Escrevendo isto no arquivo.\n";
  myfile.close();
  return 0;
}
