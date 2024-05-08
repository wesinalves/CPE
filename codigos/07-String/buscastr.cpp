//Procura um elemento em uma cadeia de caracteres - busca linear.
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  char c;
  int i;
  bool achou = false;

  cout << "Digite uma cadeia de caracteres: ";
  cin >> str;
  cout << "Digite um caractere: ";
  cin >> c;

  //laco de busca sequencial
  for (i = 0; !achou && i<str.size(); i++)
    if(str[i] == c)
      achou = true;

  if (achou) //varreu e nao achou
    cout << "O caractere " << c << " esta presente na string " << str << "\n";
  else
    cout << "O caractere " << c << " nao esta presente na string " << str << "\n";

  return 0;
}
