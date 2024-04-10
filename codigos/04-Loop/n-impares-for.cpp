#include <iostream>

using namespace std;

int main() {
  int n;
  int impar;
  int i;
  
  cout << "Quantos numeros impares? ";
  cin >> n;

  impar = 1;
  for (i = 1; i <= n; i++) {
    cout << impar << ' '; //imprime valor seguido de espaco
    impar = impar + 2; //calcula proximo impar
  }
  
  return 0;
  
}
