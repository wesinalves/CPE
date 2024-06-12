#include <iostream>

int main() {
  int    i = 100;
  char   c = 'c';
  float  f = 3.2;
  double d = 3.8;

  //apontadores
  int    *ap_int;
  char   *ap_char;
  float  *ap_float;
  double *ap_double;

  int **ap_ap_int; //apontador para apontador

  ap_int = &i;
  ap_char = &c;
  ap_float = &f;
  ap_double = &d;

  ap_ap_int = &ap_int;

  /* Os comandos a seguir irao gerar erros por parte do compilador  */
  ap_int = &f;
  ap_double = &c;

  /* Para evitar os avisos */
  ap_int = (int *)&f;

  return 0;
}
