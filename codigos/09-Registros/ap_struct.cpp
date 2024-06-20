#include <iostream>

struct Ponto {
  double x;
  double y;
};
using namespace std;
int main() {
  Ponto p;
  Ponto *ap_p;

  p.x = 5.0;
  p.y = 3.0;

  ap_p = &p;//ponteiro aponta para p

  //imprimindo via p
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;

  //imprimindo via ponteiro
  cout << "p.x = " << (*ap_p).x << endl;
  cout << "p.y = " << (*ap_p).y << endl;

  //imprimindo via ponteiro com operador ->
  cout << "p.x = " << ap_p->x << endl;
  cout << "p.y = " << ap_p->y << endl;

  return 0;
}
