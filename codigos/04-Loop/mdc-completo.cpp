#include <iostream>

using namespace std;

//algoritmo que calcula o MDC entre dois numeros
int main() {
  int numero1, numero2; 
  int x, y, r;

  cout << "numero1 = ";
  cin >> numero1; //leitura do primeiro numero

  cout << "numero2 = ";
  cin >> numero2; //leitura do segundo numero

  /*organiza em x e y o maior e o menor valor, respectivamente*/
  if (numero1 >= numero2) {
    x = numero1;
    y = numero2;
  } else {         
    x = numero2;
    y = numero1;
  }

  cout << "x\ty\tr\n"; //caractere \t representa uma tabulacao (TAB)
  
  /* algoritmo de Euclides para MDC */
  do {
    r = x % y;
    cout << x << '\t' << y << '\t' << r << endl;    
    x = y;
    y = r;
  } while (r != 0);
  
  cout << "MDC entre " << numero1 << " e " << numero2 << " = " << x;  
  
  return 0;
}
