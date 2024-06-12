#include <iostream>

using namespace std;

int main() {
  int **ap_ap_int;
  int    *ap_int;
  int    i = 100;

  ap_int = &i;
  ap_ap_int = &ap_int;

  cout << "Nome \t\t| Endereco | Valor \n";
  cout << "i \t\t| " << &i << " | " << i << " \n";
  cout << "ap_int \t\t| " << &ap_int << " | " << ap_int << " \n";
  cout << "ap_ap_int \t| " << &ap_ap_int << " | " << ap_ap_int << " \n";

  return 0;
}

