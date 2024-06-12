#include <iostream>
#include <string>

using namespace std;

//solucao se usamos C-strings
void imprime_vetor_cadeias(char *v[], int n) {
  int i;
  for (i = 0; i < n; i++)
    cout << v[i] << '\n';
}

//solucao se usamos std::string do C++
void imprime_vetor_strings(string v[], int n){
  int i;
  for (i = 0; i < n; i++)
    cout << v[i] << '\n';
}

int main() {
  char *cores[] = {"amarelo",
		   "verde",
		   "vermelho",
		   "laranja",
		   "preto"};

  string cores2[] = {"amarelo",
		   "verde",
		   "vermelho",
		   "laranja",
		   "preto"};

  imprime_vetor_cadeias(cores, 5);
  imprime_vetor_strings(cores2, 5);

  return 0;
}
