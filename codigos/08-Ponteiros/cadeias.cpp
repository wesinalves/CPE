#include <iostream>
using namespace std;


/* Faz uma copia de orig em dest, incluindo o caracter terminador \0. 
   Supoe que dest tem espaco suficiente. */
/* note que o cabecalho void copia_str(char orig[], char dest[]) funcionaria igual*/
void copia_str(char *orig, char *dest) {
  while (*orig != '\0') {
    *dest = *orig;
    dest++;
    orig++;
  }
  *dest = *orig; //copia do '\0'
}

int main() {
  char s1[] = "cadeia de caracteres";
  char s2[64];

  copia_str(s1, s2);
  cout << "s1 -> " << s1 << endl;
  cout << "s2 -> " << s2 << endl;

  return 0;
}
