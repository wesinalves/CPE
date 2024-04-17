#include <iostream>

//declaracao da funcao
int soma (int op1, int op2);

int main () {
  int a = 0, b = 5;
  std::cout << soma (a, b) << "\n";
  return 0;
}

//definicao / implementacao da funcao
int soma (int op1, int op2) {
  return (op1 + op2);
}
