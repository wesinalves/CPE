#include <iostream>

using namespace std;

struct ficha {
  int matricula;
  float media;
};

int main (){

  ficha f, g;

  cout << "Digite a matricula do aluno: ";
  cin >> f.matricula;

  cout << "Digite a media do aluno: ";
  cin >> f.media;

  g = f;

  cout  << "O aluno " << g.matricula
        << " tirou media " << g.media << endl;
  return 0;
}
