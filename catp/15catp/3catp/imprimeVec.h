#include <iostream>
#include <vector>

using namespace std;

template <typename T> void imprimeVec(vector<T> &vec) {
  for (auto i: vec) {
    cout << i << ' ';
  }
  cout << endl;
}
