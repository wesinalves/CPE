#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float coef[26];
	int grau, i;

	cout << "Grau do polinomio (grau maximo = 25): ";
	cin >> grau;
	while (grau < 0 || grau > 25) {//digitou fora do limite, repete a leitura
		cout << "Grau invalido, digite outra vez: ";
		cin >> grau;
	}
	for (i = grau; i >= 0; i--) { //leitura dos coeficientes
		cout << "coeficiente de x^" << i << ": ";
		cin >> coef[i];
	}
	cout << setprecision(1) << fixed << coef[grau] << "x^" << grau;
	for (i = grau - 1; i >= 0; i--) { //impressao do polinomio
		if (coef[i] != 0){
			if (coef[i] >= 0)
				cout << " + " << coef[i] << "x^" << i;
			else
				cout << " - " << -coef[i] << "x^" << i;
		}
			
	}
	cout << endl;
	return 0;
}
