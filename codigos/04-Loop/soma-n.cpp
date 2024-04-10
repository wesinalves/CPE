#include <iostream>

using namespace std;

int main() {
  int n;
  int soma, parcela;

  cout << "Quantos numeros? ";
  cin >> n; //leitura

  soma = 0; //inicializa a variavel que acumulara a soma

  while (n > 0) {
    cout << "numero a ser somado: ";
    cin >> parcela; //le o valor a ser somado
    soma += parcela; //acumula
    n--; //uma parcela a menos para somar
  }
  cout << "Soma: " << soma << endl;

  return 0;
}
