#include <iostream>
#include <string>

using namespace std;

template <typename T> void trocaGenerica(T& a, T& b) {
  T aux = a;
  a = b;
  b = aux;
}
