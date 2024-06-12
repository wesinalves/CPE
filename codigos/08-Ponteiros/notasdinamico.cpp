#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void leia_notas(double nota[], int n){
  for (int i = 0; i < n; i++) { //leitura das notas
    cout << "Nota do aluno " << i+1 << ": ";
    cin >> nota[i];
  }
}
//calcula a media do vetor v
double media(double v[], int n){
  double m = 0.0;
  for (int i = 0; i < n; i++) //calculo da media
      m += v[i];
  m /= n;
  return m;
}
//calcula desv. padrao do vetor v de media med
double desvpad(double v[], int n, double med){
  double dv = 0.0;
  for (int i = 0; i < n; i++)
      dv += (v[i]-med)*(v[i]-med); //calculo do desvio padrao
  dv = sqrt(dv/n);
  return dv;
}

int main() {
  double *notas, mu, sigma;
  int tamanho;

  cout << "Numero de alunos: ";
  cin >> tamanho;

  notas = new double[tamanho]; //alocacao dinamica do vetor
  leia_notas(notas, tamanho); //chama procedimento que le em notas

  mu = media(notas, tamanho); //chama funcao que calcula media
  sigma = desvpad(notas, tamanho, mu); //chama funcao que calcula desv. padrao

  delete[] notas; //liberacao da memoria usada pelo vetor;
  cout  << "Nota media = "
        << fixed
        << setprecision(2)
        << mu
        << "\nDesvio padrao = "
        << sigma
        << endl;

  return 0;
}
