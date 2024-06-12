#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int *p;
  int i,n;

  cin >> n;
  p = (int *) malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    p[i] = i;
    cout << p[i] << ' ';
  }
  cout << endl;
  return 0;
}
