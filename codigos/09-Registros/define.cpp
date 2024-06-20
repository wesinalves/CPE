#include <iostream>
#define NOTA 10
#define MENSAGEM "Parabens, nota "

int main () {

  std::cout << "Parabens, nota " << 10 << std::endl;
  std::cout << "Parabens, nota " << NOTA << std::endl;
  std::cout << MENSAGEM << NOTA << std::endl;

  return 0;
}
