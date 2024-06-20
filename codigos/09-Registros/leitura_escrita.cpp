#include <iostream>

using namespace std;

struct ficha {
  int matricula;
  float media;
};

int main (){

  ficha fichapessoa;

  cout << "Digite a matricula do aluno: ";
  cin >> fichapessoa.matricula;

  cout << "Digite a media do aluno: ";
  cin >> fichapessoa.media;

  cout  << "O aluno " << fichapessoa.matricula
        << " tirou media " << fichapessoa.media
        << endl;
  return 0;
}
