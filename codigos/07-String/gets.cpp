#include <iostream>
#include <cstdio> //cabecalho que contem a funcao gets
#include <string>
using namespace std;

int main () {

  char texto[50];

  gets(texto); //leitura ate haver quebra-de-linha
  cout << texto << endl;

  return (0);
}
