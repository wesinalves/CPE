#include <iostream>
#include <string>//cabecalho de strings do C++
using namespace std;

int main () {

  //pode-se declarar E inicializar uma string como aqui emabaixo
  string feliz = "Eu sou um texto feliz.";
  string triste = "Eu sou um texto triste.";
  string indeciso;
  int l;

  l = feliz.size();//obtendo tamanho da string
  cout << "Comprimento do texto feliz: " << l << endl;

  cout << "Valor de indeciso antes de qualquer operacao:\n";
  cout << indeciso << '\n';

  indeciso = feliz; //copia de strings no C++ pode ser por atribuicao direta

  cout << "Valor de indeciso depois da copia:\n";
  cout << indeciso << '\n';

  indeciso = indeciso + triste; //concatenacao pode ser feita com o +

  cout << "Valor de indeciso depois da concatenacao:\n";
  cout << indeciso;

  return 0;
}
