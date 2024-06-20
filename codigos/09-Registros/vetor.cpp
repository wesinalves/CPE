#include <iostream>
#define TAM 5

struct ficha {
  int matricula;
  float media;
};
using namespace std;

int main (){

  ficha fichasturma[TAM];
  int i;

  for (i = 0; i < TAM; i++) {
    cout << "Digite a matricula do " << i+1 << "o aluno: ";
    cin >> fichasturma[i].matricula;

    cout << "Digite a media do " << i+1 << "o aluno: ";
    cin >> fichasturma[i].media;
  }

  for (i = 0; i < TAM; i++) {
    cout  << "O aluno " << fichasturma[i].matricula
          << " tirou media " << fichasturma[i].media << endl;
  }

  return 0;
}
