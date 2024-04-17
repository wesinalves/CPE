/*
 *  Exibe uma linha com n asteriscos
 */

#include <iostream>

using namespace std;

int main() {

  int i, n;

  cout << "Tamanho: ";
  cin >> n; //leitura do comprimento da linha

  for (i = 0; i < n; i++){
    
    cout << "*";
    if(i == 5){
      continue;
    }    

  } //impressao
    
  	cout << "\n";
    
  return 0;

}

