#include <iostream>
using namespace std;

struct ficha {
  int matricula;
  float media;
};

ficha le_ficha() {
  ficha fic;
  cout << "Digite a matricula do aluno: ";
  cin >> fic.matricula;
  cout << "Digite a media do aluno: ";
  cin >> fic.media;
  return fic;
}

//const impede que f seja alterado dentro da funcao: fica somente leitura
void escreve_ficha(const ficha& f) {
  cout  << "O aluno " << f.matricula
        << " tirou media " << f.media << endl;
}

int main () {
  ficha g;
  g = le_ficha();
  escreve_ficha(g);
  return 0;
}
