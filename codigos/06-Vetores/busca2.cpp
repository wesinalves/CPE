//Procura um elemento em uma lista de valores - busca linear.
#include <iostream>

using namespace std;
int main() {
  int lista[10], chave;
  int i;
  bool achou;

  cout << "Digite uma lista de 10 numeros inteiros: ";
  for(i=0; i<10; i++)
    cin >> lista[i];

  cout << "Digite um numero a procurar na lista: ";
  cin >> chave;

  achou = false;
  //laco de busca
  for (i = 0; !achou && i<10; i++){
  	if(lista[i]==chave)
  		achou = true;
  }

  if (achou)
	cout << "O elemento " << chave << " esta presente na lista\n";
  else
  	cout << "O elemento " << chave << " nao esta presente na lista\n";

  return 0;
}
