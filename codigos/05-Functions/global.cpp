#include <iostream>

int global;

//procedimento imprime conteudo de global
void imprime_global () {
  std::cout << global << "\n";
}

//procedimento que escreve na var. global
void le_global () {
  std::cout << "Digite o valor da variavel global: ";
  std::cin >> global;
}

//funcao principal
int main () {
  global = 0;
  le_global();
  imprime_global();
  std::cout << global << std::endl;
  return 0;
}
