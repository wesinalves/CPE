#include <iostream>

using namespace std;

int main() {
  int n;
  int soma, parcela;
  
  parcela = 0;
  soma = 0;

  do {
    cout << "numero a ser somado (0 para sair): ";
    cin >> parcela; //leitura
    soma += parcela; //acumula valor em soma
  } while (parcela != 0);

  cout << "Soma: " << soma << endl;  
    
  return 0;

}
