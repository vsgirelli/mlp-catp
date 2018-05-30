#include "copia.h"
#include "imprimeVec.h"

using namespace std;

int main(int argc, char **argcv) {
  vector<int> vec1{1, 2, 3, 4};
  vector<int> vec2{5, 6, 7};

  copia(vec1, vec2);
  imprimeVec(vec1);

  vector<char> cvec1{'a', 'b', 'c'};
  vector<char> cvec2{'d', 'e', 'f'};

  copia(cvec1, cvec2);
  imprimeVec(cvec1);
}
