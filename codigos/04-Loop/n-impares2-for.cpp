#include <iostream>

using namespace std;

int main() {
  int i;
  int n;
  int impar;
  
  cout << "Quantos numeros impares? ";
  cin >> n;

  for (i = 0, impar = 1; i < n; i++, impar += 2)
    cout << impar << ' ';
  
  return 0;  
}
