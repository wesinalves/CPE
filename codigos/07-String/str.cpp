/*
 * Le e escreve uma cadeia de caracteres.
 * O que pode acontecer se o usuario digitar uma cadeia muito grande?
 */
#include <iostream>
using namespace std;

int main() {
  char str[30];
  int i;

  cout << "Digite uma cadeia de caracteres: ";
  cin >> str; //leitura da sequencia ate um espaco ou enter

  //impressao caractere a caractere
  for (i = 0; str[i] != '\0'; i++) { // '\0' é fim de linha num vetor de caracter, para representar um string.
    cout << str[i];
  }
  cout << "\n";

  cout << str << "\n"; //laco for anterior equivale a esta unica operacao

  return 0;
}
