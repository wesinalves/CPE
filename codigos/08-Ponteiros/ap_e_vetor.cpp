#include <iostream>

using namespace std;

//rotina convencional
void imprime_vetor(int v[], int n) {
  int i;
  for (i = 0; i < n; i++) 
    cout << v[i] << ' ';
  cout << "\n";
}

//rotina faz exatamente a mesma coisa que imprime_vetor!
void imprime_vetor2(int *p_int, int n) {
  int i;
  for (i = 0; i < n; i++)
    cout << *(p_int+i) << ' ';
  cout << "\n";
}

int main() {
  int v[] = {10, 20, 30, 40, 50};

  imprime_vetor(v, 5);
  imprime_vetor2(v, 5);

  //se desejo imprimir a partir do segundo elemento
  imprime_vetor(&v[1], 4);
  imprime_vetor2(&v[1], 4);

  return 0;

}
