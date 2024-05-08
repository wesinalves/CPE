/*
 * Programa para ilustrar que o ambiente de execucao nao testa
 * se um dado acesso esta dentro dos limites de um vetor.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
  	char asteriscos[16], cifroes[16], arrobas[16];
  	int i;


	/*
	impressao dos enderecos dos vetores
	setbase(16) é um manipulador que altera a base de representacao 
	do valor a ser impresso para hexadecimal
	*/
  	cout 	<< "Endereco de arrobas\t" 
  			<< setbase(16) << (unsigned long long) arrobas 
			<< " (" << setbase(10) << (unsigned long long) arrobas << ")\n";
		
  	cout 	<< "Endereco de cifroes\t" 
  			<< setbase(16) << (unsigned long long)cifroes
			<< " (" << setbase(10) << (unsigned long long)cifroes << ")\n";
  
  	cout 	<< "Endereco de asteriscos\t" 
  			<< setbase(16) << (unsigned long long)asteriscos 
			<< " (" << setbase(10) << (unsigned long long)asteriscos << ")\n";

	for (i = 0; i < 16; i++) {//preenchendo os vetores
		asteriscos[i] = '*';
		cifroes[i]    = '$';
		arrobas[i]    = '@';
	}
  
	//mostrando o conteudo deles na tela
	for (i = 0; i < 16; i++) 
		cout << asteriscos[i];
	cout << "\n";
	for (i = 0; i < 16; i++) 
		cout << cifroes[i];
	cout << "\n";
	for (i = 0; i < 16; i++) 
		cout << arrobas[i];
	cout << "\n";
  
  for (i = 0; i < 40; i++) //preenchendo a mais que o tamanho declarado
    arrobas[i] = '@';

	//mostrando o "estrago" feito...
	for (i = 0; i < 16; i++) 
		cout << asteriscos[i];
	cout << "\n";
	for (i = 0; i < 16; i++) 
		cout << cifroes[i];
	cout << "\n";
	for (i = 0; i < 16; i++) 
		cout << arrobas[i];
	cout << "\n";
    
  return 0;
}
