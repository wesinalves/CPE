#include <iostream>
#include <cstring>//cabecalho de funcoes para c-strings
using namespace std;

int main () {

  	char feliz[50] = "Eu sou um texto feliz.";
  	char triste[50] = "Eu sou um texto triste.";
  	char indeciso[50] = "";

	int l;

	  l = strlen(feliz);//retorna tamanho da c-string
  	cout << "Comprimento do texto feliz: " << l << endl;
  	l = strlen(triste);
  	cout << "Comprimento do texto triste: " << l << endl;

  	cout << "Valor de indeciso antes de qualquer operacao:\n";
  	cout << indeciso << '\n';

  	strcpy(indeciso, feliz); //copia elementos da c-string feliz em indeciso

  	cout << "Valor de indeciso depois da copia:\n";
  	cout << indeciso << '\n';

  	strcat (indeciso, triste); //concatena c-string triste no final de indeciso

  	cout << "Valor de indeciso depois da concatenacao:\n";
  	cout << indeciso;

  	return 0;
}
