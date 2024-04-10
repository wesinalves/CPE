#include <iostream>

using namespace std;

//programa que calcula o fatorial de um numero
int main() {
  int i, n, fat;

  cout << "Entre com um numero inteiro positivo: ";
  cin >> n;

   fat = 1;
  for (i = 2; i <= n; i++)//repete o produto por i
   	fat *= i;


  cout << "O fatorial de " << n << " e igual a " << fat << endl;
  
  return 0;

}
