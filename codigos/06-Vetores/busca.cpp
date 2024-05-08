//Procura um elemento em uma lista de valores - busca linear.
#include <iostream>

using namespace std;

int main() {
  int lista[10], chave;
  int i;

  cout << "Digite uma lista de 10 numeros inteiros: ";
  for(i=0; i<10; i++)
    cin >> lista[i];

  cout << "Digite um numero a procurar na lista: ";
  cin >> chave;

  //laco de busca - veja que e somente 1 linha de comando
  for (i = 0; lista[i] != chave && i<10; i++);

  if (i<10) //se laco for parou antes do 10, significa que encontrou chave
    cout << "O elemento " << chave << " esta presente na lista\n";
  else //caso contrario, nao encontrou a chave
    cout << "O elemento " << chave << " nao esta presente na lista\n";

  return 0;
}
