#include <iostream>
#define N_ELEM_1 3 //definicao de constantes
#define N_ELEM_2 4

using namespace std;

//procedimento le valores de cin e escreve em vet[]
void le_vet(int vet[], int n_elem) {
  int i;//var. local
  for (i = 0; i < n_elem; i++) {
    cout << "vet[" << i << "]: ";
    cin >> vet[i]; //leitura
  }
}

//procedimento imprime todos os elementos de vet[]
void escreve_vet(int vet[], int n_elem) {
  int i;//var. local
  for (i = 0; i < n_elem; i++)
    cout << "vet[" << i << "]: " << vet[i] << "\n";
}

int main() {
  int vet1[N_ELEM_1];
  int vet2[N_ELEM_2];

  cout << "Digite os dados do primeiro vetor\n";
  le_vet(vet1, N_ELEM_1);

  cout << "\nDigite os dados do segundo vetor\n";
  le_vet(vet2, N_ELEM_2);

  cout << "\nPrimeiro vetor\n";
  escreve_vet(vet1, N_ELEM_1);

  cout << "\nSegundo vetor\n";
  escreve_vet(vet2, N_ELEM_2);
  
  return 0;
}
