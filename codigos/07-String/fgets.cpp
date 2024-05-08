#include <iostream>
#include <cstdio> //cabecalho que contem a funcao fgets
using namespace std;

int main () {

  char texto[20];

  /*le ate quebra-de-linha ou 20 caracteres
  na entrada padrao (stdin)*/
  fgets(texto, 20,stdin);
  cout << texto;

  return 0;
}
