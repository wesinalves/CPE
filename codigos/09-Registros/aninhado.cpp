#include <iostream>
#include <string>

using namespace std;

struct medias {  //registro com tres membros float, do tipo "medias"
  float p1;
  float p2;
  float p3;
};

struct ficha { //registro com 2 membros, um int e o outro e um registro do tipo medias
  string nome;
  int matricula;
  medias provas;
};

using namespace std;

int main (){

  ficha f;

  cout << "Digite nome e a matricula do aluno: ";
  getline(cin, f.nome);
  cin >> f.matricula;

  cout << "Digite a primeira nota do aluno: ";
  cin >> f.provas.p1;

  cout << "Digite a segunda nota do aluno: ";
  cin >> f.provas.p2;

  cout << "Digite a terceira nota do aluno: ";
  cin >> f.provas.p3;

  cout  << "O aluno " << f.matricula << " tirou media "
        << (f.provas.p1 + f.provas.p2 + f.provas.p3) / 3
        << endl;
  return 0;
}
