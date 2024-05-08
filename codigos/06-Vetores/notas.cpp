#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  float nota[100], media=0,desvpad=0;
  int n, i;

  cout << "Numero de alunos: ";
  cin >> n;
  for (i = 0; i < n; i++) { //leitura das notas
    cout << "Nota do aluno " << i+1 << ": ";
    cin >> nota[i];
  }

  for (i = 0; i < n; i++) //calculo da media
    media = media + nota[i];
  media = media / n;

  for (i = 0; i < n; i++)//calculo do desvio padrao
    desvpad = desvpad + (nota[i]-media)*(nota[i]-media);
  desvpad = sqrt(desvpad/n);

  cout  << "Nota media = " << setprecision(1) << fixed
        << media << "\nDesvio padrao = " << desvpad	<< endl;
  return 0;
}
