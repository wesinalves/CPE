#include <iostream>
#include <climits>

using namespace std;

//programa que mostra o valor maximo digitado em uma sequencia de inteiros
int main() {
  	int i,n,num,maior;
	
	cout << "Entre com a quantidade de numeros: "; 
	cin >> n; //ira ler n numeros a seguir
	
	/*
	INT_MIN e uma constante declarada na bilioteca climits, 
	ela representa o menor valor que pode ser armazenado 
	em uma variavel do tipo int
	*/
	maior = INT_MIN; //inicializacao da variavel maior
	
	for(i=1; i <= n; i++) {
		cout << "Entre com um inteiro: "; 
		cin >> num;
		if (num > maior) //se numero lido e MAIOR que o armazenado na variavel maior, atualizamos
			maior = num; 
	}
	cout << "O maior inteiro lido foi " << maior << endl;
    
    return 0;
}
