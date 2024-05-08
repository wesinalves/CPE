/*
 * Balanceamento de parenteses.
 */
#include <iostream>
using namespace std;

int main() {
  char str[30];
  int i, cont=0;

  cout << "Digite uma cadeia com parenteses: ";
  cin >> str;

  for (i = 0; str[i] != '\0' && cont >= 0; i++)
    if (str[i] == '(')
      cont++;
    else
      cont--;

  if (cont == 0)
    cout << "A cadeia esta balanceada.\n";
  else
    cout << "A cadeia nao esta balanceada.\n";
    
  return 0;  
}
