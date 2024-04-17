#include <iostream>
using namespace std;

//todos os parametros sao referencias
void duplica(int& a, int& b, int& c){
  a*=2;
  b*=2;
  c*=2;
}

int main (){
  int x=1, y=3, z=7;
  duplica(x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}
